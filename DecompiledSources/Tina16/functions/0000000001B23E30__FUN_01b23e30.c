/* Ghidra address: 01b23e30 */
/* Ghidra symbol: FUN_01b23e30 */


void FUN_01b23e30(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *local_res10;
  longlong *local_res18 [2];
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_40 = auStack_78;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_0041b910(param_2);
  FUN_0041b910(local_res18[0]);
  local_28 = (longlong *)0x0;
  local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  (**(code **)(*param_1 + 0x80))(param_1,1);
  plVar3 = (longlong *)FUN_00609e10(param_1);
  uVar1 = (**(code **)(*plVar3 + 0x30))(plVar3,0,0);
  FUN_0060be30(param_1,uVar1);
  uVar2 = FUN_0060a330(param_1);
  FUN_010b5120(param_1,uVar2 & 0xffffff,&local_28);
  (**(code **)(*local_28 + 200))(local_28,local_20);
  FUN_004b6dc0(local_20,0);
  FUN_00c7ba40(local_20,&local_30);
  FUN_00416ba0(&local_58,L"data:image/png;base64,",local_30);
  (**(code **)(*local_res10 + 0x128))(local_res10,&local_50,local_58);
  (**(code **)(*local_res18[0] + 0x98))(local_res18[0],&local_48,local_50);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414480(&local_58);
  FUN_0041b800(&local_50);
  FUN_0041b800(&local_48);
  FUN_00414480(&local_30);
  FUN_0041b800(&local_res10);
  FUN_0041b800(local_res18);
  return;
}

