/* Ghidra address: 0053c650 */
/* Ghidra symbol: FUN_0053c650 */


undefined8 FUN_0053c650(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  
  FUN_0053c590(param_1,*param_2);
  uVar1 = FUN_0053c520(param_2);
  *param_2 = *param_2 + (longlong)(int)(uVar1 & 0xff);
  return param_1;
}

