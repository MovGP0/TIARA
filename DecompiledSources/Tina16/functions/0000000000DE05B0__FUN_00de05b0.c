/* Ghidra address: 00de05b0 */
/* Ghidra symbol: FUN_00de05b0 */


void FUN_00de05b0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_007f9b70(param_1,1);
  if (lVar2 != 0) {
    if (param_2 == '\0') {
      if (*(longlong *)(lVar2 + 0x550) == param_1) {
        FUN_00801f80(lVar2,0);
      }
    }
    else {
      lVar1 = *(longlong *)(lVar2 + 0x550);
      if ((lVar1 != 0) && (lVar1 != param_1)) {
        FUN_0064fca0(lVar1,0xb02a,0,0);
      }
      FUN_00801f80(lVar2,param_1);
    }
  }
  return;
}

