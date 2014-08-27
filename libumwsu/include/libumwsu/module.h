#ifndef _LIBUMWSU_MODULE_H_
#define _LIBUMWSU_MODULE_H_

#include <libumwsu/status.h>

#ifdef __cplusplus
extern "C" {
#endif

enum umwsu_mod_status {
  UMWSU_MOD_OK,
  UMWSU_MOD_INIT_ERROR,
  UMWSU_MOD_CONF_ERROR,
};

typedef enum umwsu_mod_status (*umwsu_mod_conf_init_t)(void **pmod_conf_data);
typedef enum umwsu_mod_status (*umwsu_mod_conf_t)(const char *key, const char *value, void *mod_conf_data);
typedef enum umwsu_mod_status (*umwsu_mod_init_t)(void **pmod_data);
typedef enum umwsu_scan_status (*umwsu_mod_scan)(const char *path, void *mod_data);
typedef enum umwsu_mod_status (*umwsu_mod_close)(void *mod_data);

#ifdef __cplusplus
}
#endif

#endif
