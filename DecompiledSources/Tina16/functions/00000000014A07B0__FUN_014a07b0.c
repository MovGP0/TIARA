/* Ghidra address: 014a07b0 */
/* Ghidra symbol: FUN_014a07b0 */


void FUN_014a07b0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(char *)(*(longlong *)(param_1 + 0x740) + 0x5e0) != '\0') {
    FUN_00c0dad0(*(longlong *)(param_1 + 0x740),0);
    uVar1 = *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2768);
    cVar2 = FUN_004113d0(uVar1,&PTR_FUN_01763148);
    if (cVar2 == '\0') {
      FUN_014a0130(uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x740) + 0x4e8));
    }
    else {
      FUN_014a0090(uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x740) + 0x4e8));
    }
    FUN_014a1f90(0,0,0,0);
  }
  return;
}

