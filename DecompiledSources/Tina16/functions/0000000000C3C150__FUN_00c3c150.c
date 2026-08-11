/* Ghidra address: 00c3c150 */
/* Ghidra symbol: FUN_00c3c150 */


void FUN_00c3c150(longlong param_1,int *param_2)

{
  uint uVar1;
  undefined8 in_RAX;
  int *piVar2;
  ulonglong uVar3;
  byte bVar4;
  bool bVar5;
  
  if (*(byte *)(param_1 + 0x78) < 8) {
    uVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_1 + 0x78) & 0x1f);
    piVar2 = (int *)(ulonglong)CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0x39) != 0);
  }
  else {
    piVar2 = (int *)0x0;
  }
  if ((char)piVar2 == '\0') {
    param_2[1] = 0x103;
    if (*param_2 == 100) {
      piVar2 = param_2 + 2;
      *piVar2 = *piVar2 + -4;
    }
    if (*param_2 == 0x6a) {
      param_2[2] = param_2[2] + -4;
      piVar2 = (int *)FUN_00409a70(param_2 + 8,param_2 + 7,(longlong)(param_2[5] + param_2[6]));
    }
  }
  if (*(byte *)(param_1 + 0x78) < 8) {
    uVar1 = (int)CONCAT71((int7)((ulonglong)piVar2 >> 8),1) << (*(byte *)(param_1 + 0x78) & 0x1f);
    bVar5 = (uVar1 & 0x21) != 0;
    uVar3 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),bVar5);
  }
  else {
    uVar3 = 0;
    bVar5 = false;
  }
  if ((!bVar5) && (*param_2 == 100)) {
    bVar4 = *(char *)((longlong)param_2 + 0x1e) - 8;
    if (bVar4 < 8) {
      bVar5 = ((int)CONCAT71((int7)(uVar3 >> 8),1) << (bVar4 & 0x1f) & 3U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      *(undefined1 *)((longlong)param_2 + 0x1e) = 0;
    }
  }
  FUN_01d311c0(param_1,param_2,param_2[2] + 0xc);
  return;
}

