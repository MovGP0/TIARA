/* Ghidra address: 00b95910 */
/* Ghidra symbol: FUN_00b95910 */


int FUN_00b95910(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2] - *param_1 >> 0x1f;
  return (param_1[2] - *param_1 ^ uVar1) - uVar1;
}

