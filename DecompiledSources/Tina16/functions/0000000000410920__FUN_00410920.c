/* Ghidra address: 00410920 */
/* Ghidra symbol: FUN_00410920 */


longlong FUN_00410920(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    return param_1;
  }
  if (param_1 == 0) {
    lVar2 = *(longlong *)(lVar1 + -0x10);
    if (lVar2 == 0) {
      *param_2 = 0;
      return 0;
    }
    param_1 = FUN_004095c0(lVar2);
    if (param_1 == 0) {
      *param_2 = 0;
      return -1;
    }
    FUN_0040d200(param_1,lVar2,0);
  }
  else {
    *param_2 = 0;
  }
  if (-1 < *(longlong *)(lVar1 + -8)) {
    *(longlong *)(param_1 + *(longlong *)(lVar1 + -8)) = lVar1;
  }
  return param_1;
}

