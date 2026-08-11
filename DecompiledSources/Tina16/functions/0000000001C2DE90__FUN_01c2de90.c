/* Ghidra address: 01c2de90 */
/* Ghidra symbol: FUN_01c2de90 */


void FUN_01c2de90(longlong param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  iVar4 = 0;
  do {
    bVar1 = *(byte *)(param_1 + 0x418 + (longlong)iVar4);
    if (uVar6 < bVar1) {
      uVar6 = (uint)bVar1;
      param_3 = iVar4;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x400);
  iVar4 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar5 * 8);
      uVar2 = *(ushort *)(lVar3 + 0x4a);
      if (((int)(uint)uVar2 < param_3) || ((int)(param_3 + uVar6) < (int)(uint)uVar2)) {
        *(undefined1 *)(lVar3 + 0x4e) = 0;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

