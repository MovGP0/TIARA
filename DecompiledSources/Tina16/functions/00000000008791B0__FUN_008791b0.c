/* Ghidra address: 008791b0 */
/* Ghidra symbol: FUN_008791b0 */


bool FUN_008791b0(longlong param_1,undefined8 param_2,wchar_t *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = (int)param_2;
  iVar1 = 0;
  if (iVar3 < 1) {
    iVar3 = (int)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    param_3 = L"Invalid ACharPos";
    param_1 = FUN_0086dfd0(&PTR_FUN_0086d2e8);
    iVar1 = FUN_004134c0();
  }
  iVar5 = 0;
  if (param_1 != 0) {
    iVar5 = *(int *)(param_1 + -4);
  }
  iVar2 = iVar1;
  if (iVar3 <= iVar5) {
    iVar5 = 0;
    if (param_3 != (wchar_t *)0x0) {
      iVar5 = *(int *)(param_3 + -2);
    }
    iVar4 = 1;
    if (0 < iVar5) {
      do {
        iVar2 = iVar4;
        if (param_3[(longlong)iVar4 + -1] == *(wchar_t *)(param_1 + -2 + (longlong)iVar3 * 2))
        break;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
        iVar2 = iVar1;
      } while (iVar5 != 0);
    }
  }
  return 0 < iVar2;
}

