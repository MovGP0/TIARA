/* Ghidra address: 0175f5e0 */
/* Ghidra symbol: FUN_0175f5e0 */


undefined8 FUN_0175f5e0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong *local_20 [2];
  
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_20[0] = (longlong *)0x0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_50 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_00456970(local_res10,&local_40,0x2f,0x5f);
    FUN_00416cd0(&local_38,3,L"/smokeparameters/device[@name=\"",local_40,&DAT_0175f7d8);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xd8))
              (*(longlong **)(param_1 + 0x10),local_30,local_38);
    FUN_0041b890(local_20,local_30[0],&DAT_0175f7de);
    if (local_20[0] != (longlong *)0x0) {
      (**(code **)(*local_20[0] + 0x100))(local_20[0],&local_48,&LAB_0175f7fc);
      local_50 = FUN_004486a0(local_48,0,PTR_DAT_02004830);
    }
  }
  FUN_00414560(&local_48,3);
  FUN_0041b800(local_30);
  FUN_0041b800(local_20);
  FUN_00414480(local_res10);
  return local_50;
}

