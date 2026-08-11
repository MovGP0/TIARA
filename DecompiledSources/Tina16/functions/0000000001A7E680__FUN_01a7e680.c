/* Ghidra address: 01a7e680 */
/* Ghidra symbol: FUN_01a7e680 */


void FUN_01a7e680(longlong param_1,undefined8 param_2)

{
  undefined8 local_110 [33];
  
  local_110[0] = 0;
  FUN_01aee720(local_110,0x406,*(undefined4 *)(param_1 + 0x6b8),L"DFSaveAsMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_110[0]);
  if (*(longlong *)(param_1 + 0x798) == 0) {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa90),1);
    FUN_01a794b0(param_1,param_2);
  }
  FUN_00414480(local_110);
  return;
}

