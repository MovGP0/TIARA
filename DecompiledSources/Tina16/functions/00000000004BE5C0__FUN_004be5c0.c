/* Ghidra address: 004be5c0 */
/* Ghidra symbol: FUN_004be5c0 */


void FUN_004be5c0(longlong *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined1 *local_80;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_38;
  undefined8 local_30;
  undefined8 *local_28;
  uint local_1c;
  
  local_80 = auStack_a8;
  local_30 = 0;
  local_88 = param_1[0xc];
  puVar1 = auStack_a8;
  if (local_88 != 0) {
    iVar3 = *(int *)(local_88 + 0x10);
    local_1c = 0;
    puVar1 = auStack_a8;
    if (-1 < iVar3 + -1) {
      do {
        local_80 = puVar1;
        local_48 = param_1[0xc];
        if (*(uint *)(local_48 + 0x10) <= local_1c) {
          FUN_00594f90();
        }
        local_28 = *(undefined8 **)(*(longlong *)(local_48 + 8) + (longlong)(int)local_1c * 8);
        FUN_00414b50(&local_30,local_28[5]);
        (**(code **)(*param_1 + 0x48))(param_1,&local_30);
        local_38 = FUN_004bd730(local_28[2],local_30);
        if ((local_38 == 0) && (param_1[0x1e] != 0)) {
          (*(code *)param_1[0x1e])(param_1[0x1f],param_1,local_30,&local_38);
        }
        local_50 = param_1[0xc];
        if (*(uint *)(local_50 + 0x10) <= local_1c) {
          FUN_00594f90();
        }
        FUN_004be4e0(*(undefined8 *)(*(longlong *)(local_50 + 8) + (longlong)(int)local_1c * 8));
        if ((local_38 == 0) && (cVar2 = FUN_004bd580(local_28), cVar2 != '\0')) {
          local_58 = param_1[0xc];
          if (*(uint *)(local_58 + 0x10) <= local_1c) {
            FUN_00594f90();
          }
          FUN_004f2a30(DAT_02011648,
                       *(undefined8 *)(*(longlong *)(local_58 + 8) + (longlong)(int)local_1c * 8));
          local_60 = param_1[0xc];
          local_68 = 0;
          FUN_005952e0(local_60 + 8,&local_68,local_1c);
        }
        else {
          (**(code **)*local_28)(local_28,local_38);
        }
        local_1c = local_1c + 1;
        iVar3 = iVar3 + -1;
        puVar1 = local_80;
      } while (iVar3 != 0);
    }
    FUN_004be8e0(param_1);
    puVar1 = local_80;
  }
  local_80 = puVar1;
  FUN_00414480(&local_30);
  return;
}

