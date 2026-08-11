/* Ghidra address: 00cd1b90 */
/* Ghidra symbol: FUN_00cd1b90 */


undefined8 FUN_00cd1b90(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint local_40 [2];
  undefined1 local_38;
  undefined8 local_30;
  int local_28 [2];
  longlong local_20;
  
  local_30 = 0;
  FUN_00414480(param_2);
  FUN_00cd1b20(param_1,local_28);
  if (local_28[0] != 0) {
    uVar1 = 0;
    iVar2 = local_28[0];
    do {
      local_40[0] = (uint)*(byte *)(local_20 + (ulonglong)uVar1);
      local_38 = 0;
      FUN_00876cf0(&local_30,L"%.2x",local_40,0);
      FUN_00416ad0(param_2,local_30);
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(&local_30);
  return param_2;
}

