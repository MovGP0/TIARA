/* Ghidra address: 004d6310 */
/* Ghidra symbol: FUN_004d6310 */


void FUN_004d6310(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar1 = DAT_02011668;
  uVar5 = DAT_02011668;
  while (DAT_02011668 = uVar5, uVar3 = uVar1, uVar2 = uVar4, uVar3 != 0) {
    uVar1 = *(ulonglong *)(uVar3 + 5);
    uVar4 = uVar3;
    uVar5 = DAT_02011668;
    if (((param_1 <= uVar3) && (uVar3 <= param_2)) && (uVar4 = uVar2, uVar5 = uVar1, uVar2 != 0)) {
      *(ulonglong *)(uVar2 + 5) = uVar1;
      uVar5 = DAT_02011668;
    }
  }
  return;
}

