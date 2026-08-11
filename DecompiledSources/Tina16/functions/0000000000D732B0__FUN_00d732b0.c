/* Ghidra address: 00d732b0 */
/* Ghidra symbol: FUN_00d732b0 */


void FUN_00d732b0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0xb8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xb8),iVar3);
      lVar2 = FUN_00d77580(uVar1,0xd);
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + 0xf5) = 0;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

