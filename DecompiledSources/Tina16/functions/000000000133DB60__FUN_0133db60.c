/* Ghidra address: 0133db60 */
/* Ghidra symbol: FUN_0133db60 */


void FUN_0133db60(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_88;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_10 = 0;
  local_18 = 0;
  local_68 = 0;
  FUN_01b0a6f0(param_1,&local_40,*(undefined8 *)(param_1 + 0xf50),param_3);
  FUN_00416ba0(&local_38,L"   VerilogA model execution Time = ",local_40);
  uVar1 = FUN_0040f200(param_2,local_38);
  FUN_0040f590(uVar1);
  FUN_00409900();
  FUN_00414480(&local_10);
  local_20 = *(undefined8 *)(param_1 + 0xf68);
  FUN_00448450(&local_10,local_20,PTR_DAT_02004830);
  FUN_00416ba0(&local_48,L"                           NEval = ",local_10);
  uVar1 = FUN_0040f200(param_2,local_48);
  FUN_0040f590(uVar1);
  FUN_00414480(&local_10);
  FUN_00409900();
  FUN_00414480(&local_18);
  local_28 = *(undefined8 *)(param_1 + 0xf70);
  FUN_00448450(&local_18,local_28,PTR_DAT_02004830);
  FUN_00416ba0(&local_50,L"                         NEvalEx = ",local_18);
  uVar1 = FUN_0040f200(param_2,local_50);
  FUN_0040f590(uVar1);
  FUN_00414480(&local_18);
  FUN_00409900();
  FUN_00414560(&local_50,4);
  FUN_00414560(&local_18,2);
  return;
}

