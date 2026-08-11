/* Ghidra address: 00a3d9f0 */
/* Ghidra symbol: FUN_00a3d9f0 */


uint FUN_00a3d9f0(int param_1,int param_2,int param_3)

{
  return (param_1 * param_2 + (param_3 - 1U) & ~(param_3 - 1U)) >> 3;
}

