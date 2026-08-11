/* Ghidra address: 01a431f0 */
/* Ghidra symbol: FUN_01a431f0 */


undefined8 FUN_01a431f0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_004170c0(L"Local",*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x38),1);
  if (iVar2 < 1) {
LAB_01a43239:
    uVar3 = 0;
  }
  else {
    if (*(int *)(*(longlong *)(param_1 + 0x2968) + 0xa0) != 0) {
      cVar1 = FUN_01a43130(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x2968) + 8));
      if (cVar1 == '\0') goto LAB_01a43239;
    }
    uVar3 = 1;
  }
  return uVar3;
}

