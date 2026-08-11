/* Ghidra address: 0080c3f0 */
/* Ghidra symbol: FUN_0080c3f0 */


void FUN_0080c3f0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x79) != param_2) {
    *(char *)(param_1 + 0x79) = param_2;
    iVar2 = FUN_00808090();
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar1 = FUN_00808070(DAT_02012670,iVar3);
        FUN_0064fca0(uVar1,0xb03d,0,0);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

