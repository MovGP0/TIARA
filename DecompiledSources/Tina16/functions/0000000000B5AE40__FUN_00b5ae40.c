/* Ghidra address: 00b5ae40 */
/* Ghidra symbol: FUN_00b5ae40 */


void FUN_00b5ae40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0xd34) = *(int *)(param_1 + 0xd34) + 1;
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_00b173c0(*(undefined8 *)(param_1 + 8),param_1 + 0x134,*(undefined4 *)(param_1 + 0x130));
  }
  else {
    FUN_00b5af20(param_1);
    iVar1 = 0;
    do {
      lVar2 = (longlong)iVar1;
      if (*(char *)(param_1 + 0x934 + lVar2) == '\x01') {
        *(undefined1 *)(param_1 + 0x534 + lVar2) = *(undefined1 *)(param_1 + 0x134 + lVar2);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x400);
    *(undefined4 *)(param_1 + 0xd38) = 0;
    FUN_00b173c0(*(undefined8 *)(param_1 + 8),param_1 + 0x534,*(undefined4 *)(param_1 + 0x130));
    FUN_0040d200(param_1 + 0x534,(longlong)*(int *)(param_1 + 0x130),0);
    FUN_0040d200(param_1 + 0x934,(longlong)*(int *)(param_1 + 0x130),0);
  }
  FUN_0040d200(param_1 + 0x134,(longlong)*(int *)(param_1 + 0x130),0);
  return;
}

