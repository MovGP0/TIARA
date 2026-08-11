/* Ghidra address: 00b8fcd0 */
/* Ghidra symbol: FUN_00b8fcd0 */


undefined8
FUN_00b8fcd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined8 param_5,char param_6)

{
  int local_1c;
  
  FUN_00b8f7f0(param_1,param_2,param_3,param_4,&local_1c);
  if (((char)param_4 == '\0') && (local_1c != 0)) {
    if (param_6 == '\0') {
      FUN_00416780(param_5,u_pnum_01e94254[(longlong)local_1c + 4]);
    }
    else {
      FUN_004169a0(param_5,&DAT_01e942cf + (longlong)local_1c * 0x15);
    }
  }
  else {
    FUN_00414480(param_5);
  }
  return param_1;
}

