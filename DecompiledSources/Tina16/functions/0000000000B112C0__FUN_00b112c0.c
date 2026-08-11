/* Ghidra address: 00b112c0 */
/* Ghidra symbol: FUN_00b112c0 */


void FUN_00b112c0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x640) = *param_2;
  *(undefined8 *)(param_1 + 0x648) = param_2[1];
  lVar1 = *(longlong *)(param_1 + 0x628);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x550) = *(undefined8 *)(param_1 + 0x640);
    *(undefined8 *)(lVar1 + 0x558) = *(undefined8 *)(param_1 + 0x648);
  }
  return;
}

