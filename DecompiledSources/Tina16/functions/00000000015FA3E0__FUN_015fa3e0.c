/* Ghidra address: 015fa3e0 */
/* Ghidra symbol: FUN_015fa3e0 */


void FUN_015fa3e0(uint param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  FUN_0040d200(param_2,0x20,0);
  uVar2 = (ulonglong)param_1;
  uVar3 = 0;
  do {
    uVar3 = uVar3 + 1;
    uVar1 = uVar2 % 2;
    uVar2 = uVar2 / 2;
    *(char *)(param_2 + -1 + (ulonglong)uVar3) = (char)uVar1;
  } while ((int)uVar2 != 0);
  return;
}

