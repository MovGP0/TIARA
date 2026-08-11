/* Ghidra address: 00a394c0 */
/* Ghidra symbol: FUN_00a394c0 */


void FUN_00a394c0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (param_2 == (longlong *)0x0) {
    FUN_00a39570(param_1);
  }
  else {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_00a2f148);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_005f92e8);
      if (cVar1 == '\0') {
        FUN_004b1060(param_1,param_2);
      }
      else {
        uVar4 = (**(code **)(*param_2 + 0xe8))(param_2);
        uVar2 = (**(code **)(*param_2 + 0x58))(param_2);
        uVar3 = FUN_0060a330(param_2);
        uVar3 = FUN_005fbf20(uVar3);
        FUN_00a3be70(param_1,uVar4,uVar2,uVar3);
      }
    }
    else {
      FUN_00a3c080(param_1,param_2);
    }
  }
  return;
}

