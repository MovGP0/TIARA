/* Ghidra address: 00594b90 */
/* Ghidra symbol: FUN_00594b90 */


undefined4 FUN_00594b90(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong local_20 [2];
  
  local_20[0] = 0;
  FUN_0043e600(local_20,param_2);
  iVar3 = 0;
  if (local_20[0] != 0) {
    iVar3 = *(int *)(local_20[0] + -4);
  }
  uVar2 = FUN_00416740(local_20[0]);
  uVar1 = FUN_00525420(uVar2,iVar3 * 2,0);
  FUN_00414480(local_20);
  return uVar1;
}

