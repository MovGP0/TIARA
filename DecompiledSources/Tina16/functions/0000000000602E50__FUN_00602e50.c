/* Ghidra address: 00602e50 */
/* Ghidra symbol: FUN_00602e50 */


undefined8 FUN_00602e50(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar3 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar3) {
    do {
      puVar2 = (undefined8 *)FUN_004aeac0(param_1,iVar3);
      local_28 = *puVar2;
      FUN_00410ae0(local_28,local_20);
      iVar1 = FUN_00416db0(local_20[0],param_2);
      if (iVar1 == 0) goto LAB_00602eb8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  local_28 = 0;
LAB_00602eb8:
  FUN_00414480(local_20);
  return local_28;
}

