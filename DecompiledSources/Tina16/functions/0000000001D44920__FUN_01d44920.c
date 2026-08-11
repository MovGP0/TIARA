/* Ghidra address: 01d44920 */
/* Ghidra symbol: FUN_01d44920 */


undefined1 FUN_01d44920(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_00441a10(&local_10,param_1);
  iVar2 = FUN_00416db0(local_10,L".TSC");
  if (iVar2 != 0) {
    FUN_00441a10(&local_18,param_1);
    iVar2 = FUN_00416db0(local_18,L".SCH");
    if (iVar2 != 0) {
      uVar1 = 0;
      goto LAB_01d44985;
    }
  }
  uVar1 = 1;
LAB_01d44985:
  FUN_00414560(&local_18,2);
  return uVar1;
}

