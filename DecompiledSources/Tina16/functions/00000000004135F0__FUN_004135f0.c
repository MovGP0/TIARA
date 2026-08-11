/* Ghidra address: 004135f0 */
/* Ghidra symbol: FUN_004135f0 */


void FUN_004135f0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 unaff_retaddr;
  
  lVar2 = FUN_0041f930();
  plVar1 = *(longlong **)(lVar2 + 0x208);
  if (plVar1 == (longlong *)0x0) {
    FUN_00414160(0x2d8);
  }
  *(longlong *)(lVar2 + 0x208) = *plVar1;
  if (plVar1[2] != 0) {
    FUN_00410f20(plVar1[2]);
  }
  FUN_00409750(plVar1);
  FUN_00412840(unaff_retaddr);
  return;
}

