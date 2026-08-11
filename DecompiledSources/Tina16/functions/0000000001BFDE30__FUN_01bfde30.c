/* Ghidra address: 01bfde30 */
/* Ghidra symbol: FUN_01bfde30 */


void FUN_01bfde30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  if (param_2 == 0) {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0x70) = 0;
    return;
  }
  lVar2 = FUN_01bfd980(param_1);
  if (param_2 == lVar2) {
    return;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    FUN_00410f20(uVar4);
  }
  if (*(longlong *)(param_1 + 0x70) == 0) {
    pcVar3 = (code *)FUN_00411550(param_1,0xfffc);
    lVar2 = (*pcVar3)(param_1);
    uVar4 = (**(code **)(lVar2 + 0x28))(lVar2,1,param_1);
    *(undefined8 *)(param_1 + 0x70) = uVar4;
  }
  lVar2 = **(longlong **)(param_1 + 0x70);
  (**(code **)(lVar2 + 0x18))(*(longlong **)(param_1 + 0x70),param_2);
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(longlong *)(lVar5 + 0x10) = param_1;
  *(code **)(lVar5 + 8) = FUN_01bfd920;
  if ((*(ushort *)(param_2 + 0x34) & 1) == 0) {
    uVar4 = FUN_01bfd960(param_1);
    lVar5 = FUN_01bf9620(uVar4);
    if (*(char *)(lVar5 + 0x150) == '\0') {
      uVar6 = 0;
      goto LAB_01bfdf18;
    }
  }
  uVar6 = (undefined4)CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
LAB_01bfdf18:
  pcVar3 = (code *)FUN_00411550(param_1,0xfffd);
  (*pcVar3)(param_1,param_2,uVar6);
  uVar4 = FUN_01bf9620(*(undefined8 *)(param_1 + 8));
  FUN_004d26c0(param_2,uVar4);
  lVar2 = FUN_01bfd960(param_1);
  if (*(longlong *)(lVar2 + 0x38) != 0) {
    lVar2 = FUN_01bfd960(param_1);
    if (*(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x18) == 0) {
      lVar2 = FUN_01bfd960(param_1);
      if (*(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x30) != 0) {
        lVar2 = FUN_01bfd960(param_1);
        plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x38) + 0x30);
        (**(code **)(*plVar1 + 0x340))(plVar1,param_1);
      }
    }
    else {
      lVar2 = FUN_01bfd960(param_1);
      plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x38) + 0x18);
      (**(code **)(*plVar1 + 0x340))(plVar1,param_1);
    }
  }
  return;
}

