/* Ghidra address: 009f0450 */
/* Ghidra symbol: FUN_009f0450 */


bool FUN_009f0450(longlong param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_00a01900(*(undefined8 *)(param_1 + 0x40));
  *(undefined2 *)(param_1 + 0x2e) = uVar1;
  *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + 1;
  *(uint *)(param_1 + 0x28) =
       *(int *)(param_1 + 0x28) * 0x40 + (uint)(*(ushort *)(param_1 + 0x2e) & 0x3f);
  return (*(ushort *)(param_1 + 0x2e) & 0xc0) == 0x80;
}

