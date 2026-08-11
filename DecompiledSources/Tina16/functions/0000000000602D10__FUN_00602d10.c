/* Ghidra address: 00602d10 */
/* Ghidra symbol: FUN_00602d10 */


undefined8 FUN_00602d10(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0043e600(&local_20,local_res10[0]);
  FUN_00414b50(local_res10,local_20);
  iVar3 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar3) {
    do {
      puVar2 = (undefined8 *)FUN_004aeac0(param_1,iVar3);
      iVar1 = FUN_00416db0(puVar2[1],local_res10[0]);
      if (iVar1 == 0) {
        local_28 = *puVar2;
        goto LAB_00602d94;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  local_28 = 0;
LAB_00602d94:
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return local_28;
}

