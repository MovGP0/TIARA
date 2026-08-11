/* Ghidra address: 011230f0 */
/* Ghidra symbol: FUN_011230f0 */


void FUN_011230f0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 1;
  do {
    if (iVar2 == 8) {
      FUN_00410f20(*(undefined8 *)(param_1 + 0xde0));
      FUN_00410f20(*(undefined8 *)(param_1 + 0x9f8));
    }
    else if (iVar2 == 9) {
      FUN_00410f20(*(undefined8 *)(param_1 + 0xa21));
      if (*(longlong *)(param_1 + 0xa19) != 0) {
        FUN_004095f0(*(undefined8 *)(param_1 + 0xa19));
        *(undefined8 *)(param_1 + 0xa19) = 0;
        *(undefined1 *)(param_1 + 0xa29) = 0;
      }
    }
    else {
      if (iVar2 - 8U < 8) {
        uVar1 = (int)CONCAT71((int7)(param_2 >> 8),1) << ((byte)(iVar2 - 8U) & 0x1f);
        param_2 = (ulonglong)uVar1;
        bVar3 = (uVar1 & 0xc) != 0;
      }
      else {
        bVar3 = false;
      }
      if (!bVar3) {
        FUN_004095f0(*(undefined8 *)(param_1 + 0x8e8 + (longlong)iVar2 * 0x21));
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xf);
  return;
}

