/* Ghidra address: 00413520 */
/* Ghidra symbol: FUN_00413520 */


void FUN_00413520(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar3 = FUN_0041f930();
  plVar1 = *(longlong **)(lVar3 + 0x208);
  if (plVar1 == (longlong *)0x0) {
    FUN_00414160(0x2d8);
  }
  *(longlong *)(lVar3 + 0x208) = *plVar1;
  lVar3 = plVar1[2];
  uVar2 = plVar1[1];
  plVar1[2] = 0;
  FUN_00409750(plVar1);
  lVar4 = FUN_0041f930();
  if ((*(longlong *)(lVar4 + 0x208) != 0) && (lVar3 != 0)) {
    lVar4 = FUN_0041f930();
    plVar1 = *(longlong **)(lVar4 + 0x208);
    if (plVar1 == (longlong *)0x0) {
      FUN_00414160(0x2d8);
    }
    *(longlong *)(lVar4 + 0x208) = *plVar1;
    if (plVar1[2] != 0) {
      FUN_00410f20(plVar1[2]);
    }
    FUN_00409750(plVar1);
    puVar5 = (undefined8 *)FUN_004096a0();
    puVar5[1] = uVar2;
    puVar5[2] = lVar3;
    lVar3 = FUN_0041f930();
    *puVar5 = *(undefined8 *)(lVar3 + 0x208);
    *(undefined8 *)(lVar3 + 0x208) = puVar5;
  }
  return;
}

