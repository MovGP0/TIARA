/* Ghidra address: 00525a80 */
/* Ghidra symbol: FUN_00525a80 */


void FUN_00525a80(uint param_1,uint param_2,undefined2 *param_3,undefined2 *param_4)

{
  *param_3 = (short)(param_1 / (param_2 & 0xffff));
  *param_4 = (short)(param_1 % (param_2 & 0xffff));
  return;
}

