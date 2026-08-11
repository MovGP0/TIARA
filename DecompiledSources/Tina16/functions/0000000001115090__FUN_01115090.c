/* Ghidra address: 01115090 */
/* Ghidra symbol: FUN_01115090 */


void FUN_01115090(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00bff830();
  *(longlong *)(param_2 + 0x18) = (longlong)(int)(uVar1 & 0xff);
  return;
}

