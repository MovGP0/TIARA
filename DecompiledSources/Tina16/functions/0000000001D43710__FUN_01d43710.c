/* Ghidra address: 01d43710 */
/* Ghidra symbol: FUN_01d43710 */


undefined8 FUN_01d43710(undefined8 param_1,int param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_38 = param_1;
  local_2c = param_2;
  if (param_2 == 1) {
    FUN_01d43630(auStack_58,&local_10,DAT_01ffcf30,1);
    FUN_00414ad0(local_38,local_10);
  }
  else if (param_2 == 2) {
    FUN_01d43630(auStack_58,&local_18,DAT_01ffcf38,2);
    FUN_00414ad0(local_38,local_18);
  }
  else if (param_2 == 3) {
    FUN_01d43630(auStack_58,&local_20,DAT_01ffcf40,3);
    FUN_00414ad0(local_38,local_20);
  }
  else if (param_2 == 4) {
    FUN_01d43630(auStack_58,&local_28,DAT_01ffcf48,4);
    FUN_00414ad0(local_38,local_28);
  }
  else {
    FUN_00414480(param_1);
  }
  FUN_00414560(&local_28,4);
  return local_38;
}

