/* Ghidra address: 01a68760 */
/* Ghidra symbol: FUN_01a68760 */


void FUN_01a68760(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
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
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_010d56f0(&local_20);
  FUN_00416ba0(&local_28,local_20,L"\\Lib\\site-packages\\tpack_t\\runner\\");
  FUN_00416ba0(&local_30,local_28,L"test_process_curve.py");
  (**(code **)(*plVar1 + 0xd8))(plVar1,local_30);
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_78);
  uVar2 = FUN_013b5bb0(&DAT_013b55b8,1,local_78,0,0);
  *(undefined8 *)(param_1 + 0x770) = uVar2;
  FUN_013b5e30(uVar2);
  FUN_00410f20(plVar1);
  FUN_00414560(&local_78,0xc);
  return;
}

