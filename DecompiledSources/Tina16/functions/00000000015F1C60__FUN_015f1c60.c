/* Ghidra address: 015f1c60 */
/* Ghidra symbol: FUN_015f1c60 */


undefined8 FUN_015f1c60(undefined8 param_1,byte param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 < 4) {
    if (param_2 == 3) {
      FUN_00414ad0(param_1,&DAT_015f1dc4);
      goto code_r0x015f1d55;
    }
    if (param_2 == 0) {
      FUN_00414ad0(param_1,&DAT_015f1d94);
      goto code_r0x015f1d55;
    }
    if (param_2 == 1) {
      FUN_00414ad0(param_1,&DAT_015f1da4);
      goto code_r0x015f1d55;
    }
    if (param_2 == 2) {
      FUN_00414ad0(param_1,&DAT_015f1db4);
      goto code_r0x015f1d55;
    }
  }
  else {
    if (param_2 == 4) {
      FUN_00414ad0(param_1,&DAT_015f1dd4);
      goto code_r0x015f1d55;
    }
    if (param_2 == 5) {
      FUN_00414ad0(param_1,&DAT_015f1de4);
      goto code_r0x015f1d55;
    }
  }
  FUN_0043f750(&local_10,param_2);
  FUN_00416ba0(param_1,L"Not found: ",local_10);
code_r0x015f1d55:
  FUN_00414480(&local_10);
  return param_1;
}

