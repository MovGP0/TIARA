/* Ghidra address: 01236cd0 */
/* Ghidra symbol: FUN_01236cd0 */


ulonglong * FUN_01236cd0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2 ^ 0x8000000000000000;
  param_1[1] = uVar1 ^ 0x8000000000000000;
  return param_1;
}

