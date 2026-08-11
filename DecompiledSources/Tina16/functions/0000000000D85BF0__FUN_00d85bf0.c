/* Ghidra address: 00d85bf0 */
/* Ghidra symbol: FUN_00d85bf0 */


void FUN_00d85bf0(longlong param_1,byte param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_60 [2];
  byte local_50;
  undefined1 local_4c [44];
  
  puVar4 = local_60;
  for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_004179d0(local_60,&DAT_00d627e8);
  plVar2 = (longlong *)0x0;
  lVar3 = 0;
  iVar1 = FUN_00416db0(param_5,L"default");
  if (iVar1 != 0) {
    plVar2 = (longlong *)FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = FUN_00d77580(plVar2,0xd);
      if (lVar3 != 0) {
        *(undefined1 *)(lVar3 + 0x8c) = 0;
      }
    }
  }
  if (plVar2 != (longlong *)0x0) goto LAB_00d85d03;
  if (param_2 < 3) {
    if (param_2 == 2) {
      plVar2 = (longlong *)**(undefined8 **)(param_1 + 0x58);
      goto LAB_00d85d03;
    }
    if (param_2 == 0) {
      plVar2 = (longlong *)**(undefined8 **)(param_1 + 0x58);
      goto LAB_00d85d03;
    }
    if (param_2 == 1) {
      plVar2 = (longlong *)**(undefined8 **)(param_1 + 0x58);
      goto LAB_00d85d03;
    }
  }
  else {
    if (param_2 == 4) {
      plVar2 = (longlong *)**(undefined8 **)(param_1 + 0x58);
      goto LAB_00d85d03;
    }
    if (param_2 == 6) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0xf0);
      goto LAB_00d85d03;
    }
  }
  plVar2 = (longlong *)0x0;
LAB_00d85d03:
  if (plVar2 != (longlong *)0x0) {
    FUN_00d77f50(plVar2,(local_50 & 1) != 0);
    FUN_00d77b90(plVar2,local_60);
    (**(code **)(*plVar2 + 0xa8))(plVar2,param_3,local_4c);
  }
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0x8c) = 1;
  }
  FUN_00417740(local_60,&DAT_00d627e8);
  return;
}

