/* Ghidra address: 00f76700 */
/* Ghidra symbol: FUN_00f76700 */


undefined1 FUN_00f76700(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  FUN_00f773c0(param_1);
  local_39 = 1;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar3);
      cVar1 = FUN_00f6f3c0(lVar2);
      if (cVar1 == '\0') {
        cVar1 = FUN_00f6f8f0(lVar2);
        if (cVar1 == '\0') {
          FUN_00f766d0(param_1,6,*(undefined4 *)(lVar2 + 0x3c));
        }
        else {
          FUN_00f766d0(param_1,7,*(undefined4 *)(lVar2 + 0x3c));
        }
        local_39 = 0;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_38,2);
  return local_39;
}

