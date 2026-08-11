/* Ghidra address: 008f9840 */
/* Ghidra symbol: FUN_008f9840 */


void FUN_008f9840(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    FUN_0041ddd0(local_20,PTR_PTR_02003aa8);
    uVar2 = FUN_0044d490(&PTR_FUN_00471da0,1,local_20[0]);
    FUN_004134c0(uVar2);
  }
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + -4) >> 1;
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,uVar1 * 2);
  FUN_00414480(local_20);
  return;
}

