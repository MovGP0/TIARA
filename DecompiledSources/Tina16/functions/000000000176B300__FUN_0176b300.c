/* Ghidra address: 0176b300 */
/* Ghidra symbol: FUN_0176b300 */


void FUN_0176b300(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,char param_5,
                 undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 *local_30;
  undefined2 local_1a;
  longlong local_18;
  undefined8 *local_10;
  
  local_30 = auStack_68;
  local_10 = (undefined8 *)FUN_0198b200(0,&PTR_FUN_01984d18,1,*(undefined8 *)PTR_DAT_02001eb8);
  local_48 = 0;
  local_18 = FUN_01d30b30(&DAT_01d2e8e8,1,param_6,0);
  *(char *)(local_18 + 0x7a) = param_4;
  *(undefined8 *)(local_18 + 0x58) = param_3;
  if (param_1 == 0) {
    FUN_01d31aa0(local_18,local_10);
  }
  else {
    FUN_01d31aa0(local_18,param_1);
    *(undefined8 **)(local_18 + 0x48) = local_10;
  }
  *(undefined8 *)(local_18 + 0x50) = param_2;
  FUN_01d32e90(*(undefined8 *)PTR_DAT_02003458,&local_18);
  FUN_019a53e0(local_10,0);
  if (param_4 == '\0') {
    local_1a = 0x8401;
    if (param_5 != '\0') {
      local_1a = 0x8421;
    }
  }
  else {
    local_1a = 0x8601;
  }
  uVar1 = FUN_0198d3a0(local_10,local_1a,param_8);
  *param_7 = uVar1;
  uVar1 = (**(code **)*local_10)(local_10);
  FUN_00418590(uVar1,&DAT_01984da0);
  FUN_00410f20(local_18);
  return;
}

