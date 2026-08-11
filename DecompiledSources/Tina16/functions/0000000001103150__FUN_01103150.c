/* Ghidra address: 01103150 */
/* Ghidra symbol: FUN_01103150 */


void FUN_01103150(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = param_2;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x28))(*(longlong **)(param_1 + 0xb0));
  iVar5 = 1;
  if (0 < iVar2) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x30))
                        (*(longlong **)(param_1 + 0xb0),iVar5 + -1);
      plVar4 = (longlong *)FUN_004113f0(uVar3,&PTR_FUN_01d2a288);
      (**(code **)(*plVar4 + 0xa0))(plVar4,param_2);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined8 *)(param_1 + 0x198) = uVar1;
  return;
}

