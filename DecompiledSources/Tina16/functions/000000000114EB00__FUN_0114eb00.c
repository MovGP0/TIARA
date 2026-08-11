/* Ghidra address: 0114eb00 */
/* Ghidra symbol: FUN_0114eb00 */


undefined1 FUN_0114eb00(char param_1,float *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_1 == '\x02') {
    if ((((*param_2 == 0.0) && (param_2[1] == 0.0)) && (*(float *)((longlong)param_2 + 9) == 0.0))
       && (*(float *)((longlong)param_2 + 0xd) == 0.0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

