/* Ghidra address: 0170a6e0 */
/* Ghidra symbol: FUN_0170a6e0 */


undefined1 FUN_0170a6e0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined1 local_9;
  
  local_20 = auStack_48;
  local_18 = 0;
  local_9 = 1;
  FUN_00416ba0(&local_18,*(undefined8 *)(param_1 + 0x458),L"SPMACROS.IND");
  FUN_004412f0(local_18);
  uVar1 = FUN_004b9860(&PTR_FUN_0047c498,1,local_18,0xff10);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  FUN_0170b700(param_1,0);
  FUN_0170b860(param_1);
  local_9 = 0;
  FUN_00414480(&local_18);
  return local_9;
}

