/* Ghidra address: 007e38f0 */
/* Ghidra symbol: FUN_007e38f0 */


void FUN_007e38f0(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0061c2b8);
  if (cVar1 != '\0') {
    if ((param_3 == '\0') || (*(char *)(param_1 + 0x150) == '\0')) {
      *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0xca);
    }
    if ((param_3 == '\0') || (*(longlong *)(param_1 + 0x78) == 0)) {
      FUN_007e2c60(param_1,*(undefined8 *)(param_2 + 0xd0));
    }
    if ((param_3 == '\0') || (*(char *)(param_1 + 0x80) == '\0')) {
      FUN_007e2d20(param_1,*(undefined1 *)(param_2 + 0xd8));
    }
    if ((param_3 == '\0') || (*(char *)(param_1 + 0x81) == '\x01')) {
      FUN_007e2da0(param_1,*(undefined1 *)(param_2 + 0xd9));
    }
    if ((param_3 == '\0') || (*(int *)(param_1 + 0xac) == 0)) {
      *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xe0);
    }
    if ((param_3 == '\0') || (*(longlong *)(param_1 + 0xb0) == 0)) {
      FUN_00414ad0(param_1 + 0xb0,*(undefined8 *)(param_2 + 0xf8));
    }
    if ((*(char *)(param_1 + 0x85) != '\0') &&
       ((param_3 == '\0' || (*(char *)(param_1 + 0x87) == '\0')))) {
      FUN_007e2e50(param_1,*(undefined1 *)(param_2 + 0xdc));
    }
    if ((param_3 == '\0') || (*(int *)(param_1 + 0x88) == -1)) {
      FUN_007e2fb0(param_1,*(undefined4 *)(param_2 + 0x110));
    }
    if ((param_3 == '\0') || (*(short *)(param_1 + 0xc0) == 0)) {
      FUN_007e2f50(param_1,*(undefined2 *)(param_2 + 0x102));
    }
    if ((param_3 == '\0') || (*(char *)(param_1 + 0x86) == '\x01')) {
      FUN_007e2f80(param_1,*(undefined1 *)(param_2 + 0x100));
    }
    if ((param_3 == '\0') || (*(longlong *)(param_1 + 0x110) == 0)) {
      *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x98);
      *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0xa0);
    }
  }
  return;
}

