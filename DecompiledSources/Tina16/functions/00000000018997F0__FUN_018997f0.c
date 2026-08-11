/* Ghidra address: 018997f0 */
/* Ghidra symbol: FUN_018997f0 */


void FUN_018997f0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x4c8);
  *(undefined8 *)(lVar1 + 0x4d8) = *param_2;
  *(undefined8 *)(lVar1 + 0x4e0) = param_2[1];
  return;
}

