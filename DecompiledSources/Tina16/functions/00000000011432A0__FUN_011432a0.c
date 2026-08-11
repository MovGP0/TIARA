/* Ghidra address: 011432a0 */
/* Ghidra symbol: FUN_011432a0 */


undefined1
FUN_011432a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined1 param_5,byte *param_6)

{
  undefined8 local_res20;
  undefined1 auStack_88 [32];
  double local_68;
  byte *local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 *local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  undefined1 local_19;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_88;
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_38 = FUN_011431f0(auStack_88);
  local_19 = local_38 != 0;
  if ((bool)local_19) {
    FUN_01cc6020(param_2);
    local_18 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_2);
    local_10 = FUN_0113e810(&DAT_0113e408,1,param_5,0);
    FUN_0113f830(local_38,local_18,&local_28,&local_30);
    local_60 = param_6;
    local_68 = (double)param_1;
    FUN_0113f440(local_28,local_30,local_38,1);
    local_20 = 1 << (*param_6 & 0x1f);
    local_68 = 1.0 / ((double)local_20 * *(double *)(param_6 + 9));
    local_60 = (byte *)CONCAT44(local_60._4_4_,local_20);
    local_50 = 0;
    local_58 = param_3;
    FUN_0113eac0(local_10,local_38,local_18,*(undefined8 *)(param_6 + 1));
    FUN_0113edb0(local_10,*param_6,param_3);
    FUN_00410f20(local_10);
    FUN_00410f20(local_18);
    FUN_01cc6080(param_2,1,0);
  }
  FUN_00414480(&local_res20);
  return local_19;
}

