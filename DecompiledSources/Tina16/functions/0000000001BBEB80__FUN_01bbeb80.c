/* Ghidra address: 01bbeb80 */
/* Ghidra symbol: FUN_01bbeb80 */


undefined1 FUN_01bbeb80(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0;
  local_21 = 1;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      if (*(int *)(lVar2 + 0x18) == 1) {
        FUN_0043e130(&local_20,*(undefined8 *)(lVar2 + 8));
        iVar1 = FUN_01bbdba0(param_1,local_20,1);
        if (*(char *)(param_2 + 0x68 + (longlong)iVar1) == '\0') {
          local_21 = 0;
          break;
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(&local_20);
  return local_21;
}

