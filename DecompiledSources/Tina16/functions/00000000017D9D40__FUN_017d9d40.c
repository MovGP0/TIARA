/* Ghidra address: 017d9d40 */
/* Ghidra symbol: FUN_017d9d40 */


void FUN_017d9d40(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*PTR_DAT_020052b8 == '\0') {
    uVar1 = FUN_017d7160(*(undefined1 *)(param_1 + 0x18));
    uVar2 = FUN_01b049c0(&PTR_FUN_01af2dc0,1,uVar1,param_3,param_4,*(undefined8 *)(param_1 + 0x10));
    FUN_004134c0(uVar2);
  }
  else if (*PTR_DAT_020028a0 == '\0') {
    uVar2 = FUN_0044d490(&PTR_FUN_01af3280,1,L"short-circuit");
    FUN_004134c0(uVar2);
  }
  else {
    FUN_0044d440();
  }
  return;
}

