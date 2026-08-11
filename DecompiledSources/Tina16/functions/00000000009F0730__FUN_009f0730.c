/* Ghidra address: 009f0730 */
/* Ghidra symbol: FUN_009f0730 */


undefined2 FUN_009f0730(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00a01900(param_1);
  return *(undefined2 *)(param_1 + 0x20 + (uVar1 & 0xffff) * 2);
}

