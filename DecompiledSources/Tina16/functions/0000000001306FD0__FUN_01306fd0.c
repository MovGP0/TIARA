/* Ghidra address: 01306fd0 */
/* Ghidra symbol: FUN_01306fd0 */


undefined8 FUN_01306fd0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_006dd6f0(param_2);
  uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar1 + -1);
  iVar1 = FUN_012e58a0(uVar2);
  if (iVar1 == 1) {
    iVar1 = FUN_006dd6f0(param_2);
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar1 + -1);
    uVar2 = FUN_012e5e40(uVar2,1);
  }
  else {
    iVar1 = FUN_006dd6f0(param_2);
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar1 + -1);
    iVar1 = FUN_012e58a0(uVar2);
    if (iVar1 == 2) {
      iVar1 = FUN_006dd6f0(param_2);
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar1 + -1);
      uVar2 = FUN_012e5e40(uVar2,2);
    }
    else {
      iVar1 = FUN_006dd6f0(param_2);
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar1 + -1);
      iVar1 = FUN_012e58a0(uVar2);
      if (iVar1 == 3) {
        iVar1 = FUN_006dd6f0(param_2);
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar1 + -1);
        uVar2 = FUN_012e5e40(uVar2,0);
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

