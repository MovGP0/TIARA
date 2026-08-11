/* Ghidra address: 00698290 */
/* Ghidra symbol: FUN_00698290 */


ulonglong FUN_00698290(longlong param_1,HDC param_2)

{
  char cVar1;
  BOOL BVar2;
  HWND hwnd;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  
  cVar1 = FUN_00696b90(param_1);
  if (((cVar1 != '\0') && (*(char *)(param_1 + 0x41) == '\0')) &&
     (*(char *)(param_1 + 0x43) == '\0')) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))(*(longlong **)(param_1 + 0x10));
    if (cVar1 != '\0') {
      uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      hwnd = (HWND)FUN_00786090(param_1);
      BVar2 = BufferedPaintRenderAnimation(hwnd,param_2);
      if (BVar2 == 0) {
        FUN_00696be0(param_1,param_2);
      }
      goto LAB_006982f3;
    }
  }
  uVar3 = 0;
LAB_006982f3:
  return uVar3 & 0xffffffff;
}

