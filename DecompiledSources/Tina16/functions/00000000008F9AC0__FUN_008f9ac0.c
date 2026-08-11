/* Ghidra address: 008f9ac0 */
/* Ghidra symbol: FUN_008f9ac0 */


int FUN_008f9ac0(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  uVar1 = FUN_004b6da0(param_1);
  if ((uVar1 & 1) != 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_02001d78);
    uVar2 = FUN_0044d490(&PTR_FUN_00471608,1,local_10);
    FUN_004134c0(uVar2);
  }
  uVar1 = FUN_004b6da0(param_1);
  FUN_00414480(&local_10);
  return (int)(uVar1 >> 1) + 1;
}

