/* Ghidra address: 01cea920 */
/* Ghidra symbol: FUN_01cea920 */


void FUN_01cea920(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14) < 0xc9) ||
     (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18) < 0x65)) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))(*(longlong **)(param_1 + 0x70),0);
    lVar3 = FUN_004113f0(uVar2,&DAT_01ccbf00);
    *(undefined1 *)(lVar3 + 0x11) = 0;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))();
    iVar4 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),iVar4);
        lVar3 = FUN_004113f0(uVar2,&DAT_01ccbf00);
        *(undefined1 *)(lVar3 + 0x11) = 0;
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))(*(longlong **)(param_1 + 0x70),0);
    lVar3 = FUN_004113f0(uVar2,&DAT_01ccbf00);
    *(undefined1 *)(lVar3 + 0x11) = 1;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))();
    iVar4 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),iVar4);
        lVar3 = FUN_004113f0(uVar2,&DAT_01ccbf00);
        *(undefined1 *)(lVar3 + 0x11) = 1;
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_01ce4cb0(param_1,param_2,param_3);
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}

