/* Ghidra address: 0155e360 */
/* Ghidra symbol: FUN_0155e360 */


void FUN_0155e360(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 local_res10 [3];
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_2c;
  undefined8 local_20;
  undefined1 local_14 [4];
  undefined1 local_10 [8];
  
  local_20 = 0;
  local_res10[0] = param_2;
  local_38 = param_3;
  local_2c = param_4;
  FUN_00414610(param_2);
  FUN_004b6dc0(param_1,0);
  FUN_004b84c0(param_1,local_14,4);
  FUN_004b84c0(param_1,local_38,4);
  FUN_004b84c0(param_1,local_10,4);
  if (local_2c != 1) {
    FUN_0155e290(auStack_58,L".tflite");
  }
  if (local_2c != 1) {
    FUN_0155e290(auStack_58,&DAT_0155e480);
  }
  FUN_0155e290(auStack_58,L".jpg");
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return;
}

