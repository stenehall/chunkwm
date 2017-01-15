#ifndef CHUNKWM_PLUGIN_API_H
#define CHUNKWM_PLUGIN_API_H

#include "plugin.h"

#define PLUGIN_FUNC(name) void name(plugin *Plugin)
typedef PLUGIN_FUNC(plugin_init_func);
typedef PLUGIN_FUNC(plugin_deinit_func);

#define PLUGIN_MAIN_FUNC(name) \
    bool name(plugin *Plugin,\
            const char *Node,\
            const char *Data,\
            unsigned int DataSize)
typedef PLUGIN_MAIN_FUNC(plugin_main_func);

/* TODO(koekeishiya): ?? */
#if 0
struct plugin_vtable
{
    void (*Func)();
    const char *Name;
};
#endif

struct plugin
{
    plugin_init_func *Init;
    plugin_deinit_func *DeInit;
    plugin_main_func *Run;
#if 0
    plugin_vtable *VTable;
#endif
};

#endif
