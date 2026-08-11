/* Ghidra address: 012feed0 */
/* Ghidra symbol: FUN_012feed0 */


void FUN_012feed0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  iVar2 = FUN_006dd6f0(uVar1);
  uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
  FUN_012e5830(uVar1,0);
  return;
}

