/* Ghidra address: 018a9d90 */
/* Ghidra symbol: FUN_018a9d90 */


undefined8 FUN_018a9d90(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = FUN_004b2060();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_018b0ad0(*(undefined8 *)(param_1 + 0x578),iVar4);
      if (*(longlong *)(lVar2 + 0x30) == param_2) {
        lVar2 = FUN_018b0ad0(*(undefined8 *)(param_1 + 0x578),iVar4);
        lVar3 = FUN_0196f540(param_2);
        if (*(longlong *)(lVar2 + 0x38) == lVar3) {
          return 1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

