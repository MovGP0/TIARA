/* Ghidra address: 00d27aa0 */
/* Ghidra symbol: FUN_00d27aa0 */


void FUN_00d27aa0(longlong param_1)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  uVar1 = 1;
  puVar5 = (undefined1 *)(param_1 + 0x1c1);
  do {
    uVar3 = (ushort)*(byte *)(param_1 + 0x1c0 + (longlong)(int)(uVar1 - 1)) * 2;
    if ((uVar3 & 0x100) != 0) {
      uVar3 = uVar3 ^ 0x1f5;
    }
    *puVar5 = (char)uVar3;
    uVar1 = uVar1 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar1 != 0x100);
  sVar2 = 1;
  pbVar4 = (byte *)(param_1 + 0x1c1);
  do {
    *(char *)(param_1 + 0xc0 + (ulonglong)*pbVar4) = (char)sVar2;
    sVar2 = sVar2 + 1;
    pbVar4 = pbVar4 + 1;
  } while (sVar2 != 0xff);
  return;
}

