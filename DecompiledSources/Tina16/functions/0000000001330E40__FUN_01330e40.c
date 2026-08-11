/* Ghidra address: 01330e40 */
/* Ghidra symbol: FUN_01330e40 */


undefined8 FUN_01330e40(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_res10 [3];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0043ea00(&local_20,local_res10[0]);
  FUN_01330c90(&local_18,local_20);
  FUN_0043e130(&local_10,local_18);
  FUN_00414b50(local_res10,local_10);
  iVar1 = FUN_004170c0(&LAB_01330f78,local_res10[0],1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (local_res10[0] != 0) {
      iVar1 = *(int *)(local_res10[0] + -4);
    }
    while (*(short *)(local_res10[0] + -2 + (longlong)iVar1 * 2) != 0x2e) {
      iVar1 = iVar1 + -1;
    }
  }
  uVar2 = 0;
  if (local_res10[0] != 0) {
    uVar2 = *(undefined4 *)(local_res10[0] + -4);
  }
  FUN_00416dc0(param_1,local_res10[0],iVar1 + 1,uVar2);
  FUN_00414560(&local_20,3);
  FUN_00414480(local_res10);
  return param_1;
}

