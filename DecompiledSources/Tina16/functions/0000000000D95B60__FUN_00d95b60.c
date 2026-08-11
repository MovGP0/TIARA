/* Ghidra address: 00d95b60 */
/* Ghidra symbol: FUN_00d95b60 */


undefined8
FUN_00d95b60(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4,
            undefined4 param_5,undefined8 *param_6,undefined8 *param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined4 local_2c;
  
  local_34 = *param_3;
  local_2c = (undefined4)param_3[1];
  lVar1 = *(longlong *)(param_1 + 0x18 + (local_34 & 0xff) * 8);
  if (lVar1 == 0) {
    if (param_6 == (undefined8 *)0x0) {
      FUN_00423010(&local_44,0,0,0,0);
      *param_7 = local_44;
      param_7[1] = uStack_3c;
    }
    else {
      *param_7 = *param_6;
      param_7[1] = param_6[1];
    }
    uVar3 = 0;
  }
  else {
    local_34._4_4_ = (undefined4)(local_34 >> 0x20);
    uVar2 = local_34._4_4_;
    uVar3 = (**(code **)(lVar1 + 0x48))
                      (lVar1,param_1,param_2,uVar2,local_2c,param_4,param_5,param_6,param_7,0);
  }
  return uVar3;
}

