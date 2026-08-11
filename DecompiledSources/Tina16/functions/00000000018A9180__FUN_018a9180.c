/* Ghidra address: 018a9180 */
/* Ghidra symbol: FUN_018a9180 */


void FUN_018a9180(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x550);
  *(undefined8 *)(lVar1 + 0x4d0) = *param_2;
  *(undefined8 *)(lVar1 + 0x4d8) = param_2[1];
  return;
}

