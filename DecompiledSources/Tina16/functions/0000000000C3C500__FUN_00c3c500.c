/* Ghidra address: 00c3c500 */
/* Ghidra symbol: FUN_00c3c500 */


int FUN_00c3c500(uint param_1,uint param_2,byte param_3,uint param_4)

{
  return ((uint)param_3 + (param_4 & 0xff) + 1) * (param_2 & 0xff) * (param_1 & 0xff);
}

