/* Ghidra address: 01ab2c40 */
/* Ghidra symbol: FUN_01ab2c40 */


void FUN_01ab2c40(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  FUN_01d2b0e0(param_1,param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x28))(*(longlong **)(param_1 + 0xb0));
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x30))
                        (*(longlong **)(param_1 + 0xb0),iVar4 + -1);
      plVar3 = (longlong *)FUN_004113f0(uVar2,&PTR_FUN_01d2a288);
      (**(code **)(*plVar3 + 0xa0))(plVar3,param_2);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

