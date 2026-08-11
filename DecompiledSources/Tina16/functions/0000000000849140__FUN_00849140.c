/* Ghidra address: 00849140 */
/* Ghidra symbol: FUN_00849140 */


void FUN_00849140(longlong param_1,longlong param_2)

{
  ushort uVar1;
  bool bVar2;
  
  if ((*(uint *)(param_1 + 0x4d4) & 0x400) == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = *(ushort *)(param_2 + 8);
    if (uVar1 < 0x100) {
      bVar2 = ((byte)(&DAT_008491a0)[(longlong)(ulonglong)uVar1 >> 3] >> ((ulonglong)uVar1 & 7) & 1)
              != 0;
    }
    else {
      bVar2 = false;
    }
    if ((bVar2) || (0x1f < *(ushort *)(param_2 + 8))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  if (bVar2) {
    FUN_0083f7d0(param_1,*(undefined2 *)(param_2 + 8));
  }
  else {
    FUN_00659b10();
  }
  return;
}

