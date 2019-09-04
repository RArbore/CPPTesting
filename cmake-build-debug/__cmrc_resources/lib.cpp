        #include <cmrc/cmrc.hpp>
#include <map>
#include <utility>

namespace cmrc {
namespace foo {

namespace res_chars {
// These are the files which are available in this resource library
// Pointers to resources/sheet.png
extern const char* const f_a065_resources_sheet_png_begin;
extern const char* const f_a065_resources_sheet_png_end;
// Pointers to maps/map1.csv
extern const char* const f_7375_maps_map1_csv_begin;
extern const char* const f_7375_maps_map1_csv_end;
// Pointers to maps/map2.csv
extern const char* const f_82c9_maps_map2_csv_begin;
extern const char* const f_82c9_maps_map2_csv_end;
// Pointers to maps/map3.csv
extern const char* const f_578f_maps_map3_csv_begin;
extern const char* const f_578f_maps_map3_csv_end;
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
    static auto f_55b5_resources_dir = root_directory_dir.directory.add_subdir("resources");
    root_index.emplace("resources", &f_55b5_resources_dir.index_entry);
    static auto f_7e94_maps_dir = root_directory_dir.directory.add_subdir("maps");
    root_index.emplace("maps", &f_7e94_maps_dir.index_entry);
    root_index.emplace(
        "resources/sheet.png",
        f_55b5_resources_dir.directory.add_file(
            "sheet.png",
            res_chars::f_a065_resources_sheet_png_begin,
            res_chars::f_a065_resources_sheet_png_end
        )
    );
    root_index.emplace(
        "maps/map1.csv",
        f_7e94_maps_dir.directory.add_file(
            "map1.csv",
            res_chars::f_7375_maps_map1_csv_begin,
            res_chars::f_7375_maps_map1_csv_end
        )
    );
    root_index.emplace(
        "maps/map2.csv",
        f_7e94_maps_dir.directory.add_file(
            "map2.csv",
            res_chars::f_82c9_maps_map2_csv_begin,
            res_chars::f_82c9_maps_map2_csv_end
        )
    );
    root_index.emplace(
        "maps/map3.csv",
        f_7e94_maps_dir.directory.add_file(
            "map3.csv",
            res_chars::f_578f_maps_map3_csv_begin,
            res_chars::f_578f_maps_map3_csv_end
        )
    );
    return root_index;
}

}

cmrc::embedded_filesystem get_filesystem() {
    static auto& index = get_root_index();
    return cmrc::embedded_filesystem{index};
}

} // foo
} // cmrc
    