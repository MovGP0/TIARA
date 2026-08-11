/* Ghidra address: 0069cb50 */
/* Ghidra symbol: FUN_0069cb50 */


undefined1 FUN_0069cb50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_004167d0(&local_10,param_3);
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x10),local_10);
  if (iVar2 == 0) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_004167d0(&local_18,param_4);
      iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),local_18);
      if (iVar2 != 0) goto LAB_0069cbc4;
    }
    uVar1 = 1;
  }
  else {
LAB_0069cbc4:
    uVar1 = 0;
  }
  FUN_00414560(&local_18,2);
  return uVar1;
}

