/* Ghidra address: 01306f40 */
/* Ghidra symbol: FUN_01306f40 */


int FUN_01306f40(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_006dd6f0(param_2);
  uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar1 + -1);
  iVar1 = FUN_012e58a0(uVar2);
  if (iVar1 == 0) {
    iVar1 = FUN_006dd6f0(param_2);
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar1 + -1);
    iVar1 = FUN_012e58b0(uVar2);
  }
  else {
    iVar1 = FUN_006dd6f0(param_2);
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar1 + -1);
    iVar1 = FUN_012e5ba0(uVar2);
  }
  return iVar1 + -1;
}

