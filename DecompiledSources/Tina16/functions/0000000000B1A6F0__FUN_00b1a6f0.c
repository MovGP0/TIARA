/* Ghidra address: 00b1a6f0 */
/* Ghidra symbol: FUN_00b1a6f0 */


void FUN_00b1a6f0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 == 1) {
    FUN_00414b50(&local_10,L"Bad hash table size !");
  }
  uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,local_10);
  FUN_004134c0(uVar1);
  FUN_00414480(&local_10);
  return;
}

