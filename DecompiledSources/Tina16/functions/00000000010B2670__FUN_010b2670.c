/* Ghidra address: 010b2670 */
/* Ghidra symbol: FUN_010b2670 */


undefined8 FUN_010b2670(longlong param_1,undefined8 param_2,int *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  local_30[0] = 0;
  FUN_00414480(local_30);
  *param_3 = 0;
  *param_4 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      FUN_00441a10(&local_48,*(undefined8 *)(lVar2 + 0x30));
      FUN_0043e130(local_40,local_48);
      iVar1 = FUN_00416db0(local_40[0],&DAT_010b27b8);
      if (iVar1 == 0) {
        *param_4 = lVar2;
        FUN_00414b50(local_30,*(undefined8 *)(lVar2 + 0x30));
        *param_3 = *param_3 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414ad0(param_2,local_30[0]);
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  return param_2;
}

