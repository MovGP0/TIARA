/* Ghidra address: 017c3910 */
/* Ghidra symbol: FUN_017c3910 */


void FUN_017c3910(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_0043f750(&local_18,*(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x18));
  FUN_00416cd0(&local_10,3,param_2,L" at ",local_18);
  uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,local_10);
  FUN_004134c0(uVar1);
  FUN_00414560(&local_18,2);
  return;
}

