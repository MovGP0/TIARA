/* Ghidra address: 015a9820 */
/* Ghidra symbol: FUN_015a9820 */


void FUN_015a9820(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  char local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  local_30 = auStack_98;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20 = (undefined8 *)0x0;
  local_28 = (undefined8 *)0x0;
  FUN_00416880(&local_38,param_2);
  FUN_00416880(&local_40,param_3);
  iVar1 = FUN_0043e6d0(local_38,local_40);
  if (iVar1 != 0) {
    FUN_00416880(&local_50,param_3);
    FUN_0043ea00(&local_48,local_50);
    if ((local_48 != 0) || (param_4 == '\x03')) {
      FUN_00416880(&local_58,param_2);
      local_20 = (undefined8 *)FUN_004b9860(&PTR_FUN_0047c498,1,local_58,0x40);
      puVar3 = local_20;
      if (param_4 != '\x03') {
        FUN_00416880(&local_60,param_3);
        puVar3 = (undefined8 *)FUN_004b9860(&PTR_FUN_0047c498,1,local_60,0xff00);
      }
      goto LAB_015a9996;
    }
  }
  FUN_00416880(&local_68,param_2);
  local_20 = (undefined8 *)FUN_004b9860(&PTR_FUN_0047c498,1,local_68,2);
  puVar3 = local_20;
LAB_015a9996:
  local_28 = puVar3;
  uVar2 = (**(code **)*local_20)(local_20);
  local_78 = param_4;
  (**(code **)(*param_1 + 0x18))(param_1,local_20,local_28,uVar2);
  FUN_00410f20(local_20);
  if (local_20 != local_28) {
    uVar4 = FUN_004b6da0(local_28);
    FUN_004b6e40(local_28,uVar4);
    FUN_00410f20(local_28);
  }
  FUN_00414560(&local_68,7);
  return;
}

