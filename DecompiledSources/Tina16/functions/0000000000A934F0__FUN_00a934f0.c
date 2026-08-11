/* Ghidra address: 00a934f0 */
/* Ghidra symbol: FUN_00a934f0 */


longlong FUN_00a934f0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x4c) == '\x02') {
    for (lVar2 = *(longlong *)(param_1 + 0x20); lVar1 = 0, lVar2 != 0;
        lVar2 = *(longlong *)(lVar2 + 0x20)) {
      if (*(byte *)(lVar2 + 0x4c) < 8) {
        uVar3 = (int)CONCAT71((int7)(param_2 >> 8),1) << (*(byte *)(lVar2 + 0x4c) & 0x1f);
        param_2 = (ulonglong)uVar3;
        bVar4 = (uVar3 & 0xe) != 0;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        return lVar2;
      }
    }
  }
  else if (*(char *)(param_1 + 0x4c) == '\x03') {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  return lVar1;
}

