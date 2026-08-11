/* Ghidra address: 010bd010 */
/* Ghidra symbol: FUN_010bd010 */


undefined8 FUN_010bd010(undefined8 param_1,char param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 == '\x01') {
    FUN_00414b50(&local_10,&DAT_010bd124);
  }
  else if (param_2 == '\x02') {
    FUN_00414b50(&local_10,&DAT_010bd114);
  }
  else if ((byte)(param_2 - 3U) < 2) {
    FUN_00414b50(&local_10,&DAT_010bd0f4);
  }
  else if ((byte)(param_2 - 5U) < 2) {
    FUN_00414b50(&local_10,&DAT_010bd104);
  }
  else {
    FUN_00414b50(&local_10,&LAB_010bd134);
  }
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  return param_1;
}

