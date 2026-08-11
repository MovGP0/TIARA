/* Ghidra address: 018518d0 */
/* Ghidra symbol: FUN_018518d0 */


/* WARNING: Type propagation algorithm not settling */

void FUN_018518d0(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined1 **ppuVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 **ppuVar11;
  undefined1 auStack_10a8 [4088];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 *apuStack_88 [8];
  undefined1 **local_48;
  int local_3c;
  undefined1 **local_38;
  undefined4 local_2c;
  
  apuStack_88[7] = auStack_a8;
  apuStack_88[1] = (undefined1 *)0x0;
  apuStack_88[2] = (undefined1 *)0x0;
  apuStack_88[3] = (undefined1 *)0x0;
  apuStack_88[4] = (undefined1 *)0x0;
  apuStack_88[5] = (undefined1 *)0x0;
  apuStack_88[6] = (undefined1 *)0x0;
  lVar1 = (longlong)param_3 + 1;
  uVar5 = lVar1 * -0x10 & 0xfff;
  while (lVar1 * -0x10 < (longlong)uVar5) {
    auStack_10a8[uVar5] = (char)(uVar5 - 0x1000);
    uVar5 = uVar5 - 0x1000;
  }
  ppuVar2 = apuStack_88 + lVar1 * -2;
  ppuVar11 = ppuVar2;
  for (lVar10 = ((longlong)param_3 + 1) * 2; lVar10 != 0; lVar10 = lVar10 + -1) {
    *ppuVar11 = (undefined1 *)*param_2;
    param_2 = param_2 + 1;
    ppuVar11 = ppuVar11 + 1;
  }
  local_2c = 0xffffffff;
  lVar10 = *(longlong *)(param_1 + 8);
  local_38 = ppuVar2;
  if (*(char *)(lVar10 + 0x88) != '\0') {
    (&uStack_b0)[lVar1 * -2] = 0x1851981;
    local_2c = FUN_01848540(lVar10);
  }
  (&uStack_b0)[lVar1 * -2] = 0x1851995;
  iVar8 = FUN_01847410();
  local_3c = 0;
  if (-1 < iVar8 + -1) {
    local_48 = local_38;
    do {
      iVar6 = local_3c;
      uVar3 = *(undefined8 *)(param_1 + 8);
      (&uStack_b0)[lVar1 * -2] = 0x18519c4;
      plVar9 = (longlong *)FUN_01847630(uVar3,iVar6);
      ppuVar2 = local_48;
      (&uStack_b0)[lVar1 * -2] = 0x18519d4;
      FUN_01822d20(apuStack_88 + 4,ppuVar2);
      pcVar4 = *(code **)(*plVar9 + 8);
      (&uStack_b0)[lVar1 * -2] = 0x18519e1;
      (*pcVar4)(plVar9,apuStack_88 + 4);
      local_3c = local_3c + 1;
      local_48 = local_48 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  plVar9 = *(longlong **)(param_1 + 8);
  pcVar4 = *(code **)(*plVar9 + 0x10);
  (&uStack_b0)[lVar1 * -2] = 0x1851a0a;
  (*pcVar4)(plVar9,apuStack_88 + 1);
  uVar7 = local_2c;
  uVar3 = *(undefined8 *)(param_1 + 8);
  (&uStack_b0)[lVar1 * -2] = 0x1851a24;
  FUN_01848710(uVar3,uVar7,1,0);
  (&uStack_b0)[lVar1 * -2] = 0x1851a3b;
  FUN_00417840(apuStack_88 + 1,&DAT_004013d8,2);
  return;
}

