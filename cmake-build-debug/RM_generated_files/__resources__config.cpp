#include "ResourceManager/ResourceHandle.h"

ResourceHandle::ResourceHandle(std::string resource_name) {
  if (resource_name == "resources/sheet.png") {
    extern const unsigned char _resource_resources__slash__sheet__dot__png_data[];
    extern const size_t _resource_resources__slash__sheet__dot__png_len;
    m_data_start = _resource_resources__slash__sheet__dot__png_data;
    m_data_len = _resource_resources__slash__sheet__dot__png_len;
  } else if (resource_name == "maps/map1.csv") {
    extern const unsigned char _resource_maps__slash__map1__dot__csv_data[];
    extern const size_t _resource_maps__slash__map1__dot__csv_len;
    m_data_start = _resource_maps__slash__map1__dot__csv_data;
    m_data_len = _resource_maps__slash__map1__dot__csv_len;
  } else if (resource_name == "maps/map2.csv") {
    extern const unsigned char _resource_maps__slash__map2__dot__csv_data[];
    extern const size_t _resource_maps__slash__map2__dot__csv_len;
    m_data_start = _resource_maps__slash__map2__dot__csv_data;
    m_data_len = _resource_maps__slash__map2__dot__csv_len;
  } else if (resource_name == "maps/map3.csv") {
    extern const unsigned char _resource_maps__slash__map3__dot__csv_data[];
    extern const size_t _resource_maps__slash__map3__dot__csv_len;
    m_data_start = _resource_maps__slash__map3__dot__csv_data;
    m_data_len = _resource_maps__slash__map3__dot__csv_len;
  } else if (resource_name == "maps/map4.csv") {
    extern const unsigned char _resource_maps__slash__map4__dot__csv_data[];
    extern const size_t _resource_maps__slash__map4__dot__csv_len;
    m_data_start = _resource_maps__slash__map4__dot__csv_data;
    m_data_len = _resource_maps__slash__map4__dot__csv_len;
  } else {
#ifdef RM_NO_EXCEPTIONS
    m_data_start = nullptr;
    m_data_len = 0;
#else
    throw ResourceNotFound{resource_name};
#endif
  }
}
