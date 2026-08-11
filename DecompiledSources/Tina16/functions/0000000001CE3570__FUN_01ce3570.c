/* Ghidra address: 01ce3570 */
/* Ghidra symbol: FUN_01ce3570 */


void FUN_01ce3570(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  iVar2 = (**(code **)(**(longlong **)(param_2 + 0x78) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar4 = (**(code **)(**(longlong **)(param_2 + 0x78) + 0x30))
                        (*(longlong **)(param_2 + 0x78),iVar6);
      plVar5 = (longlong *)FUN_004113f0(uVar4,&DAT_01ccbf00);
      iVar1 = *(int *)(param_1 + 0x6c);
      iVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,*(undefined8 *)(param_1 + 0xe8));
      if (iVar3 < iVar1) {
        iVar3 = iVar1;
      }
      *(int *)(param_1 + 0x6c) = iVar3;
      plVar5 = (longlong *)plVar5[0x23];
      if (plVar5 != (longlong *)0x0) {
        iVar1 = *(int *)(param_1 + 0x68);
        iVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,*(undefined8 *)(param_1 + 0xe8));
        if (iVar3 < iVar1) {
          iVar3 = iVar1;
        }
        *(int *)(param_1 + 0x68) = iVar3;
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = *(int *)(param_1 + 0x6c);
  if (*(int *)(param_1 + 0x6c) <= *(int *)(param_1 + 100)) {
    iVar2 = *(int *)(param_1 + 100);
  }
  *(int *)(param_1 + 100) = iVar2;
  iVar2 = *(int *)(param_1 + 0x68);
  if (*(int *)(param_1 + 0x68) <= *(int *)(param_1 + 0x60)) {
    iVar2 = *(int *)(param_1 + 0x60);
  }
  *(int *)(param_1 + 0x60) = iVar2;
  return;
}

