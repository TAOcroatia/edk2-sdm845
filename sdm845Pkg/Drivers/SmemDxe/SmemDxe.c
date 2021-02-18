#include <Library/DebugLib.h>

EFI_STATUS EFIAPI InitSmem(IN EFI_HANDLE ImageHandle, IN EFI_SYSTEM_TABLE *SystemTable){
    while (1)
    {
        DEBUG ((DEBUG_WARN, "In the beninging \n", __FUNCTION__, __LINE__));
    }
    
    return 0;
}