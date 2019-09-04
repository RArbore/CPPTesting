        #include <cmrc/cmrc.hpp>
#include <map>
#include <utility>

namespace cmrc {
namespace foo-resources {

namespace res_chars {
// These are the files which are available in this resource library
// Pointers to NAMEPSPACE
extern const char* const f_d1df_NAMEPSPACE_begin;
extern const char* const f_d1df_NAMEPSPACE_end;
// Pointers to foo
:rc
extern const char* const f_e5eb_foo__rc_begin;
extern const char* const f_e5eb_foo__rc_end;
}

namespace {

const cmrc::detail::index_type&
get_root_index() {
    static cmrc::detail::directory root_directory_;
    static cmrc::detail::file_or_directory root_directory_fod{root_directory_};
    static cmrc::detail::index_type root_index;
    root_index.emplace("", &root_directory_fod);
    struct dir_inl {
        class cmrc::detail::directory& directory;
    };
    dir_inl root_directory_dir{root_directory_};
    (void)root_directory_dir;
    
    root_index.emplace(
        "NAMEPSPACE",
        root_directory_dir.directory.add_file(
            "NAMEPSPACE",
            res_chars::f_d1df_NAMEPSPACE_begin,
            res_chars::f_d1df_NAMEPSPACE_end
        )
    );
    root_index.emplace(
        "foo
    :rc",
        root_directory_dir.directory.add_file(
            "foo
    :rc",
            res_chars::f_e5eb_foo__rc_begin,
            res_chars::f_e5eb_foo__rc_end
        )
    );
    return root_index;
}

}

cmrc::embedded_filesystem get_filesystem() {
    static auto& index = get_root_index();
    return cmrc::embedded_filesystem{index};
}

} // foo-resources
} // cmrc
    