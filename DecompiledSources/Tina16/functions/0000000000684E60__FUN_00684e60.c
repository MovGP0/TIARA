/* Ghidra address: 00684e60 */
/* Ghidra symbol: FUN_00684e60 */


ulonglong FUN_00684e60(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    lVar2 = thunk_FUN_041da4fa();
    if ((lVar2 != *(longlong *)(param_1 + 0x4f8)) && (lVar2 != *(longlong *)(param_1 + 0x500))) {
      lVar3 = FUN_0065b870(param_1);
      if (lVar2 != lVar3) {
        uVar4 = 0;
        goto LAB_00684ea7;
      }
    }
    uVar4 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
LAB_00684ea7:
  return uVar4 & 0xffffffff;
}

