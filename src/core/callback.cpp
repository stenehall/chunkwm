#include <stdio.h>
#include "accessibility/carbon.h"
#include "accessibility/event.h"

// NOTE(koekeishiya): Application-related callbacks.
EVENT_CALLBACK(Callback_ChunkWM_ApplicationLaunched)
{
    carbon_application_details *Info =
        (carbon_application_details *) Event->Context;

    printf("%d: Launched '%s'\n", Info->PID, Info->ProcessName);
    EndCarbonApplicationDetails(Info);
}

EVENT_CALLBACK(Callback_ChunkWM_ApplicationTerminated)
{
    carbon_application_details *Info =
        (carbon_application_details *) Event->Context;

    printf("%d: Terminated '%s'\n", Info->PID, Info->ProcessName);
    EndCarbonApplicationDetails(Info);
}

EVENT_CALLBACK(Callback_ChunkWM_ApplicationActivated)
{
}
EVENT_CALLBACK(Callback_ChunkWM_ApplicationVisible)
{
}
EVENT_CALLBACK(Callback_ChunkWM_ApplicationHidden)
{
}

// NOTE(koekeishiya): Window-related callbacks
EVENT_CALLBACK(Callback_ChunkWM_WindowCreated)
{
}
EVENT_CALLBACK(Callback_ChunkWM_WindowDestroyed)
{
}
EVENT_CALLBACK(Callback_ChunkWM_WindowFocused)
{
}
EVENT_CALLBACK(Callback_ChunkWM_WindowMoved)
{
}
EVENT_CALLBACK(Callback_ChunkWM_WindowResized)
{
}
EVENT_CALLBACK(Callback_ChunkWM_WindowMinimized)
{
}
EVENT_CALLBACK(Callback_ChunkWM_WindowDeminimized)
{
}
EVENT_CALLBACK(Callback_ChunkWM_WindowTitleChanged)
{
}

// NOTE(koekeishiya): Display-related callbacks
EVENT_CALLBACK(Callback_ChunkWM_DisplayAdded)
{
}
EVENT_CALLBACK(Callback_ChunkWM_DisplayRemoved)
{
}
EVENT_CALLBACK(Callback_ChunkWM_DisplayMoved)
{
}
EVENT_CALLBACK(Callback_ChunkWM_DisplayResized)
{
}

EVENT_CALLBACK(Callback_ChunkWM_DisplayChanged)
{
}
EVENT_CALLBACK(Callback_ChunkWM_SpaceChanged)
{
}

// NOTE(koekeishiya): Mouse-related callbacks
EVENT_CALLBACK(Callback_ChunkWM_MouseMoved)
{
}

EVENT_CALLBACK(Callback_ChunkWM_LeftMouseDown)
{
}
EVENT_CALLBACK(Callback_ChunkWM_LeftMouseDragged)
{
}
EVENT_CALLBACK(Callback_ChunkWM_LeftMouseUp)
{
}

EVENT_CALLBACK(Callback_ChunkWM_RightMouseDown)
{
}
EVENT_CALLBACK(Callback_ChunkWM_RightMouseDragged)
{
}
EVENT_CALLBACK(Callback_ChunkWM_RightMouseUp)
{
}
