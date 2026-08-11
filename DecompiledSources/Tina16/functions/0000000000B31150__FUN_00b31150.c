/* Ghidra address: 00b31150 */
/* Ghidra symbol: FUN_00b31150 */


int FUN_00b31150(longlong param_1,undefined2 param_2,undefined2 param_3,undefined1 param_4,
                ushort param_5,undefined8 param_6)

{
  int iVar1;
  int local_14;
  undefined8 local_10;
  
  local_10 = 0;
  local_14 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_004144d0(param_1 + 0x28);
  FUN_004144d0(param_1 + 0x20);
  *(undefined2 *)(param_1 + 0x18) = param_3;
  *(undefined1 *)(param_1 + 0x1a) = param_4;
  if ((param_5 & 8) == 0) {
    FUN_00414bf0(param_1 + 0x10,param_6);
  }
  else {
    FUN_00b30e70(*(undefined8 *)(param_1 + 0x40),&local_10,param_2,param_3,param_4);
    FUN_00414bf0(param_1 + 0x10,local_10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      FUN_00414bf0(param_1 + 0x10,param_6);
    }
  }
  FUN_00b31090(param_1);
  FUN_00b33080(param_1);
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) == 0) {
    FUN_00b33970(param_1);
    iVar1 = local_14;
  }
  local_14 = iVar1;
  FUN_004144d0(&local_10);
  return local_14;
}

