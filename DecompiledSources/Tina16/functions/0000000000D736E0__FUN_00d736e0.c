/* Ghidra address: 00d736e0 */
/* Ghidra symbol: FUN_00d736e0 */


void FUN_00d736e0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_78;
  local_48 = 0;
  local_50 = 0;
  local_30 = 0;
  puVar1 = auStack_78;
  if (param_2 == 0) goto LAB_00d73806;
  cVar2 = FUN_00440a20(param_2,1);
  if (cVar2 == '\0') {
    puVar1 = local_40;
    if (*(short *)(param_2 + 2) == 0x3a) goto LAB_00d73806;
    FUN_00409da0(&local_50,0);
    FUN_00441640(&local_48,local_50);
    FUN_00416ba0(&local_30,local_48,param_2);
    cVar2 = FUN_00440a20(local_30,1);
    puVar1 = local_40;
    if (cVar2 == '\0') goto LAB_00d73806;
  }
  local_28 = FUN_004b9860(&PTR_FUN_0047c498,1,param_2,0x40);
  local_20 = (longlong *)FUN_00410e60(&PTR_FUN_00d5c6d8,1);
  FUN_00d73240(param_1);
  FUN_00d75380(local_20,param_1);
  (**(code **)(*local_20 + 0x38))(local_20,local_28);
  FUN_00410f20(local_20);
  FUN_00d732b0(param_1);
  FUN_00410f20(local_28);
  puVar1 = local_40;
LAB_00d73806:
  local_40 = puVar1;
  FUN_00414560(&local_50,2);
  FUN_00414480(&local_30);
  return;
}

