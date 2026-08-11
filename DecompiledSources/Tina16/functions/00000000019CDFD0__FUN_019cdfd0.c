/* Ghidra address: 019cdfd0 */
/* Ghidra symbol: FUN_019cdfd0 */


void FUN_019cdfd0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar1 = FUN_00f309b0(&LAB_00f23b78,1);
    uVar2 = FUN_00f2f8e0(&LAB_00f22f08,1,*(undefined4 *)(param_1 + 0x4c));
    FUN_00f30e70(uVar1,L"ReportCount",uVar2);
    FUN_00f335b0(*(undefined8 *)(param_1 + 0x50),uVar1);
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return;
}

