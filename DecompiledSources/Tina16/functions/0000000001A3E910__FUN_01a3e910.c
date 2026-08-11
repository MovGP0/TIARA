/* Ghidra address: 01a3e910 */
/* Ghidra symbol: FUN_01a3e910 */


void FUN_01a3e910(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*plVar1 + 0xd8))(plVar1,local_res10[0]);
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_60);
  uVar2 = FUN_013b5bb0(&DAT_013b55b8,1,local_60,0,0);
  *(undefined8 *)(param_1 + 0x808) = uVar2;
  FUN_013b5e30(uVar2);
  FUN_00414ad0(param_1 + 0x2ba0,
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x808) + 0x58) + 0x108));
  FUN_00410f20(plVar1);
  FUN_00414560(&local_60,9);
  FUN_00414480(local_res10);
  return;
}

