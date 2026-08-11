/* Ghidra address: 006f8e10 */
/* Ghidra symbol: FUN_006f8e10 */


void FUN_006f8e10(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x510) == '\0') {
    lVar4 = 0;
    if (*(longlong *)(param_1 + 0x790) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x790) + -8);
    }
    iVar1 = FUN_006efc30(*(undefined8 *)(param_1 + 0x4e0));
    if (lVar4 == iVar1) {
      iVar1 = FUN_006efc30();
      iVar3 = 0;
      if (-1 < iVar1 + -1) {
        do {
          uVar2 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),iVar3);
          FUN_006ef510(uVar2,*(undefined4 *)(*(longlong *)(param_1 + 0x790) + (longlong)iVar3 * 4));
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    FUN_00419430(param_1 + 0x790,&DAT_006c6d08);
  }
  return;
}

