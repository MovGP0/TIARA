/* Ghidra address: 01571450 */
/* Ghidra symbol: FUN_01571450 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01571450(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  wchar_t *pwVar3;
  bool bVar4;
  
  pwVar3 = L"SW_1";
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x10),L"SW_1");
  if (iVar2 == 0) {
    _DAT_0210ee70 = 1;
  }
  if (param_2 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)pwVar3 >> 8),1) << ((byte)param_2 & 0x1f) & 0xeU) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    piVar1 = (int *)(param_1 + 0x6c + (longlong)(int)param_2 * 4);
    *piVar1 = *piVar1 + 1;
  }
  return;
}

