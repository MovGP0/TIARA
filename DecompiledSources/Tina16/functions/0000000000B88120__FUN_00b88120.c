/* Ghidra address: 00b88120 */
/* Ghidra symbol: FUN_00b88120 */


void FUN_00b88120(longlong *param_1)

{
  (**(code **)(*param_1 + 0xb8))(param_1);
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x67452301;
  *(undefined4 *)(param_1 + 0x12) = 0xefcdab89;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x98badcfe;
  *(undefined4 *)(param_1 + 0x13) = 0x10325476;
  *(undefined1 *)(param_1 + 0xf) = 1;
  return;
}

