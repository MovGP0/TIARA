/* Ghidra address: 00cbde70 */
/* Ghidra symbol: FUN_00cbde70 */


void FUN_00cbde70(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_1 + 0x100) == 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_02002a48);
    uVar1 = FUN_0086dfd0(&PTR_FUN_00ca6a28,1,local_10);
    FUN_004134c0(uVar1);
  }
  FUN_00414480(&local_10);
  return;
}

