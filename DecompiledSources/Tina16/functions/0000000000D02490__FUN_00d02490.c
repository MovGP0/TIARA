/* Ghidra address: 00d02490 */
/* Ghidra symbol: FUN_00d02490 */


uint FUN_00d02490(longlong param_1)

{
  return (uint)**(byte **)(param_1 + 0xd8) << 0x18 |
         (uint)*(byte *)(*(longlong *)(param_1 + 0xd8) + 1) << 0x10 |
         (uint)*(byte *)(*(longlong *)(param_1 + 0xd8) + 2) << 8 |
         (uint)*(byte *)(*(longlong *)(param_1 + 0xd8) + 3);
}

