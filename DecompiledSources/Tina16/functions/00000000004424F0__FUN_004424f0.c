/* Ghidra address: 004424f0 */
/* Ghidra symbol: FUN_004424f0 */


longlong FUN_004424f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00414d00(param_2);
  FUN_00409a70(param_2,param_1,(longlong)((iVar1 + 1) * 2));
  return param_1 + (longlong)iVar1 * 2;
}

