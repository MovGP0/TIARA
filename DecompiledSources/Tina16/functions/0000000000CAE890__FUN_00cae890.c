/* Ghidra address: 00cae890 */
/* Ghidra symbol: FUN_00cae890 */


void FUN_00cae890(longlong *param_1,undefined8 *param_2,ulonglong param_3,char param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong local_res18;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined *local_38;
  int local_2c;
  longlong local_28;
  undefined *local_20 [2];
  
  local_40 = auStack_88;
  local_50 = 0;
  local_48 = 0;
  local_20[0] = (undefined *)0x0;
  if ((longlong)param_3 < 0) {
    local_40 = auStack_88;
    local_28 = FUN_004b6da0(param_2);
    lVar2 = (**(code **)*param_2)(param_2);
    local_res18 = lVar2 - local_28;
    FUN_004b6dc0(param_2,local_28);
    puVar1 = local_40;
  }
  else {
    local_res18 = param_3;
    puVar1 = auStack_88;
    if (param_3 == 0) {
      local_res18 = (**(code **)*param_2)(param_2);
      FUN_004b6dc0(param_2,0);
      puVar1 = local_40;
    }
  }
  local_40 = puVar1;
  if (param_4 != '\0') {
    if ((char)param_1[0x1e] == '\0') {
      if (0x7fffffff < (longlong)local_res18) {
        FUN_0041ddd0(&local_48,PTR_PTR_02002ac8);
        uVar3 = FUN_0086dfd0(&PTR_FUN_00ca93f0,1,local_48);
        FUN_004134c0(uVar3);
      }
      FUN_00cacb60(param_1,local_res18 & 0xffffffff,1);
    }
    else {
      FUN_00cacc00(param_1,local_res18,1);
    }
  }
  (**(code **)(*param_1 + 0x90))(param_1,1,local_res18);
  FUN_00419260(local_20,&DAT_0086e978,1,(longlong)(int)param_1[0x27]);
  for (; 0 < (longlong)local_res18; local_res18 = local_res18 - (longlong)local_2c) {
    local_38 = local_20[0];
    if (local_20[0] != (undefined *)0x0) {
      local_38 = *(undefined **)(local_20[0] + -8);
    }
    local_2c = FUN_008764e0(local_res18,local_38);
    local_68 = 0;
    local_2c = FUN_0086e810(&LAB_0086e608,param_2,local_20,local_2c);
    if (local_2c < 1) {
      FUN_0041ddd0(&local_50,PTR_PTR_02002130);
      uVar3 = FUN_0086dfd0(&PTR_FUN_00ca67a8,1,local_50);
      FUN_004134c0(uVar3);
    }
    (**(code **)(*param_1 + 0x130))(param_1,local_20[0],local_2c,0);
  }
  (**(code **)(*param_1 + 0xa0))(param_1,1);
  FUN_00419430(local_20,&DAT_0086e978);
  FUN_00414560(&local_50,2);
  FUN_00419430(local_20,&DAT_0086e978);
  return;
}

