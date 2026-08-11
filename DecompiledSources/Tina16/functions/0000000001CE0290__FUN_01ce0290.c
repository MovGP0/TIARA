/* Ghidra address: 01ce0290 */
/* Ghidra symbol: FUN_01ce0290 */


void FUN_01ce0290(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  FUN_01d2dc30(param_2,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),0xffffff);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                        (*(longlong **)(param_1 + 0x70),iVar4 + -1);
      plVar3 = (longlong *)FUN_004113f0(uVar2,&DAT_01ccbf00);
      (**(code **)(*plVar3 + 0x98))(plVar3,param_2);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),iVar4 + -1);
      plVar3 = (longlong *)FUN_004113f0(uVar2,&DAT_01ccbf00);
      (**(code **)(*plVar3 + 0x98))(plVar3,param_2);
      plVar3 = (longlong *)plVar3[0x23];
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x98))(plVar3,param_2);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                        (*(longlong **)(param_1 + 0x80),iVar4 + -1);
      plVar3 = (longlong *)FUN_004113f0(uVar2,&PTR_FUN_01d282a8);
      (**(code **)(*plVar3 + 0x98))(plVar3,param_2);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

