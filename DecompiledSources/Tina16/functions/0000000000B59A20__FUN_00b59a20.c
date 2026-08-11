/* Ghidra address: 00b59a20 */
/* Ghidra symbol: FUN_00b59a20 */


undefined8 FUN_00b59a20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined8 local_20;
  
  local_res10[0] = param_2;
  FUN_00414650(local_res10);
  local_20 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar3);
      iVar1 = FUN_00416420(*(undefined8 *)(lVar2 + 0x38),local_res10[0]);
      if (iVar1 == 0) {
        local_20 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar3);
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414520(local_res10);
  return local_20;
}

