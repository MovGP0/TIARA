/* Ghidra address: 00417320 */
/* Ghidra symbol: FUN_00417320 */


longlong * FUN_00417320(longlong *param_1,undefined2 param_2,int param_3)

{
  longlong lVar1;
  
  FUN_00414740(param_1,0,param_3);
  lVar1 = *param_1;
  while (0 < param_3) {
    param_3 = param_3 + -1;
    *(undefined2 *)(lVar1 + (longlong)param_3 * 2) = param_2;
  }
  return param_1;
}

