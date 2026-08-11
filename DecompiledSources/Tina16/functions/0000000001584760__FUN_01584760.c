/* Ghidra address: 01584760 */
/* Ghidra symbol: FUN_01584760 */


void FUN_01584760(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_015837c0(param_1,param_2);
  uVar2 = FUN_01583710(param_1,param_2,uVar1);
  if ((int)uVar2 < 0) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_015836e0(param_1);
      uVar2 = FUN_01583710(param_1,param_2,uVar1);
    }
    FUN_015839f0(param_1,uVar1,~uVar2,param_2,param_3);
  }
  else {
    FUN_01583a70(param_1,uVar2,param_3);
  }
  return;
}

