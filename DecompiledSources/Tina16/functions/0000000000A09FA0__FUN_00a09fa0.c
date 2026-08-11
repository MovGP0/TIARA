/* Ghidra address: 00a09fa0 */
/* Ghidra symbol: FUN_00a09fa0 */


void FUN_00a09fa0(longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_00a09250);
  if (cVar2 == '\0') {
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_005f92e8);
    if (cVar2 == '\0') {
      FUN_004b1060(param_1,param_2);
    }
    else {
      FUN_00a0b890(param_1);
      FUN_00a0b860(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))(*(longlong **)(param_1 + 0x50),param_2);
    }
  }
  else {
    FUN_00607b80(*(undefined8 *)(param_1 + 0x48));
    lVar3 = *(longlong *)(param_2 + 0x48);
    *(longlong *)(param_1 + 0x48) = lVar3;
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    lVar3 = FUN_00a0ade0(param_2);
    if (lVar3 != 0) {
      FUN_00a0b860(param_1);
      uVar4 = FUN_00a0ade0(param_2);
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))(*(longlong **)(param_1 + 0x50),uVar4);
    }
  }
  return;
}

