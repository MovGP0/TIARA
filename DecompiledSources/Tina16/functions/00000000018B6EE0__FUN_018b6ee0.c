/* Ghidra address: 018b6ee0 */
/* Ghidra symbol: FUN_018b6ee0 */


void FUN_018b6ee0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  lVar1 = FUN_01803a30(*(undefined8 *)(param_1 + 8));
  *(longlong *)(param_1 + 8) = lVar1;
  FUN_00414ad0(lVar1 + 0x20,L"item");
  FUN_01802f80(&local_10,param_2);
  FUN_0043f750(&local_18,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xc));
  FUN_0043f750(&local_20,param_3);
  FUN_00416cd0(*(longlong *)(param_1 + 8) + 0x30,7,L"text=\"",local_10,L"\" page=\"",local_18,
               L"\" top=\"",local_20,&LAB_018b7068);
  FUN_00414560(&local_20,3);
  return;
}

