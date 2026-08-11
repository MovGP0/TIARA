/* Ghidra address: 01299180 */
/* Ghidra symbol: FUN_01299180 */


void FUN_01299180(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *local_res8 [4];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20 [2];
  
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_20[0] = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_res8[0] = param_1;
  FUN_0041b910(param_1);
  if (local_res8[0] != (longlong *)0x0) {
    (**(code **)(*local_res8[0] + 0x100))(local_res8[0],local_70,L"title");
    FUN_00414ad0(*(longlong *)(param_2 + 0x208) + 0x20,local_70[0]);
    (**(code **)(*local_res8[0] + 0x100))(local_res8[0],&local_78,&DAT_01299804);
    FUN_00414ad0(*(longlong *)(param_2 + 0x208) + 0x38,local_78);
    (**(code **)(*local_res8[0] + 0x100))(local_res8[0],&local_80,L"pages");
    FUN_00414ad0(*(longlong *)(param_2 + 0x208) + 0x30,local_80);
    (**(code **)(*local_res8[0] + 0x100))(local_res8[0],&local_88,L"pythonconsole");
    FUN_00414ad0(*(longlong *)(param_2 + 0x208) + 0x40,local_88);
    (**(code **)(*local_res8[0] + 0x100))(local_res8[0],&local_60,L"interface");
    if (local_60 != 0) {
      uVar2 = FUN_0043fc50(local_60,0);
      FUN_015fc2b0(param_2 + 0x492,uVar2);
    }
    (**(code **)(*local_res8[0] + 0xe8))(local_res8[0],local_20,L"parameter");
    (**(code **)(*local_20[0] + 0x68))(local_20[0]);
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x208) + 8);
    (**(code **)(*plVar1 + 0x90))(plVar1);
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x208) + 0x10);
    (**(code **)(*plVar1 + 0x90))(plVar1);
    (**(code **)(*local_20[0] + 0x70))(local_20[0],&local_90);
    FUN_0041b890(&local_28,local_90,&DAT_0129988c);
    while (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0x100))(local_28,&local_38,L"name");
      (**(code **)(*local_28 + 0x100))(local_28,&local_40,L"value");
      (**(code **)(*local_28 + 0x100))(local_28,&local_48,&DAT_012998d8);
      (**(code **)(*local_28 + 0x100))(local_28,&local_50,&DAT_012998ec);
      (**(code **)(*local_28 + 0x100))(local_28,&local_58,L"comment");
      FUN_00416cd0(&local_98,7,local_38,&DAT_0129991c,local_40,&DAT_0129992c,local_48,&DAT_0129993c,
                   local_50);
      plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x208) + 8);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_98);
      plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x208) + 0x10);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_58);
      (**(code **)(*local_20[0] + 0x70))(local_20[0],&local_a0);
      FUN_0041b890(&local_28,local_a0,&DAT_0129988c);
    }
    (**(code **)(*local_res8[0] + 0xd8))(local_res8[0],&local_a8,L"code");
    FUN_0041b890(&local_30,local_a8,&DAT_0129988c);
    if (local_30 == (longlong *)0x0) {
      (**(code **)(*local_res8[0] + 0xb8))(local_res8[0],&local_40);
    }
    else {
      (**(code **)(*local_30 + 0xb8))(local_30,&local_40);
    }
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x208) + 0x18);
    (**(code **)(*plVar1 + 0x90))(plVar1);
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x208) + 0x18);
    (**(code **)(*plVar1 + 0x60))(plVar1,local_40);
    FUN_010d0700(local_res8[0],*(undefined8 *)(*(longlong *)(param_2 + 0x208) + 0x18),0);
  }
  FUN_00417840(&local_a8,&DAT_00b9f8e0,2);
  FUN_00414480(&local_98);
  FUN_0041b800(&local_90);
  FUN_00414560(&local_88,4);
  FUN_00414560(&local_60,6);
  FUN_00417840(&local_30,&LAB_00b9fca0,2);
  FUN_0041b800(local_20);
  FUN_0041b800(local_res8);
  return;
}

