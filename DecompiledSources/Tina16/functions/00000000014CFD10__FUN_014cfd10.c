/* Ghidra address: 014cfd10 */
/* Ghidra symbol: FUN_014cfd10 */


byte FUN_014cfd10(undefined8 param_1,longlong param_2,char param_3,byte param_4,undefined1 param_5)

{
  if (param_3 == '\0') {
    param_4 = 0;
    FUN_016eeca0(0,param_2 + 0x1b8,0,param_5,0,0);
  }
  else {
    FUN_016eeca0((double)param_4,param_2 + 0x1b8,0,param_5,(double)param_4,0);
  }
  return param_4;
}

