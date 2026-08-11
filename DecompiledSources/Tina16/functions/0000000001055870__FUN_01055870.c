/* Ghidra address: 01055870 */
/* Ghidra symbol: FUN_01055870 */


undefined8 FUN_01055870(undefined8 param_1,byte param_2)

{
  if (param_2 < 3) {
    if (param_2 == 2) {
      FUN_00414ad0(param_1,&DAT_01055938);
    }
    else if (param_2 == 0) {
      FUN_00414ad0(param_1,&DAT_01055918);
    }
    else if (param_2 == 1) {
      FUN_00414ad0(param_1,&DAT_01055928);
    }
  }
  else if (param_2 == 3) {
    FUN_00414ad0(param_1,&DAT_01055948);
  }
  else if (param_2 == 4) {
    FUN_00414ad0(param_1,&DAT_01055958);
  }
  return param_1;
}

