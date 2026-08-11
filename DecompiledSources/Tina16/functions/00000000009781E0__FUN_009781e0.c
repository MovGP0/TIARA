/* Ghidra address: 009781e0 */
/* Ghidra symbol: FUN_009781e0 */


void FUN_009781e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  undefined *local_30;
  
  local_40 = param_4;
  if ((char)param_1[0xf] == '\0') {
    FUN_00978130(param_1,0xe,param_3);
    local_48 = L"\n<!ATTLIST ";
    local_38 = &LAB_00978368;
    (**(code **)(*param_1 + 0xb8))(param_1,param_2,param_3,&local_48,2,0);
    FUN_00414b90(param_1 + 0x11,param_4);
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  else {
    iVar1 = FUN_00416420(param_1[0x11],param_4);
    if (iVar1 != 0) {
      local_30 = &DAT_00978344;
      (**(code **)(*param_1 + 0xb8))(param_1,param_2,param_3,&local_30,0,0);
      FUN_009780f0(param_1,0xe,param_3);
      FUN_00978130(param_1,0xe,param_3);
      local_48 = L"\n<!ATTLIST ";
      local_38 = &LAB_00978368;
      (**(code **)(*param_1 + 0xb8))(param_1,param_2,param_3,&local_48,2,0);
      FUN_00414b90(param_1 + 0x11,param_4);
    }
  }
  return;
}

