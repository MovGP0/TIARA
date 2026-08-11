/* Ghidra address: 01c04730 */
/* Ghidra symbol: FUN_01c04730 */


void FUN_01c04730(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 local_38 [24];
  
  if (*(char *)(param_1 + 0x344) == '\0') {
    lVar3 = FUN_01c07120(param_1);
    if ((lVar3 == 0) || (*(longlong *)(param_1 + 800) == 0)) goto LAB_01c0477a;
    lVar3 = FUN_01c07120(param_1);
    bVar9 = (*(uint *)(lVar3 + 0xa0) & 0x40000) != 0;
  }
  else {
LAB_01c0477a:
    bVar9 = false;
  }
  if (bVar9) {
    lVar3 = FUN_01c07120(param_1);
    cVar2 = FUN_01bfab60(*(undefined8 *)(lVar3 + 0x498));
    if (cVar2 == '\0') {
LAB_01c047e6:
      plVar4 = (longlong *)FUN_00781840();
      cVar2 = (**(code **)(*plVar4 + 0x98))(plVar4);
      if (cVar2 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x310) + 0x80);
        uVar5 = FUN_01c07120(param_1);
        lVar6 = FUN_01c03e40(uVar5);
        bVar9 = *(int *)(*(longlong *)(lVar3 + 0x18) + 0x28) == *(int *)(lVar6 + 0x8c);
        goto LAB_01c0482d;
      }
    }
    else {
      lVar3 = FUN_01c07120(param_1);
      cVar2 = FUN_01bfab60(*(undefined8 *)(lVar3 + 0x498));
      if (cVar2 != '\0') {
        lVar3 = FUN_01c07120(param_1);
        bVar1 = *(byte *)(*(longlong *)(lVar3 + 0x498) + 0x28);
        if (bVar1 < 8) {
          bVar9 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(lVar3 + 0x498) >> 8),1) <<
                   (bVar1 & 0x1f) & 0x18U) != 0;
        }
        else {
          bVar9 = false;
        }
        if (!bVar9) goto LAB_01c047e6;
      }
    }
  }
  bVar9 = false;
LAB_01c0482d:
  if ((bVar9) && ((*(uint *)(param_1 + 0xa0) & 0x40000) != 0)) {
    FUN_0064d000(param_1,local_38);
    uVar5 = FUN_00781840();
    uVar7 = FUN_01c07120(param_1);
    uVar7 = FUN_0065b870(uVar7);
    uVar8 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
    FUN_00778e90(uVar5,uVar7,uVar8,0,*(undefined1 *)(param_1 + 0x35c),local_38);
    FUN_005fcc40(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x70),0);
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x310) + 0x70);
    (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined8 *)(param_1 + 0xb8));
  }
  else {
    lVar3 = FUN_005fda50(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x80));
    if (lVar3 == 0) {
      if ((*(char *)(param_1 + 0x35c) == '\0') || (*(char *)(param_1 + 0x344) != '\0')) {
        lVar3 = 0;
      }
      else {
        lVar3 = 1;
      }
      FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x80),(&DAT_01fe3c14)[lVar3]);
    }
    (**(code **)(**(longlong **)(param_1 + 0x310) + 0xa8))(*(longlong **)(param_1 + 0x310),param_2);
  }
  return;
}

