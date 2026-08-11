/* Ghidra address: 00cd8e90 */
/* Ghidra symbol: FUN_00cd8e90 */


void FUN_00cd8e90(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  uint local_2c;
  longlong *local_28;
  longlong *local_20;
  
  local_40 = auStack_78;
  local_50 = 0;
  local_48 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00cd9030(param_1,local_res10,local_28);
  iVar2 = (**(code **)(*local_28 + 0x28))(local_28);
  local_2c = iVar2 + -1;
  (**(code **)(*local_28 + 0x18))(local_28,&local_48,local_2c);
  (**(code **)(*param_1 + 0x40))(param_1,local_res18,local_48);
  local_2c = local_2c - 1;
  if (-1 < (int)local_2c) {
    do {
      (**(code **)(*local_28 + 0x18))(local_28,&local_50,local_2c);
      (**(code **)(*param_1 + 200))(param_1,local_res18,local_50);
      local_2c = local_2c - 1;
    } while (local_2c < 0x80000000);
  }
  plVar1 = local_28;
  local_20 = local_28;
  local_28 = (longlong *)0x0;
  FUN_00410f20(plVar1);
  FUN_00414560(&local_50,2);
  FUN_00414480(&local_res10);
  return;
}

