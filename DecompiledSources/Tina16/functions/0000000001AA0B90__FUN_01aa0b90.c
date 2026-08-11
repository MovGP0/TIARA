/* Ghidra address: 01aa0b90 */
/* Ghidra symbol: FUN_01aa0b90 */


void FUN_01aa0b90(uint param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_0040d200(param_2,0x20,0);
  uVar3 = (ulonglong)param_1;
  iVar4 = 0;
  do {
    iVar4 = iVar4 + 1;
    iVar2 = (int)uVar3;
    uVar1 = (longlong)iVar2 / 2;
    uVar3 = uVar1 & 0xffffffff;
    *(char *)(param_2 + -1 + (longlong)iVar4) = (char)(iVar2 % 2);
  } while ((int)uVar1 != 0);
  return;
}

