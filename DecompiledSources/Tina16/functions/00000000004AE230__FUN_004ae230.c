/* Ghidra address: 004ae230 */
/* Ghidra symbol: FUN_004ae230 */


undefined1 FUN_004ae230(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_40;
  longlong local_38;
  undefined1 local_29;
  undefined8 *local_28;
  undefined8 *local_20;
  
  local_50 = auStack_78;
  local_29 = 0;
  local_38 = *param_1;
  local_40 = *param_2;
  if (local_38 != local_40) {
    return 0;
  }
  iVar2 = FUN_004b2060(param_1);
  iVar3 = FUN_004b2060(param_2);
  if (iVar2 != iVar3) {
    return local_29;
  }
  local_28 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_004ae190(auStack_78,local_28,param_1,param_3);
  local_20 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_004ae190(auStack_78,local_20,param_2,param_4);
  lVar5 = (**(code **)*local_28)(local_28);
  lVar6 = (**(code **)*local_20)(local_20);
  if (lVar5 == lVar6) {
    uVar4 = (**(code **)*local_28)(local_28);
    cVar1 = FUN_0043e2c0(local_28[1],local_20[1],uVar4);
    if (cVar1 != '\0') {
      local_29 = 1;
      goto LAB_004ae354;
    }
  }
  local_29 = 0;
LAB_004ae354:
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  return local_29;
}

