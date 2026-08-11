/* Ghidra address: 00afe350 */
/* Ghidra symbol: FUN_00afe350 */


void FUN_00afe350(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(*(longlong *)(param_1 + 0x8b0) + 0x2a8) = param_2;
  *(ushort *)(param_1 + 0x8a0) = *(ushort *)(param_1 + 0x8a0) & 0xffef;
  return;
}

