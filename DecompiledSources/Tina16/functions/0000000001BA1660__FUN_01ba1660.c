/* Ghidra address: 01ba1660 */
/* Ghidra symbol: FUN_01ba1660 */


void FUN_01ba1660(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = 0;
    do {
      *(undefined4 *)(param_1 + 0x28 + (longlong)iVar1 * 0x20 + (longlong)iVar2 * 4) = 6;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 8);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  iVar1 = 0;
  do {
    iVar2 = 0;
    do {
      if (iVar1 == 0) {
        if ((iVar2 == 0) || (iVar2 == 7)) {
          *(undefined4 *)(param_1 + 0x28 + (longlong)iVar2 * 4) = 0x301;
        }
        if ((iVar2 == 1) || (iVar2 == 6)) {
          *(undefined4 *)(param_1 + 0x28 + (longlong)iVar2 * 4) = 0x101;
        }
        if ((iVar2 == 2) || (iVar2 == 5)) {
          *(undefined4 *)(param_1 + 0x28 + (longlong)iVar2 * 4) = 0x201;
        }
        if (iVar2 == 3) {
          *(undefined4 *)(param_1 + 0x34) = 0x401;
        }
        if (iVar2 == 4) {
          *(undefined4 *)(param_1 + 0x38) = 0x501;
        }
      }
      if (iVar1 == 1) {
        *(undefined4 *)(param_1 + 0x48 + (longlong)iVar2 * 4) = 1;
      }
      if (iVar1 == 6) {
        *(undefined4 *)(param_1 + 0xe8 + (longlong)iVar2 * 4) = 0;
      }
      if (iVar1 == 7) {
        if ((iVar2 == 0) || (iVar2 == 7)) {
          *(undefined4 *)(param_1 + 0x108 + (longlong)iVar2 * 4) = 0x300;
        }
        if ((iVar2 == 1) || (iVar2 == 6)) {
          *(undefined4 *)(param_1 + 0x108 + (longlong)iVar2 * 4) = 0x100;
        }
        if ((iVar2 == 2) || (iVar2 == 5)) {
          *(undefined4 *)(param_1 + 0x108 + (longlong)iVar2 * 4) = 0x200;
        }
        if (iVar2 == 3) {
          *(undefined4 *)(param_1 + 0x114) = 0x400;
        }
        if (iVar2 == 4) {
          *(undefined4 *)(param_1 + 0x118) = 0x500;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 8);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  return;
}

