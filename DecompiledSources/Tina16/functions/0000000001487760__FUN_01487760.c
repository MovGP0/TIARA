/* Ghidra address: 01487760 */
/* Ghidra symbol: FUN_01487760 */


void FUN_01487760(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_014869a0(param_1,param_2);
  uVar2 = FUN_014868f0(param_1,param_2,uVar1);
  if ((int)uVar2 < 0) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_014868c0(param_1);
      uVar2 = FUN_014868f0(param_1,param_2,uVar1);
    }
    FUN_01486b30(param_1,uVar1,~uVar2,param_2,(char)param_3);
  }
  else {
    FUN_01486bb0(param_1,uVar2,param_3);
  }
  return;
}

