/* Ghidra address: 01a846c0 */
/* Ghidra symbol: FUN_01a846c0 */


void FUN_01a846c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01aee720(&local_10,0x406,*(undefined4 *)(param_1 + 0x6b8),L"DFSaveMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_10);
  if (*(longlong *)(param_1 + 0x798) == 0) {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa90),1);
    FUN_01a794b0(param_1,param_2);
  }
  else {
    iVar1 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0x7a0) + 0x48),L"Noname");
    if (iVar1 == 0) {
      FUN_01a7e680(param_1,param_2);
    }
    else {
      FUN_01155ce0(*(undefined8 *)(*(longlong *)(param_1 + 0x7a0) + 0x48));
    }
  }
  FUN_00414480(&local_10);
  return;
}

