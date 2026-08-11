/* Ghidra address: 00b4ef80 */
/* Ghidra symbol: FUN_00b4ef80 */


void FUN_00b4ef80(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong local_10;
  
  local_10 = 0;
  if (((*(int *)(param_1 + 0x5c) == 0x100) || (*(int *)(param_1 + 0x5c) == 0x102)) ||
     (*(int *)(param_1 + 0x5c) == 8)) {
    FUN_00467e90(&local_10,param_1 + 0x40);
    iVar2 = 0;
    if (local_10 != 0) {
      iVar2 = *(int *)(local_10 + -4);
    }
    if (0xffff < iVar2) {
      uVar1 = FUN_00b146c0(&PTR_FUN_00b141e0,1,3);
      FUN_004134c0(uVar1);
    }
  }
  FUN_00414480(&local_10);
  return;
}

