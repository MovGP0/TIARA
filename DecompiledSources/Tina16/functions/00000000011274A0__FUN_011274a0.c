/* Ghidra address: 011274a0 */
/* Ghidra symbol: FUN_011274a0 */


void FUN_011274a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  bool bVar3;
  
  if ((*(byte *)(param_1 + 0x6a8) & 1) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0xb4d) == '\0') {
    uVar2 = *(int *)(param_1 + 0xb48) - 8;
    if (uVar2 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << ((byte)uVar2 & 0x1f) & 3U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      uVar1 = 0;
      goto LAB_011274e8;
    }
  }
  uVar1 = 1;
LAB_011274e8:
  *param_5 = uVar1;
  return;
}

