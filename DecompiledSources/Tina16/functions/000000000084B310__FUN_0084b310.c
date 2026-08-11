/* Ghidra address: 0084b310 */
/* Ghidra symbol: FUN_0084b310 */


longlong FUN_0084b310(longlong param_1,uint *param_2,uint param_3)

{
  longlong local_20;
  
  local_20 = param_1;
  FUN_00409620(&local_20,param_3 << 3);
  FUN_0040d200(local_20 + (ulonglong)*param_2 * 8,(param_3 - *param_2) * 8,0);
  *param_2 = param_3;
  return local_20;
}

