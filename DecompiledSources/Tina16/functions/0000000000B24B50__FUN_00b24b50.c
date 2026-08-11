/* Ghidra address: 00b24b50 */
/* Ghidra symbol: FUN_00b24b50 */


void FUN_00b24b50(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 *puVar5;
  
  puVar5 = (undefined2 *)FUN_00415ab0(param_1);
  *(undefined2 *)*param_2 = *puVar5;
  *(undefined2 *)(*param_2 + 2) = *(undefined2 *)(param_1 + 2);
  uVar1 = *(ushort *)(param_1 + 4);
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(*param_2 + 0x16) = 0;
  }
  else {
    *(undefined1 *)(*param_2 + 0x16) = 1;
  }
  if ((uVar1 & 4) == 0) {
    *(undefined1 *)(*param_2 + 0x15) = 0;
  }
  else {
    *(undefined1 *)(*param_2 + 0x15) = 1;
  }
  uVar1 = *(ushort *)(param_1 + 6);
  *(byte *)(*param_2 + 4) = (byte)uVar1 & 7;
  if ((uVar1 & 8) == 0) {
    *(undefined1 *)(*param_2 + 7) = 0;
  }
  else {
    *(undefined1 *)(*param_2 + 7) = 1;
  }
  *(char *)(*param_2 + 5) = (char)((uVar1 & 0x70) >> 4);
  *(char *)(*param_2 + 6) = (char)(uVar1 >> 8);
  *(undefined1 *)(*param_2 + 0xb) = 0;
  *(byte *)(*param_2 + 0xc) = (byte)*(undefined2 *)(param_1 + 8) & 0xf;
  uVar1 = *(ushort *)(param_1 + 10);
  *(byte *)(*param_2 + 0x11) = (byte)uVar1 & 0xf;
  *(char *)(*param_2 + 0x12) = (char)((uVar1 & 0xf0) >> 4);
  bVar3 = (byte)(uVar1 >> 8);
  *(byte *)(*param_2 + 0x13) = bVar3 & 0xf;
  *(byte *)(*param_2 + 0x14) = bVar3 >> 4;
  uVar1 = *(ushort *)(param_1 + 0xc);
  uVar4 = FUN_00b1ba50(uVar1 & 0x7f);
  *(undefined1 *)(*param_2 + 0xd) = uVar4;
  uVar4 = FUN_00b1ba50((uVar1 & 0x3f80) >> 7);
  *(undefined1 *)(*param_2 + 0xe) = uVar4;
  uVar2 = *(uint *)(param_1 + 0xe);
  uVar4 = FUN_00b1ba50(uVar2 & 0xffff007f);
  *(undefined1 *)(*param_2 + 0xf) = uVar4;
  uVar4 = FUN_00b1ba50((uVar2 & 0x3f80) >> 7);
  *(undefined1 *)(*param_2 + 0x10) = uVar4;
  *(byte *)(*param_2 + 8) = (byte)(uVar2 >> 0x1a);
  uVar1 = *(ushort *)(param_1 + 0x12);
  if (*(char *)(*param_2 + 8) == '\x01') {
    uVar4 = FUN_00b1ba50(uVar1 & 0x7f);
    *(undefined1 *)(*param_2 + 10) = uVar4;
    uVar4 = FUN_00b1ba50((uVar1 & 0x3f80) >> 7);
    *(undefined1 *)(*param_2 + 9) = uVar4;
  }
  else {
    uVar4 = FUN_00b1ba50(uVar1 & 0x7f);
    *(undefined1 *)(*param_2 + 9) = uVar4;
    uVar4 = FUN_00b1ba50((uVar1 & 0x3f80) >> 7);
    *(undefined1 *)(*param_2 + 10) = uVar4;
  }
  return;
}

