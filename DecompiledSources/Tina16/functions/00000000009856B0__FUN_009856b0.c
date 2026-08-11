/* Ghidra address: 009856b0 */
/* Ghidra symbol: FUN_009856b0 */


void FUN_009856b0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  *(undefined8 *)(lVar1 + 0xb0) = *param_2;
  *(undefined8 *)(lVar1 + 0xb8) = param_2[1];
  return;
}

