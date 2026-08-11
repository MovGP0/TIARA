/* Ghidra address: 006d81d0 */
/* Ghidra symbol: FUN_006d81d0 */


void FUN_006d81d0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_006d5610(param_1,param_2);
  if (((*(char *)(param_1 + 0x548) == '\0') && (-1 < param_2)) &&
     (param_2 < *(int *)(*(longlong *)(param_1 + 0x528) + 0x10))) {
    lVar2 = FUN_006d7610(param_1,param_2);
    if (*(char *)(lVar2 + 0x4a0) != '\0') {
      uVar1 = FUN_006d8290(param_1,param_2);
      uVar3 = FUN_006d7610(param_1,uVar1);
      FUN_006d78a0(param_1,uVar3);
    }
  }
  return;
}

