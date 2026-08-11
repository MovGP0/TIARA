/* Ghidra address: 015d9bd0 */
/* Ghidra symbol: FUN_015d9bd0 */


undefined4
FUN_015d9bd0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,char *param_5
            ,ulonglong param_6,undefined4 param_7,undefined8 param_8,char param_9)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 *local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  longlong local_30;
  undefined4 local_24;
  undefined8 local_20;
  
  local_60 = auStack_a8;
  local_24 = 0;
  local_48 = 1000000;
  local_20 = FUN_00409570(1000000);
  if (param_6 == 0xffffffffffffffff) {
    lVar2 = (**(code **)*param_2)(param_2);
    lVar3 = FUN_004b6da0(param_2);
    local_40 = lVar2 - lVar3;
    local_38 = local_48;
  }
  else {
    local_40 = param_6;
    if ((longlong)param_6 < (longlong)local_48) {
      local_58 = param_6;
    }
    else {
      local_58 = local_48;
    }
    local_38 = local_58;
  }
  local_50 = 0;
  if ((param_9 == '\0') || ((**(code **)(*param_1 + 0xa8))(param_1,0,0,param_5), *param_5 == '\0'))
  {
    do {
      if ((longlong)local_40 <= local_50) break;
      iVar1 = (**(code **)(*param_2 + 0x18))(param_2,local_20,local_38 & 0xffffffff);
      local_30 = (longlong)iVar1;
      local_80 = param_7;
      local_78 = param_8;
      local_88 = param_4;
      iVar1 = FUN_015d9820(param_1,local_20,iVar1,param_3);
      local_50 = local_50 + iVar1;
    } while ((param_9 == '\0') ||
            ((**(code **)(*param_1 + 0xa8))
                       (param_1,((double)local_50 / (double)(longlong)local_40) * 100.0,1,param_5),
            *param_5 == '\0'));
    if ((param_9 == '\0') ||
       ((**(code **)(*param_1 + 0xa8))(param_1,0x4059000000000000,2,param_5), *param_5 == '\0')) {
      FUN_004095f0(local_20);
      return local_24;
    }
  }
  FUN_015d9e70(0,local_60);
  return local_24;
}

