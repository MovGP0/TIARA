/* Ghidra address: 00b112a0 */
/* Ghidra symbol: FUN_00b112a0 */


void FUN_00b112a0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x600);
  *(undefined8 *)(lVar1 + 0x60) = *param_2;
  *(undefined8 *)(lVar1 + 0x68) = param_2[1];
  return;
}

