/* Ghidra address: 0174bb40 */
/* Ghidra symbol: FUN_0174bb40 */


void FUN_0174bb40(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00414ad0(param_1 + 0x38,*(undefined8 *)(param_1 + 0x40));
  FUN_00414ad0(param_1 + 0x40,*param_2);
  iVar1 = FUN_004170c0(L"xx%%yy$$zz",*(undefined8 *)(param_1 + 0x40),1);
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x40) + -4);
  }
  if (iVar1 < 1) {
    FUN_00414ad0(param_1 + 0x48,*(undefined8 *)(param_1 + 0x40));
    FUN_00414480(param_1 + 0x50);
  }
  else {
    FUN_00416dc0(param_1 + 0x48,*(undefined8 *)(param_1 + 0x40),1,iVar1 + -1);
    FUN_00416dc0(param_1 + 0x50,*(undefined8 *)(param_1 + 0x40),iVar1 + 10,
                 (iVar2 - (iVar1 + 10)) + 1);
  }
  return;
}

