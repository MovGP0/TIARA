/* Ghidra address: 01997080 */
/* Ghidra symbol: FUN_01997080 */


longlong FUN_01997080(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10 [3];
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = *(int *)(param_1 + 0x6c);
  iVar3 = *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x68) + -1;
  if (iVar2 <= iVar3) {
    iVar3 = (iVar3 - iVar2) + 1;
    do {
      local_28 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar2);
      FUN_004169a0(&local_20,local_28 + 0x2d8);
      iVar1 = FUN_00416db0(local_20,local_res10[0]);
      if (iVar1 == 0) goto LAB_01997110;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_28 = 0;
LAB_01997110:
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return local_28;
}

