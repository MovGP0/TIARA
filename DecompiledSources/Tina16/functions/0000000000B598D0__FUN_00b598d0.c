/* Ghidra address: 00b598d0 */
/* Ghidra symbol: FUN_00b598d0 */


undefined8 FUN_00b598d0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if ((param_2 < 0) || (*(int *)(*(longlong *)(param_1 + 8) + 0x10) <= param_2)) {
    FUN_0043f750(&local_18,param_2);
    FUN_00416cd0(&local_10,3,L"List index (",local_18,L") out of bounds !");
    uVar1 = FUN_0044d490(&PTR_FUN_004355d0,1,local_10);
    FUN_004134c0(uVar1);
  }
  else {
    local_20 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),param_2);
  }
  FUN_00414560(&local_18,2);
  return local_20;
}

