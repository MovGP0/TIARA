/* Ghidra address: 00baf7a0 */
/* Ghidra symbol: FUN_00baf7a0 */


undefined8 * FUN_00baf7a0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  
  local_30 = auStack_68;
  local_28 = 0;
  FUN_0041b800(&local_28);
  local_20 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  local_48 = FUN_00b97c30(&PTR_FUN_0043a338);
  local_40 = 0;
  lVar1 = FUN_00bad320(&PTR_FUN_00b9f300,1,local_20,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x60;
  }
  FUN_0041b840(&local_28,lVar1);
  (**(code **)(*param_1 + 0x20))(param_1,local_28);
  FUN_0041b800(&local_28);
  lVar1 = (**(code **)*local_20)(local_20);
  FUN_004169f0(param_2,lVar1 / 2);
  lVar1 = (**(code **)*local_20)(local_20);
  if (0 < lVar1) {
    FUN_004b6dc0(local_20,0);
    uVar2 = FUN_00416740(*param_2);
    uVar3 = (**(code **)*local_20)(local_20);
    FUN_004b84c0(local_20,uVar2,uVar3);
  }
  FUN_00410f20(local_20);
  FUN_0041b800(&local_28);
  return param_2;
}

