/* Ghidra address: 01447520 */
/* Ghidra symbol: FUN_01447520 */


void FUN_01447520(short param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0xb4) = 0;
  if ((*PTR_DAT_020052b8 == '\0') && (*(char *)(param_2 + 0xe32) == '\0')) {
    if ((*(char *)(param_2 + 0xe40) == '\0') && (*(char *)(param_2 + 0xb1) == '\0')) {
      FUN_00ef4260(5,param_2);
    }
    if ((*(int *)(param_2 + 0xe70) == 0) && (*(char *)(param_2 + 0xb1) == '\0')) {
      FUN_00ef4260(0x13,param_2);
    }
  }
  if (param_1 == 0) {
    FUN_00efdce0(param_2);
  }
  else {
    FUN_00efccb0(param_2);
  }
  *(undefined1 *)(param_2 + 0xb4) = 0;
  *(undefined4 *)(param_2 + 0xb38) = 1;
  FUN_00efdf60(0x4059000000000000,param_2);
  if ((*(longlong *)(param_2 + 0x18) == 0) || (*(longlong *)(param_2 + 0x20) == 0)) {
    FUN_019b7d00(param_2 + 0xb8,param_2);
  }
  else {
    FUN_019b9110(param_2);
  }
  FUN_00ef81f0(param_2 + 0x30);
  FUN_00ef81f0(param_2 + 0x38);
  FUN_00efa3b0(param_2 + 0x18);
  FUN_00efa3b0(param_2 + 0x20);
  if (*(char *)(param_2 + 0x92) != '\0') {
    FUN_00ef4280(param_2);
  }
  return;
}

