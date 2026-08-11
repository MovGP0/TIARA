/* Ghidra address: 013c0a90 */
/* Ghidra symbol: FUN_013c0a90 */


void FUN_013c0a90(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_159;
  int local_14c;
  undefined1 local_148 [256];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  iVar4 = *(int *)PTR_DAT_02002a28;
  if (iVar4 == 0) {
    local_159 = 2;
  }
  else if (iVar4 == 1) {
    local_159 = 0;
  }
  else if (iVar4 == 2) {
    local_159 = 2;
  }
  else if (iVar4 == 3) {
    local_159 = 3;
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  local_14c = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),local_14c);
      if (*(char *)(lVar3 + 0x18) == '\0') {
        FUN_00414b50(&local_40,*(undefined8 *)(lVar3 + 8));
      }
      else {
        FUN_00414b50(&local_40,*(undefined8 *)(lVar3 + 0x10));
      }
      FUN_013c0a30(&local_48,local_40);
      uVar1 = *(undefined8 *)(lVar3 + 0x20);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      FUN_00416910(local_148,local_48,0xff);
      FUN_013b35d0(param_2,local_148,uVar1,uVar2,0,local_159);
      local_14c = local_14c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_48,4);
  return;
}

