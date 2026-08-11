/* Ghidra address: 00879350 */
/* Ghidra symbol: FUN_00879350 */


bool FUN_00879350(longlong param_1,undefined8 param_2,wchar_t *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = (int)param_2;
  if (iVar3 < 0) {
    uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    iVar3 = (int)uVar4;
    param_3 = L"Invalid AIndex";
    param_1 = FUN_0086dfd0(&PTR_FUN_0086d2e8,uVar4,L"Invalid AIndex");
    FUN_004134c0();
  }
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_1 + -8);
  }
  if (iVar3 < lVar2) {
    uVar1 = FUN_00879300(*(undefined1 *)(param_1 + iVar3),param_3,0);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1 < 0x80000000;
}

