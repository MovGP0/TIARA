/* Ghidra address: 00d24920 */
/* Ghidra symbol: FUN_00d24920 */


void FUN_00d24920(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  puVar1 = *(undefined1 **)(*(longlong *)(param_1 + 0x40) + 0x68);
  uVar3 = 1;
  iVar2 = 0;
  puVar4 = puVar1;
  do {
    *puVar4 = (char)uVar3;
    puVar1[(longlong)(int)(uVar3 & 0xff) + 0x100] = (char)iVar2;
    uVar3 = (int)(uVar3 * 0x2d) % 0x101;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x100);
  return;
}

