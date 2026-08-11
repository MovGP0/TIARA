/* Ghidra address: 00e16350 */
/* Ghidra symbol: FUN_00e16350 */


bool FUN_00e16350(uint param_1,uint param_2)

{
  bool bVar1;
  
  if (param_1 == 0) {
    bVar1 = (param_2 & 1) == 0;
  }
  else {
    bVar1 = (param_1 & param_2) != 0;
  }
  return bVar1;
}

