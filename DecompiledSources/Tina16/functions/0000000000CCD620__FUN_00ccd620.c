/* Ghidra address: 00ccd620 */
/* Ghidra symbol: FUN_00ccd620 */


void FUN_00ccd620(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x68) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x58));
  return;
}

