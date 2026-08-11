/* Ghidra address: 0069c880 */
/* Ghidra symbol: FUN_0069c880 */


void FUN_0069c880(longlong param_1)

{
  FUN_0069e8a0();
  FUN_0040d200(param_1,0x2f2,0);
  *(undefined2 *)(param_1 + 8) = 0xd7b0;
  *(undefined4 *)(param_1 + 0xc) = 0x80;
  *(longlong *)(param_1 + 0x18) = param_1 + 0x268;
  *(code **)(param_1 + 0x20) = FUN_0069c7d0;
  return;
}

