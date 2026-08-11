/* Ghidra address: 01447630 */
/* Ghidra symbol: FUN_01447630 */


void FUN_01447630(short param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined1 *)(param_2 + 0xb4) = 0;
  if (((*PTR_DAT_020052b8 == '\0') && (*(char *)(param_2 + 0xe32) == '\0')) &&
     (*(int *)(param_2 + 0xe70) == 0)) {
    FUN_00ef4260(0x13,param_2);
  }
  if (param_1 != 0) {
    FUN_00efccb0(param_2);
  }
  else {
    FUN_00efdce0(param_2);
  }
  DAT_0210e4e8 = param_1 == 0;
  uVar1 = FUN_019b97c0(0,param_2);
  *(undefined4 *)(param_2 + 0xb38) = uVar1;
  iVar2 = FUN_019b9990(0,param_2);
  *(int *)(param_2 + 0xb38) = *(int *)(param_2 + 0xb38) * iVar2;
  FUN_01446c90(param_2);
  FUN_00ef81f0(param_2 + 0x30);
  FUN_00ef81f0(param_2 + 0x38);
  FUN_00efa3b0(param_2 + 0x18);
  FUN_00efa3b0(param_2 + 0x20);
  if (*(char *)(param_2 + 0x92) != '\0') {
    FUN_00ef4280(param_2);
  }
  return;
}

