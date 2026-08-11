/* Ghidra address: 006f2ed0 */
/* Ghidra symbol: FUN_006f2ed0 */


void FUN_006f2ed0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_29;
  
  if (*(char *)(param_1 + 0x510) == '\0') {
    iVar1 = FUN_006efc30();
    iVar4 = 0;
    if (-1 < iVar1 + -1) {
      do {
        if (*(longlong *)(param_1 + 0x520) == 0) {
          uVar2 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),iVar4);
          lVar3 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),iVar4);
          FUN_006eee80(uVar2,*(undefined1 *)(lVar3 + 0x3a));
        }
        else {
          FUN_004b84c0(*(longlong *)(param_1 + 0x520),&local_29,1);
          uVar2 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),iVar4);
          FUN_006eee80(uVar2,local_29);
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x520));
  *(undefined8 *)(param_1 + 0x520) = 0;
  return;
}

