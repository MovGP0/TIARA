/* Ghidra address: 00a52f40 */
/* Ghidra symbol: FUN_00a52f40 */


void FUN_00a52f40(longlong param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar3 = (ulonglong)param_3;
  if (*(char *)(param_1 + 0x6c0 + uVar3) == '\0') {
    FUN_00461840(param_1 + 0x78 + uVar3 * 0x18,param_2);
    *(undefined1 *)(param_1 + 0x6c0 + uVar3) = 1;
    if (*(char *)(param_1 + 0x20) != '\0') {
      if (param_3 == 0) {
        bVar2 = 0;
        do {
          FUN_00467e90(*(longlong *)(param_1 + 0x748) + 8 + (ulonglong)bVar2 * 0x40,param_2);
          bVar2 = bVar2 + 1;
        } while (bVar2 != 4);
      }
      else if (param_3 == 1) {
        bVar2 = 0;
        do {
          uVar4 = FUN_00464c60(param_2);
          *(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x10 + (ulonglong)bVar2 * 0x40) = uVar4;
          bVar2 = bVar2 + 1;
        } while (bVar2 != 4);
      }
      else if (param_3 == 7) {
        bVar2 = 0;
        do {
          uVar1 = FUN_00462650(param_2);
          *(undefined4 *)(*(longlong *)(param_1 + 0x748) + 0x1c + (ulonglong)bVar2 * 0x40) = uVar1;
          bVar2 = bVar2 + 1;
        } while (bVar2 != 4);
      }
    }
  }
  return;
}

