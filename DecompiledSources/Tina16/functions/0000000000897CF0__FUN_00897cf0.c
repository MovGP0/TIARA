/* Ghidra address: 00897cf0 */
/* Ghidra symbol: FUN_00897cf0 */


void FUN_00897cf0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  DAT_02012a38 = DAT_02012a38 + -1;
  if (DAT_02012a38 == -1) {
    DAT_01e23558 = 0;
    *(undefined ***)PTR_PTR_02002d68 = &PTR_FUN_00892dd8;
    iVar1 = FUN_00879980();
    if (iVar1 == 2) {
      uVar2 = FUN_00427be0(L"Kernel32.dll");
      DAT_01e23560 = FUN_00427c10(uVar2,L"GetFileSizeEx");
      *(code **)PTR_PTR_02003ab8 = FUN_00897ac0;
    }
    FUN_00894950();
  }
  return;
}

