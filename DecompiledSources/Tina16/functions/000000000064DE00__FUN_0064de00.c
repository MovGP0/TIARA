/* Ghidra address: 0064de00 */
/* Ghidra symbol: FUN_0064de00 */


void FUN_0064de00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0064dd90(param_1,&local_10);
  iVar2 = FUN_00416db0(local_10,param_2);
  if (iVar2 != 0) {
    uVar1 = FUN_00416740(param_2);
    FUN_0064c8e0(param_1,uVar1);
  }
  FUN_00414480(&local_10);
  return;
}

