/* Ghidra address: 018b9fb0 */
/* Ghidra symbol: FUN_018b9fb0 */


void FUN_018b9fb0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  uVar1 = FUN_018039f0(*(undefined8 *)(param_1 + 0x78),param_2);
  FUN_01803ed0(uVar1,L"PaperSize",&DAT_018ba0a8);
  FUN_0180d940(local_20,param_3);
  FUN_01803ed0(uVar1,L"PaperWidth",local_20[0]);
  FUN_0180d940(&local_28,param_4);
  FUN_01803ed0(uVar1,L"PaperHeight",local_28);
  FUN_00414560(&local_28,2);
  return;
}

