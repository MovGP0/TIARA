/* Ghidra address: 005fd9b0 */
/* Ghidra symbol: FUN_005fd9b0 */


void FUN_005fd9b0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *param_2 = *(undefined8 *)(lVar1 + 0x20);
  param_2[1] = *(undefined8 *)(lVar1 + 0x28);
  param_2[2] = *(undefined8 *)(lVar1 + 0x30);
  param_2[3] = *(undefined8 *)(lVar1 + 0x38);
  *param_2 = 0;
  param_2[2] = 0;
  return;
}

