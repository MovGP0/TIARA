/* Ghidra address: 01ce1ae0 */
/* Ghidra symbol: FUN_01ce1ae0 */


void FUN_01ce1ae0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                        (*(longlong **)(param_1 + 0x70),iVar4 + -1);
      uVar2 = FUN_004113f0(uVar2,&DAT_01ccbf00);
      FUN_01cd3740(uVar2);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      iVar5 = iVar4 + -1;
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),iVar5);
      uVar2 = FUN_004113f0(uVar2,&DAT_01ccbf00);
      FUN_01cd3740(uVar2);
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),iVar5);
      if (*(longlong *)(lVar3 + 0x118) != 0) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),iVar5);
        FUN_01cd3740(*(undefined8 *)(lVar3 + 0x118));
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

