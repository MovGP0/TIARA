/* Ghidra address: 0156d390 */
/* Ghidra symbol: FUN_0156d390 */


undefined8 FUN_0156d390(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x9b8) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x9b8),iVar2);
      if (*(char *)(lVar1 + 0x38) != '\0') {
        local_40 = FUN_01565d40(lVar1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_38,4);
  return local_40;
}

