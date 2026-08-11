/* Ghidra address: 00bfe3d0 */
/* Ghidra symbol: FUN_00bfe3d0 */


void FUN_00bfe3d0(longlong *param_1,longlong param_2)

{
  char cVar1;
  HWND pHVar2;
  HIMC pHVar3;
  undefined8 uVar4;
  tagLOGFONTA local_c0;
  tagLOGFONTW local_84;
  
  if (*(int *)(param_2 + 8) == 8) {
    pHVar2 = (HWND)FUN_0065b870(param_1);
    pHVar3 = ImmGetContext(pHVar2);
    if ((int)pHVar3 != 0) {
      cVar1 = FUN_00bfe0f0();
      if (cVar1 == '\0') {
        uVar4 = FUN_00bf2c10(param_1);
        uVar4 = FUN_005fc8c0(uVar4);
        thunk_FUN_040ce345(uVar4,0x3c,&local_c0);
        ImmSetCompositionFontA((HIMC)((ulonglong)pHVar3 & 0xffffffff),&local_c0);
      }
      else {
        uVar4 = FUN_00bf2c10(param_1);
        uVar4 = FUN_005fc8c0(uVar4);
        thunk_FUN_03d2c01a(uVar4,0x5c,&local_84);
        ImmSetCompositionFontW((HIMC)((ulonglong)pHVar3 & 0xffffffff),&local_84);
      }
      pHVar2 = (HWND)FUN_0065b870(param_1);
      ImmReleaseContext(pHVar2,(HIMC)((ulonglong)pHVar3 & 0xffffffff));
    }
  }
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  return;
}

