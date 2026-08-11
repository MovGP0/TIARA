/* Ghidra address: 00c0f620 */
/* Ghidra symbol: FUN_00c0f620 */


undefined8 FUN_00c0f620(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char extraout_AL;
  char cVar3;
  undefined7 extraout_var;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined7 uVar7;
  undefined8 uVar6;
  ushort uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar9 = (ulonglong)param_2;
  plVar1 = *(longlong **)(param_1 + 0x538);
  uVar8 = (ushort)param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1a0))(plVar1,uVar9);
    cVar3 = extraout_AL;
    uVar7 = extraout_var;
    goto LAB_00c0f6ad;
  }
  uVar4 = uVar9 & 0xffff;
  if (uVar4 < 0x7b) {
    uVar5 = uVar4;
    if (((0x2f < uVar4) && (uVar5 = uVar4 - 0x3a, 6 < uVar5)) && (uVar5 = uVar4 - 0x5b, 3 < uVar5))
    {
      if (uVar4 != 0x60) goto LAB_00c0f6ab;
      uVar5 = 0;
    }
  }
  else {
    uVar5 = uVar4 - 0x7b;
    if ((((3 < uVar5) && (uVar5 = 0, uVar4 != 0xa7)) && (uVar5 = 0, uVar4 != 0xb0)) &&
       (uVar5 = 0, uVar4 != 0xb4)) {
LAB_00c0f6ab:
      cVar3 = '\0';
      uVar7 = 0;
      goto LAB_00c0f6ad;
    }
  }
  uVar7 = (undefined7)(uVar5 >> 8);
  cVar3 = '\x01';
LAB_00c0f6ad:
  lVar2 = *(longlong *)(param_1 + 0x538);
  if (lVar2 == 0) {
    if (cVar3 == '\0') {
      local_88 = *(undefined8 *)(param_1 + 0x878);
      uStack_80 = *(undefined8 *)(param_1 + 0x880);
      uStack_78 = *(undefined8 *)(param_1 + 0x888);
      uStack_70 = *(undefined8 *)(param_1 + 0x890);
      if (uVar8 < 0x100) {
        bVar10 = (*(byte *)((longlong)&local_88 + ((longlong)(uVar9 & 0xffff) >> 3)) >> (uVar9 & 7)
                 & 1) != 0;
        uVar7 = (undefined7)((uVar9 & 0xffff) >> 8);
      }
      else {
        bVar10 = false;
        uVar7 = 0;
      }
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      local_a8 = *(undefined8 *)(param_1 + 0x898);
      uStack_a0 = *(undefined8 *)(param_1 + 0x8a0);
      uStack_98 = *(undefined8 *)(param_1 + 0x8a8);
      uStack_90 = *(undefined8 *)(param_1 + 0x8b0);
      if (uVar8 < 0x100) {
        bVar10 = (*(byte *)((longlong)&local_a8 + ((longlong)(uVar9 & 0xffff) >> 3)) >> (uVar9 & 7)
                 & 1) != 0;
      }
      else {
        bVar10 = false;
        uVar7 = 0;
      }
      uVar6 = CONCAT71(uVar7,!bVar10);
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    if (cVar3 == '\0') {
      local_48 = *(undefined8 *)(lVar2 + 0x8d);
      uStack_40 = *(undefined8 *)(lVar2 + 0x95);
      uStack_38 = *(undefined8 *)(lVar2 + 0x9d);
      uStack_30 = *(undefined8 *)(lVar2 + 0xa5);
      if (uVar8 < 0x100) {
        bVar10 = (*(byte *)((longlong)&local_48 + ((longlong)(uVar9 & 0xffff) >> 3)) >> (uVar9 & 7)
                 & 1) != 0;
        uVar7 = (undefined7)((uVar9 & 0xffff) >> 8);
      }
      else {
        bVar10 = false;
        uVar7 = 0;
      }
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      local_68 = *(undefined8 *)(lVar2 + 0xad);
      uStack_60 = *(undefined8 *)(lVar2 + 0xb5);
      uStack_58 = *(undefined8 *)(lVar2 + 0xbd);
      uStack_50 = *(undefined8 *)(lVar2 + 0xc5);
      if (uVar8 < 0x100) {
        bVar10 = (*(byte *)((longlong)&local_68 + ((longlong)(uVar9 & 0xffff) >> 3)) >> (uVar9 & 7)
                 & 1) != 0;
      }
      else {
        bVar10 = false;
        uVar7 = 0;
      }
      uVar6 = CONCAT71(uVar7,!bVar10);
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}

