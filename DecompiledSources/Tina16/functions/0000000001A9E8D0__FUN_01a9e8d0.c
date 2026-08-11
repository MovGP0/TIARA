/* Ghidra address: 01a9e8d0 */
/* Ghidra symbol: FUN_01a9e8d0 */


int FUN_01a9e8d0(undefined8 param_1,int param_2)

{
  if (param_2 < 0x100) {
    if (param_2 < 0) {
      param_2 = 0;
    }
  }
  else {
    param_2 = 0xff;
  }
  return param_2;
}

