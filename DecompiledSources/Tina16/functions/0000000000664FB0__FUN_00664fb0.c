/* Ghidra address: 00664fb0 */
/* Ghidra symbol: FUN_00664fb0 */


void FUN_00664fb0(HWND param_1,byte param_2)

{
  char cVar1;
  BOOL BVar2;
  HIMC pHVar3;
  bool bVar4;
  DWORD local_30;
  DWORD local_2c [3];
  
  if ((param_2 != 3) && (DAT_01df89d0 != 0)) {
    if (param_2 == 0) {
      ImmAssociateContextEx(param_1,(HIMC)0x0,0);
    }
    else {
      BVar2 = ImmAssociateContextEx(param_1,(HIMC)0x0,0x10);
      if (param_2 < 8) {
        bVar4 = ((int)CONCAT71((uint7)(uint3)((uint)BVar2 >> 8),1) << (param_2 & 0x1f) & 6U) != 0;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        pHVar3 = ImmGetContext(param_1);
        if ((int)pHVar3 != 0) {
          ImmGetConversionStatus((HIMC)((ulonglong)pHVar3 & 0xffffffff),local_2c,&local_30);
          ImmSetOpenStatus((HIMC)((ulonglong)pHVar3 & 0xffffffff),-(uint)(param_2 == 2));
          ImmSetConversionStatus((HIMC)((ulonglong)pHVar3 & 0xffffffff),local_2c[0],local_30);
          ImmReleaseContext(param_1,(HIMC)((ulonglong)pHVar3 & 0xffffffff));
        }
      }
      else {
        cVar1 = FUN_00626480();
        if (cVar1 == '\0') {
          pHVar3 = ImmGetContext(param_1);
          if ((int)pHVar3 != 0) {
            ImmSetOpenStatus((HIMC)((ulonglong)pHVar3 & 0xffffffff),-1);
            ImmGetConversionStatus((HIMC)((ulonglong)pHVar3 & 0xffffffff),local_2c,&local_30);
            local_2c[0] = local_2c[0] & 0xfffffff4 | (uint)(byte)(&DAT_01df8eb0)[param_2];
            ImmSetConversionStatus((HIMC)((ulonglong)pHVar3 & 0xffffffff),local_2c[0],local_30);
            ImmReleaseContext(param_1,(HIMC)((ulonglong)pHVar3 & 0xffffffff));
          }
        }
        else {
          FUN_00626400(param_1,*(undefined4 *)
                                ((longlong)&UNWIND_INFO_01df8e7c + (ulonglong)param_2 * 4 + 8));
        }
      }
    }
  }
  return;
}

