/* Ghidra address: 00cb36a0 */
/* Ghidra symbol: FUN_00cb36a0 */


void FUN_00cb36a0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x1a8) = *param_2;
  *(undefined8 *)(param_1 + 0x1b0) = param_2[1];
  lVar1 = *(longlong *)(param_1 + 0x128);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x180) = *param_2;
    *(undefined8 *)(lVar1 + 0x188) = param_2[1];
  }
  return;
}

