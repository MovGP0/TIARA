/* Ghidra address: 00cb3670 */
/* Ghidra symbol: FUN_00cb3670 */


void FUN_00cb3670(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x198) = *param_2;
  *(undefined8 *)(param_1 + 0x1a0) = param_2[1];
  lVar1 = *(longlong *)(param_1 + 0x128);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x170) = *param_2;
    *(undefined8 *)(lVar1 + 0x178) = param_2[1];
  }
  return;
}

