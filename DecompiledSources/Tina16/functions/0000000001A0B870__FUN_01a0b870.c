/* Ghidra address: 01a0b870 */
/* Ghidra symbol: FUN_01a0b870 */


void FUN_01a0b870(longlong param_1)

{
  short sVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  sVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
  if (sVar1 == 0x53) {
    FUN_019f0400(param_1,&local_28,0,0);
    FUN_019ed1f0(param_1,&local_30,1,1);
    FUN_00416cd0(local_20,4,L".NODESET V( ",local_28,&DAT_01a0ba50,local_30);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_20[0])
    ;
  }
  else {
    FUN_019f0400(param_1,&local_40,0,0);
    FUN_019f0400(param_1,&local_48,1,0);
    FUN_019ed1f0(param_1,&local_50,1,1);
    FUN_00416cd0(&local_38,6,L".NODESET V( ",local_40,&LAB_01a0ba64,local_48,&DAT_01a0ba50,local_50)
    ;
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_38);
  }
  FUN_00414560(&local_50,7);
  return;
}

