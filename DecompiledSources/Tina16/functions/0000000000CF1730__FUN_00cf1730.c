/* Ghidra address: 00cf1730 */
/* Ghidra symbol: FUN_00cf1730 */


undefined8 FUN_00cf1730(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_10;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_48 = 0;
  local_60 = 0;
  local_40 = 0;
  local_10 = 0;
  FUN_00416ba0(&local_10,&DAT_00cf1a18,
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x28) + 0x18));
  local_38 = local_10;
  local_30 = 0x11;
  FUN_00cee360(&local_40,*(undefined8 *)(param_1 + 0x38),0,*(undefined2 *)(param_1 + 0x60),
               *(undefined8 *)(param_1 + 0x58));
  local_28 = local_40;
  local_20 = 0x11;
  FUN_00876cf0(param_2,L"%s\r\nContent-Disposition: form-data; name=\"%s\"",&local_38,1);
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
  }
  if (0 < iVar1) {
    FUN_00cee360(&local_60,*(undefined8 *)(param_1 + 0x18),0,*(undefined2 *)(param_1 + 0x60),
                 *(undefined8 *)(param_1 + 0x58));
    local_58 = local_60;
    local_50 = 0x11;
    FUN_00876cf0(&local_48,L"; filename=\"%s\"",&local_58,0);
    FUN_00416ad0(param_2,local_48);
  }
  FUN_00416ad0(param_2,&DAT_00cf1ac0);
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + -4);
  }
  if (0 < iVar1) {
    local_58 = *(undefined8 *)(param_1 + 0x28);
    local_50 = 0x11;
    FUN_00876cf0(&local_68,L"Content-Type: %s",&local_58,0);
    FUN_00416ad0(param_2,local_68);
    iVar1 = 0;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + -4);
    }
    if (0 < iVar1) {
      local_58 = *(undefined8 *)(param_1 + 0x20);
      local_50 = 0x11;
      FUN_00876cf0(&local_70,L"; charset=\"%s\"",&local_58,0);
      FUN_00416ad0(param_2,local_70);
    }
    FUN_00416ad0(param_2,&DAT_00cf1ac0);
  }
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x30) + -4);
  }
  if (0 < iVar1) {
    local_58 = *(undefined8 *)(param_1 + 0x30);
    local_50 = 0x11;
    FUN_00876cf0(&local_78,L"Content-Transfer-Encoding: %s\r\n",&local_58,0);
    FUN_00416ad0(param_2,local_78);
  }
  FUN_00416ad0(param_2,&DAT_00cf1ac0);
  FUN_00414560(&local_78,4);
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_10);
  return param_2;
}

