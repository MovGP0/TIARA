/* Ghidra address: 00c4c670 */
/* Ghidra symbol: FUN_00c4c670 */


void FUN_00c4c670(undefined8 *param_1,byte param_2)

{
  undefined8 local_60 [3];
  longlong local_48;
  undefined8 *local_10;
  
  local_60[0] = 0;
  FUN_00411a80(param_1,param_2);
  FUN_00410ae0(*param_1,local_60);
  FUN_00416ad0(local_60,L" destroyed");
  FUN_00c4c420(local_60[0]);
  local_48 = DAT_02019c78 + 8;
  local_10 = param_1;
  FUN_005974f0(local_48,&local_10);
  FUN_004d23a0(param_1,param_2 & 0xfc);
  FUN_00414480(local_60);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

