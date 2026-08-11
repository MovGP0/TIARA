/* Ghidra address: 00788e40 */
/* Ghidra symbol: FUN_00788e40 */


void FUN_00788e40(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x28) == '\0') && (*(char *)(param_1 + 0x29) == '\0')) {
    FUN_00788cc0(param_1,0xff00000f);
  }
  else {
    uVar1 = FUN_00781840();
    uVar2 = FUN_00779380(uVar1,0x1d);
    FUN_00788cc0(param_1,uVar2);
  }
  if (*(char *)(param_1 + 0x2b) == '\0') {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  else {
    uVar1 = FUN_00781840();
    uVar2 = FUN_007793c0(uVar1,0xff000008);
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  return;
}

