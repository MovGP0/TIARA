/* Ghidra address: 00ccc5e0 */
/* Ghidra symbol: FUN_00ccc5e0 */


int FUN_00ccc5e0(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  int local_48;
  int local_44;
  longlong local_40;
  int local_34;
  undefined8 *local_30;
  longlong local_28;
  undefined8 *local_20;
  
  local_50 = auStack_78;
  local_34 = 0;
  local_48 = 0;
  local_28 = 0;
  if (param_2 == 0) {
    return 1;
  }
  local_20 = (undefined8 *)0x0;
  local_20 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_004b9f40(local_20,param_2);
  uVar2 = (**(code **)*local_20)(local_20);
  local_28 = (**(code **)PTR_DAT_02002828)(local_20[1],uVar2);
  if (local_28 == 0) {
    FUN_00ca5660(0x6f,2);
  }
  else if (param_3 == 1) {
    while (local_40 = (**(code **)PTR_DAT_020015d0)(local_28,0,0,0), local_40 != 0) {
      local_44 = (**(code **)PTR_DAT_02002998)(*(undefined8 *)(param_1 + 0x18));
      if (local_44 == 0) goto LAB_00ccc812;
      local_48 = local_48 + 1;
      (**(code **)PTR_DAT_02004818)(local_40);
    }
    uVar2 = (**(code **)PTR_DAT_02002358)();
    iVar3 = FUN_00ca5650(uVar2);
    if ((iVar3 == 0x6c) && (0 < local_48)) {
      (**(code **)PTR_DAT_02003ca0)();
      local_34 = local_48;
      iVar3 = local_34;
code_r0x00ccc7ea:
      local_34 = iVar3;
      (**(code **)PTR_DAT_02002fc0)(local_28);
      puVar1 = local_20;
      local_30 = local_20;
      local_20 = (undefined8 *)0x0;
      FUN_00410f20(puVar1);
      return local_34;
    }
    FUN_00ca5660(0x6f,9);
  }
  else if (param_3 == 2) {
    local_40 = (**(code **)PTR_DAT_02005ab8)(local_28,0);
    if (local_40 == 0) {
      FUN_00ca5660(0x6f,0xd);
    }
    else {
      local_44 = (**(code **)PTR_DAT_02002998)(*(undefined8 *)(param_1 + 0x18),local_40);
      iVar3 = local_44;
      if (local_44 != 0) goto code_r0x00ccc7ea;
    }
  }
  else {
    FUN_00ca5660(0x6f,100);
  }
LAB_00ccc812:
  FUN_00ccc840(0,local_50);
  return local_34;
}

