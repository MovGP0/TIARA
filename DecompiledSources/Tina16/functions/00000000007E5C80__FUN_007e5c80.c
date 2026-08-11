/* Ghidra address: 007e5c80 */
/* Ghidra symbol: FUN_007e5c80 */


ulonglong FUN_007e5c80(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined7 uVar10;
  ulonglong uVar9;
  
  uVar9 = 0;
  plVar6 = (longlong *)FUN_007e5b00(param_1,param_2,1);
  if (plVar6 == (longlong *)0x0) {
    if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
      cVar3 = FUN_004113d0(param_1,&PTR_FUN_007dba80);
      if (cVar3 != '\0') {
        FUN_007e3780(*(undefined8 *)(param_1 + 0x80));
      }
    }
  }
  else {
    if ((*(ushort *)((longlong)plVar6 + 0x34) & 0x10) == 0) {
      FUN_007e3780(plVar6);
    }
    lVar2 = *plVar6;
    (**(code **)(lVar2 + 0xb0))(plVar6);
    iVar5 = FUN_007e53b0(plVar6);
    iVar1 = *(int *)(param_1 + 0xc0);
    if (iVar1 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (undefined7)((ulonglong)lVar2 >> 8);
    }
    *(int *)(param_1 + 0xc0) = iVar5;
    cVar3 = FUN_007e44b0(plVar6,0);
    cVar4 = FUN_007e51a0(plVar6,0);
    if ((iVar1 != 0 && iVar1 != iVar5 || cVar3 != '\0') || cVar4 != '\0') {
      FUN_007dde90(plVar6);
    }
    if (((*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0xa8) != 0) &&
        (lVar2 = *(longlong *)(*(longlong *)PTR_DAT_02004030 + 0xa8),
        *(char *)(lVar2 + 0x4d6) == '\x02')) && (*(longlong **)(lVar2 + 0x518) == plVar6)) {
      lVar7 = thunk_FUN_041b2403(*(undefined8 *)(lVar2 + 0x698),0x234,0,0);
      if (lVar7 != 0) {
        uVar8 = FUN_0065b870(lVar2);
        thunk_FUN_0401553e(uVar8);
      }
    }
    uVar9 = CONCAT71(uVar10,1);
  }
  return uVar9 & 0xffffffff;
}

