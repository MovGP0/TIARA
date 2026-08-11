/* Ghidra address: 00e0fd50 */
/* Ghidra symbol: FUN_00e0fd50 */


undefined8 FUN_00e0fd50(undefined8 param_1,int param_2,int param_3,char param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  if (param_4 == '\0') {
    FUN_00414480(param_1);
  }
  else if (param_3 < param_2) {
    FUN_0043f750(&local_20,param_2);
    FUN_0043f750(&local_28,param_3);
    FUN_00416cd0(param_1,5,&DAT_00e0fe98,local_20,L" downto ",local_28,&DAT_00e0fec0);
  }
  else {
    FUN_0043f750(&local_10,param_2);
    FUN_0043f750(&local_18,param_3);
    FUN_00416cd0(param_1,5,&DAT_00e0fe98,local_10,L" to ",local_18,&DAT_00e0fec0);
  }
  FUN_00414560(&local_28,4);
  return param_1;
}

