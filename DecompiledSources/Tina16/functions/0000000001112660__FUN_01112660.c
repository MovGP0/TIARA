/* Ghidra address: 01112660 */
/* Ghidra symbol: FUN_01112660 */


void FUN_01112660(longlong *param_1,short *param_2)

{
  short sVar1;
  byte bVar2;
  code *pcVar3;
  
  sVar1 = *param_2;
  if (sVar1 == 0x20) {
    bVar2 = *(byte *)(param_1 + 0xc2);
    if (*(char *)((longlong)param_1 + (ulonglong)bVar2 * 0x20 + 0x499) != '\0') {
      *(byte *)((longlong)param_1 + 0x5c2) = bVar2;
      FUN_01112430(param_1,bVar2);
      if ((char)param_1[0xcb] != '\0') {
        pcVar3 = (code *)FUN_00411550(param_1,0xffac);
        (*pcVar3)(param_1,*(undefined1 *)((longlong)param_1 + 0x5c2));
        FUN_01111400(param_1);
      }
    }
  }
  else if (sVar1 == 0x25) {
    bVar2 = *(byte *)(param_1 + 0xc2);
    do {
      if (bVar2 != 0) {
        bVar2 = bVar2 - 1;
      }
    } while ((bVar2 != 0) && ((char)param_1[(ulonglong)bVar2 * 4 + 0x93] == '\0'));
    if (bVar2 != *(byte *)(param_1 + 0xc2)) {
      *(byte *)(param_1 + 0xc2) = bVar2;
      (**(code **)(*param_1 + 0x180))(param_1);
    }
  }
  else if (sVar1 == 0x27) {
    bVar2 = *(byte *)(param_1 + 0xc2);
    do {
      if (bVar2 < 8) {
        bVar2 = bVar2 + 1;
      }
    } while ((bVar2 != 8) && ((char)param_1[(ulonglong)bVar2 * 4 + 0x93] == '\0'));
    if (bVar2 != *(byte *)(param_1 + 0xc2)) {
      *(byte *)(param_1 + 0xc2) = bVar2;
      (**(code **)(*param_1 + 0x180))(param_1);
    }
  }
  return;
}

