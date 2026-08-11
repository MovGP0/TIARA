/* Ghidra address: 010c0ff0 */
/* Ghidra symbol: FUN_010c0ff0 */


double FUN_010c0ff0(uint param_1,uint param_2,double param_3)

{
  double dVar1;
  
  FUN_00c43d20((double)(int)((param_1 & 0xff) - (param_2 & 0xff)) / 3.0);
  dVar1 = (double)FUN_010bf950();
  return dVar1 * param_3;
}

