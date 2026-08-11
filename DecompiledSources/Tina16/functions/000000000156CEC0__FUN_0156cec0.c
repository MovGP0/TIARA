/* Ghidra address: 0156cec0 */
/* Ghidra symbol: FUN_0156cec0 */


void FUN_0156cec0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res20;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined1 *local_240;
  undefined8 local_238;
  undefined1 local_229 [513];
  undefined8 local_28;
  longlong *local_20;
  
  local_240 = auStack_288;
  local_248 = 0;
  local_250 = 0;
  local_258 = 0;
  local_28 = 0;
  local_238 = 0;
  local_res20 = param_4;
  FUN_00414630(param_4);
  (**(code **)(**(longlong **)(param_1 + 0x9b0) + 0x18))
            (*(longlong **)(param_1 + 0x9b0),&local_28,param_3);
  local_20 = (longlong *)FUN_01b21190(local_28,0x2c,0);
  (**(code **)(*local_20 + 0x18))(local_20,&local_250,0);
  FUN_00416880(&local_258,local_res20);
  local_268 = local_258;
  FUN_00416cd0(&local_248,3,local_250,&LAB_0156d0a0);
  FUN_00415dd0(&local_238,local_248,0);
  uVar1 = FUN_004425e0(local_229,local_238);
  _Sensor_SetSetting(param_2,uVar1);
  FUN_00410f20(local_20);
  FUN_00414560(&local_258,3);
  FUN_004144d0(&local_238);
  FUN_00414480(&local_28);
  FUN_004144d0(&local_res20);
  return;
}

