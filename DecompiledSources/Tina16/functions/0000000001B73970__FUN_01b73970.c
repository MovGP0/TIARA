/* Ghidra address: 01b73970 */
/* Ghidra symbol: FUN_01b73970 */


void FUN_01b73970(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_res18 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  lVar3 = FUN_004095c0(0x1f0);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x6f8) + 0x4a0);
  (**(code **)(*plVar1 + 0x48))(plVar1,param_2,lVar3);
  FUN_0040d200(lVar3,0x1f0,0);
  FUN_00416ba0(local_40,local_res18[0],&DAT_01b73bd8);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + 0x940);
  (**(code **)(*plVar1 + 0x10))(plVar1,local_30,L"Schematic Editor Color Sets",local_40[0],0);
  FUN_00416910(lVar3,local_30[0],0xff);
  FUN_00416ba0(&local_50,local_res18[0],L"_Mode");
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + 0x940);
  (**(code **)(*plVar1 + 0x10))(plVar1,&local_48,L"Schematic Editor Color Sets",local_50,0);
  uVar2 = FUN_0043fc50(local_48,0);
  *(undefined1 *)(lVar3 + 0x100) = uVar2;
  puVar5 = (undefined8 *)PTR_DAT_02005768;
  puVar6 = (undefined8 *)(lVar3 + 0x104);
  for (lVar4 = 0xd; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = *(undefined4 *)puVar5;
  puVar5 = (undefined8 *)PTR_DAT_020021a0;
  puVar6 = (undefined8 *)(lVar3 + 0x170);
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_004169a0(&local_58,lVar3);
  FUN_01aa0060(*(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x940),local_58,lVar3 + 0x104,
               lVar3 + 0x170);
  FUN_00414560(&local_58,4);
  FUN_00414480(local_30);
  FUN_00414480(local_res18);
  return;
}

