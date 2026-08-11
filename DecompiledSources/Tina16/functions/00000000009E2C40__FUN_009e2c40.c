/* Ghidra address: 009e2c40 */
/* Ghidra symbol: FUN_009e2c40 */


undefined8 FUN_009e2c40(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_30;
  longlong local_28;
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  lVar2 = (**(code **)*param_2)(param_2);
  if (lVar2 < 1) {
    local_30 = 0;
  }
  else {
    uVar3 = (**(code **)*param_2)(param_2);
    FUN_00419260(local_20,&DAT_009e2bf8,1,uVar3);
    uVar1 = (**(code **)*param_2)(param_2);
    (**(code **)(*param_2 + 0x18))(param_2,local_20[0],uVar1);
    lVar2 = 0;
    if (local_20[0] != 0) {
      lVar2 = *(longlong *)(local_20[0] + -8);
    }
    (**(code **)(*param_1 + 8))(param_1,&local_28,local_20[0],lVar2 + -1);
    local_30 = 0;
    if (local_28 != 0) {
      local_30 = *(undefined8 *)(local_28 + -8);
    }
    FUN_004b7300(param_3,local_28,local_30);
    FUN_00419430(local_20,&DAT_009e2bf8);
  }
  FUN_00419430(&local_28,&DAT_00406578);
  FUN_00419430(local_20,&DAT_009e2bf8);
  return local_30;
}

