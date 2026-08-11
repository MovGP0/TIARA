/* Ghidra address: 00c8aa90 */
/* Ghidra symbol: FUN_00c8aa90 */


void FUN_00c8aa90(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (0x7fffffff - param_2 < *(int *)(param_1 + 0x30) + param_3) {
    FUN_0041ddd0(&local_10,PTR_PTR_02005908);
    uVar1 = FUN_0086dfd0(&PTR_FUN_00c89840,1,local_10);
    FUN_004134c0(uVar1);
  }
  FUN_00414480(&local_10);
  return;
}

