/* Ghidra address: 018c0950 */
/* Ghidra symbol: FUN_018c0950 */


void FUN_018c0950(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  lVar3 = FUN_018b86b0(*(undefined8 *)(param_1 + 0xa0),param_2);
  if (lVar3 != 0) {
    FUN_01803cc0(lVar3,&local_20,L"page");
    iVar1 = FUN_0043fc00(local_20);
    FUN_01803cc0(lVar3,&local_28,&DAT_018c0a50);
    uVar2 = FUN_0043fc00(local_28);
    FUN_018ab560(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20) + 0x210),
                 iVar1 + 1,uVar2);
  }
  FUN_00414560(&local_28,2);
  return;
}

