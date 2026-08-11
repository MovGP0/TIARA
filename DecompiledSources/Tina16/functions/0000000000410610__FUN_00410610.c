/* Ghidra address: 00410610 */
/* Ghidra symbol: FUN_00410610 */


void FUN_00410610(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0x400;
  uVar3 = 0xfffffffffffff800;
  if ((*(int *)(param_1 + 0x3c) < -0x3fe) && (0x3c9 < *(int *)(param_1 + 0x3c))) {
    bVar1 = 2 - (char)*(undefined4 *)(param_1 + 0x3c);
    uVar2 = 0x400L << (bVar1 & 0x3f);
    uVar3 = -0x800L << (bVar1 & 0x3f);
  }
  if ((uVar2 & *(ulonglong *)(param_1 + 0x30)) == 0) {
    *(ulonglong *)(param_1 + 0x30) = *(ulonglong *)(param_1 + 0x30) & uVar3;
  }
  else {
    if (((*(ulonglong *)(param_1 + 0x30) & ~uVar3) != uVar2) ||
       ((uVar2 * 2 & *(ulonglong *)(param_1 + 0x30)) != 0)) {
      *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + uVar2;
    }
    *(ulonglong *)(param_1 + 0x30) = *(ulonglong *)(param_1 + 0x30) & uVar3;
    if (*(longlong *)(param_1 + 0x30) == 0) {
      *(undefined8 *)(param_1 + 0x30) = 0x8000000000000000;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    }
  }
  return;
}

