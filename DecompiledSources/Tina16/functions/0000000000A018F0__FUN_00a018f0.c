/* Ghidra address: 00a018f0 */
/* Ghidra symbol: FUN_00a018f0 */


void FUN_00a018f0(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *param_2;
  *param_2 = param_2[1];
  param_2[1] = uVar1;
  return;
}

