/* Ghidra address: 017ca480 */
/* Ghidra symbol: FUN_017ca480 */


undefined8 FUN_017ca480(int param_1,int param_2,longlong param_3,undefined8 param_4,int param_5)

{
  if (param_1 == 0) {
    if (param_2 == 0) {
      FUN_00409a70(param_4,param_3 + 0x28,(longlong)param_5);
    }
    else if (param_2 == 1) {
      FUN_00409a70(param_4,param_3 + 0x30,(longlong)param_5);
    }
  }
  return 1;
}

