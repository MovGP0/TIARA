/* Ghidra address: 00e81b60 */
/* Ghidra symbol: FUN_00e81b60 */


undefined4 FUN_00e81b60(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)(param_1 + 0x400c0) == '\0') {
    FUN_00e815c0(param_1);
  }
  iVar1 = 0;
  local_14 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  *(int *)(param_1 + 0xa4) = iVar1;
  if (*(int *)(param_1 + 0xac) <= iVar1) {
    if (*(char *)(param_1 + 0x400b4) == '\0') {
      FUN_00bd1700(&local_10,param_2);
      FUN_00414ad0(param_1 + 0x400c8,local_10);
    }
    else {
      FUN_00414ad0(param_1 + 0x400c8,param_2);
    }
    lVar2 = FUN_00416740(*(undefined8 *)(param_1 + 0x400c8));
    *(longlong *)(param_1 + 0x80) = lVar2;
    *(longlong *)(param_1 + 0x88) = lVar2 + (longlong)*(int *)(param_1 + 0xa4) * 2;
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x80) + -2;
    local_14 = FUN_00e817c0();
  }
  FUN_00414480(&local_10);
  return local_14;
}

