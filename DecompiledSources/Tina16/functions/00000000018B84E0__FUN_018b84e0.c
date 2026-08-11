/* Ghidra address: 018b84e0 */
/* Ghidra symbol: FUN_018b84e0 */


void FUN_018b84e0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  uVar1 = FUN_01803bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28),L"anchors");
  lVar2 = FUN_01803a30(uVar1);
  FUN_00414ad0(lVar2 + 0x20,L"item");
  FUN_01802f80(local_20,param_2);
  FUN_0043f750(&local_28,*(undefined4 *)(param_1 + 0xc));
  uVar1 = FUN_0040c770(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x90));
  FUN_0043f780(&local_30,uVar1);
  FUN_00416cd0(lVar2 + 0x30,7,L"text=\"",local_20[0],L"\" page=\"",local_28,L"\" top=\"",local_30,
               &LAB_018b86a4);
  FUN_00414560(&local_30,3);
  return;
}

