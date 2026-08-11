/* Ghidra address: 01aceef0 */
/* Ghidra symbol: FUN_01aceef0 */


void FUN_01aceef0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                        (*(longlong **)(param_1 + 0xe0),iVar4);
      plVar3 = (longlong *)FUN_004113f0(uVar2,&PTR_FUN_01d282a8);
      (**(code **)(*plVar3 + 0x128))
                (plVar3,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

