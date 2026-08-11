/* Ghidra address: 006f8d80 */
/* Ghidra symbol: FUN_006f8d80 */


void FUN_006f8d80(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x510) == '\0') {
    iVar1 = FUN_006efc30(*(undefined8 *)(param_1 + 0x4e0));
    FUN_00419260(param_1 + 0x790,&DAT_006c6d08,1,(longlong)iVar1);
    iVar1 = FUN_006efc30();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar2 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),iVar3);
        *(undefined4 *)(*(longlong *)(param_1 + 0x790) + (longlong)iVar3 * 4) =
             *(undefined4 *)(lVar2 + 0x1c);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

