/* Ghidra address: 015c0660 */
/* Ghidra symbol: FUN_015c0660 */


void FUN_015c0660(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  int local_24;
  int local_1c;
  
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  if (param_1[0xf] == 0) {
    local_24 = (**(code **)(*param_1 + 0x28))(param_1);
    local_28 = local_24;
    if (local_24 < 0x3e9) {
      local_28 = 1000;
    }
    lVar2 = FUN_015bfc50(&PTR_FUN_015b98a8,1,local_28);
    param_1[0xf] = lVar2;
  }
  if ((char)param_1[0x11] == '\0') {
    FUN_015bfb90(param_1[0xf]);
    iVar1 = (**(code **)(*param_1 + 0x28))();
    local_1c = 0;
    if (-1 < iVar1 + -1) {
      do {
        if (*(char *)((longlong)param_1 + 0x4a) == '\0') {
          (**(code **)(*param_1 + 0x18))(param_1,&local_38,local_1c);
          FUN_015bf270(&local_30,local_38);
          FUN_015bfad0(param_1[0xf],local_30,local_1c);
        }
        else {
          (**(code **)(*param_1 + 0x18))(param_1,&local_40,local_1c);
          FUN_015bfad0(param_1[0xf],local_40,local_1c);
        }
        local_1c = local_1c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  FUN_00414560(&local_40,3);
  return;
}

