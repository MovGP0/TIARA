/* Ghidra address: 015969b0 */
/* Ghidra symbol: FUN_015969b0 */


int FUN_015969b0(int param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  int local_c;
  
  local_20[0] = 0;
  local_28 = 0;
  local_c = param_1;
  if (param_1 < 0) {
    FUN_0043f750(&local_28,param_1);
    FUN_00416ba0(local_20,L"error ",local_28);
    uVar1 = FUN_0044d490(&PTR_FUN_015966e0,1,local_20[0]);
    FUN_004134c0(uVar1);
  }
  FUN_00414560(&local_28,2);
  return local_c;
}

