/* Ghidra address: 01c06120 */
/* Ghidra symbol: FUN_01c06120 */


longlong * FUN_01c06120(longlong *param_1,char param_2,undefined1 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (param_2 == '\0') {
    uVar3 = FUN_01bfab50(param_1[100]);
    lVar4 = FUN_01bf9620(uVar3);
    plVar7 = *(longlong **)(lVar4 + 0x108);
    lVar4 = FUN_01bfd980(param_1[100]);
    if (lVar4 != 0) {
      lVar4 = FUN_01bfd980(param_1[100]);
      cVar1 = FUN_004113d0(*(undefined8 *)(lVar4 + 0xc0),&PTR_FUN_0061b768);
      if (cVar1 != '\0') {
        lVar4 = FUN_01bfd980(param_1[100]);
        plVar6 = *(longlong **)(*(longlong *)(lVar4 + 0xc0) + 0xd0);
        goto LAB_01c0621d;
      }
    }
    uVar3 = FUN_01bfab50(param_1[100]);
    lVar4 = FUN_01bf9620(uVar3);
    plVar6 = *(longlong **)(lVar4 + 0xd0);
  }
  else {
    uVar3 = FUN_01bfab50(param_1[100]);
    lVar4 = FUN_01bf9620(uVar3);
    plVar7 = *(longlong **)(lVar4 + 0x138);
    uVar3 = FUN_01bfab50(param_1[100]);
    lVar4 = FUN_01bf9620(uVar3);
    plVar6 = *(longlong **)(lVar4 + 0x148);
    if (plVar6 == (longlong *)0x0) {
      uVar3 = FUN_01bfab50(param_1[100]);
      lVar4 = FUN_01bf9620(uVar3);
      plVar6 = *(longlong **)(lVar4 + 0xd0);
    }
  }
LAB_01c0621d:
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if ((cVar1 == '\0') && (plVar7 != (longlong *)0x0)) {
    plVar5 = (longlong *)FUN_01c07120(param_1);
    cVar1 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
    if ((cVar1 == '\0') &&
       ((-2 < param_4 && (iVar2 = (**(code **)(*plVar7 + 0x90))(plVar7), param_4 < iVar2)))) {
      *param_3 = 1;
      return plVar7;
    }
  }
  if (((plVar6 == (longlong *)0x0) || (param_4 < -1)) ||
     (iVar2 = (**(code **)(*plVar6 + 0x90))(plVar6), iVar2 <= param_4)) {
    plVar6 = (longlong *)0x0;
  }
  *param_3 = 0;
  return plVar6;
}

