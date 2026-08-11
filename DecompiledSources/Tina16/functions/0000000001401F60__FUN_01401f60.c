/* Ghidra address: 01401f60 */
/* Ghidra symbol: FUN_01401f60 */


void FUN_01401f60(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x890) = 0;
  FUN_00b0ae40(*(undefined8 *)(param_1 + 0x710));
  lVar1 = *(longlong *)(param_1 + 0x8c0);
  if (lVar1 != 0) {
    iVar2 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x700));
    FUN_0040d200(lVar1,(longlong)(iVar2 * 2),0);
  }
  return;
}

