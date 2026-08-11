/* Ghidra address: 010b1970 */
/* Ghidra symbol: FUN_010b1970 */


undefined1 FUN_010b1970(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_29 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      FUN_0043e1a0(&local_20,*(undefined8 *)(lVar2 + 0x30));
      FUN_0043e1a0(&local_28,local_res10[0]);
      iVar1 = FUN_00416db0(local_20,local_28);
      if (iVar1 == 0) {
        local_29 = 1;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return local_29;
}

