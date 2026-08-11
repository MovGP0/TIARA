/* Ghidra address: 00441cc0 */
/* Ghidra symbol: FUN_00441cc0 */


longlong FUN_00441cc0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = FUN_0044fe60(*param_2,0x5c);
    *param_2 = lVar2;
    if (*param_2 != 0) {
      *(undefined2 *)*param_2 = 0;
      *param_2 = *param_2 + 2;
    }
  }
  return lVar1;
}

