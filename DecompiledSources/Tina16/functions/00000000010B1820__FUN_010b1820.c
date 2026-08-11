/* Ghidra address: 010b1820 */
/* Ghidra symbol: FUN_010b1820 */


undefined1 FUN_010b1820(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 local_31;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  local_31 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      FUN_0043e1a0(local_30,*(undefined8 *)(lVar2 + 0x30));
      FUN_00441a10(&local_20,local_30[0]);
      iVar1 = FUN_00416db0(local_20,&DAT_010b1934);
      if (((iVar1 == 0) || (iVar1 = FUN_00416db0(local_20,L".cpp"), iVar1 == 0)) ||
         (iVar1 = FUN_00416db0(local_20,&LAB_010b1960), iVar1 == 0)) {
        local_31 = 1;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return local_31;
}

