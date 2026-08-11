/* Ghidra address: 01b766e0 */
/* Ghidra symbol: FUN_01b766e0 */


void FUN_01b766e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x6b0);
  *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(param_1 + 0x6c8);
  *(undefined8 *)(lVar1 + 0x88) = *(undefined8 *)(param_1 + 0x6d0);
  return;
}

