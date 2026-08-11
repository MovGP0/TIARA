/* Ghidra address: 01d84f50 */
/* Ghidra symbol: FUN_01d84f50 */


bool FUN_01d84f50(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_30 = 0;
  local_28 = 0;
  local_31 = true;
  if (((DAT_03567c88 != 0) && (0 < *(int *)(DAT_03567c88 + 8))) &&
     (*(char *)(DAT_03567c88 + 0x2c) != '\0')) {
    FUN_0041ddd0(local_20,PTR_PTR_020014a8);
    FUN_0041ddd0(&local_28,PTR_LAB_020017e0);
    FUN_00416ad0(local_20,local_28);
    uVar2 = FUN_00416740(local_20[0]);
    FUN_0041ddd0(&local_30,PTR_PTR_02003e20);
    uVar3 = FUN_00416740(local_30);
    iVar1 = thunk_FUN_041604c6(0,uVar2,uVar3,0x2134);
    local_31 = iVar1 == 6;
  }
  FUN_00414560(&local_30,3);
  return local_31;
}

