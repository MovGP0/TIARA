/* Ghidra address: 01bace90 */
/* Ghidra symbol: FUN_01bace90 */


void FUN_01bace90(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x30))
                        (*(longlong **)(param_1 + 0x718),iVar4);
      FUN_00418590(uVar3,&DAT_0170bbf8);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x718));
  (**(code **)(*DAT_021113c0 + 0x90))(DAT_021113c0);
  (**(code **)(*DAT_021113c0 + 0x10))
            (DAT_021113c0,*(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x4f0));
  lVar1 = *(longlong *)(param_1 + 0x700);
  *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(param_1 + 0x708);
  *(undefined8 *)(lVar1 + 0x88) = *(undefined8 *)(param_1 + 0x710);
  return;
}

