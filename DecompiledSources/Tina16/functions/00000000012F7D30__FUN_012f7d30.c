/* Ghidra address: 012f7d30 */
/* Ghidra symbol: FUN_012f7d30 */


void FUN_012f7d30(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  if (lVar2 != 0) {
    uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
    iVar1 = FUN_006dd6f0(uVar3);
    if (-1 < iVar1 + -1) {
      uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
      iVar1 = FUN_006dd6f0(uVar3);
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar1 + -1);
      FUN_012e5850(uVar3,0);
      FUN_01306350(param_1,1);
    }
  }
  return;
}

