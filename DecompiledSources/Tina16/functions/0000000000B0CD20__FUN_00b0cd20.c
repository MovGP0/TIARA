/* Ghidra address: 00b0cd20 */
/* Ghidra symbol: FUN_00b0cd20 */


undefined4 FUN_00b0cd20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_00416780(&local_20,*(undefined2 *)(param_1 + 0x30));
  iVar1 = FUN_004170c0(local_20,param_2,1);
  if (iVar1 == 0) {
    FUN_00414b50(&local_10,param_2);
  }
  else {
    FUN_00416dc0(&local_10,param_2,1,iVar1 + -1);
  }
  FUN_00416780(&local_28,*(undefined2 *)(param_1 + 0x30));
  iVar1 = FUN_004170c0(local_28,param_3,1);
  if (iVar1 == 0) {
    FUN_00414b50(&local_18,param_3);
  }
  else {
    FUN_00416dc0(&local_18,param_3,1,iVar1 + -1);
  }
  uVar2 = FUN_0043e6d0(local_10,local_18);
  FUN_00414560(&local_28,4);
  return uVar2;
}

