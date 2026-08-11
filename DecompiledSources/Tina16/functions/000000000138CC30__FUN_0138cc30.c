/* Ghidra address: 0138cc30 */
/* Ghidra symbol: FUN_0138cc30 */


void FUN_0138cc30(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 0xd40) + 0x328) == '\0') {
    if (*(char *)(param_1 + 0xe4a) == '\0') {
      *(undefined1 *)(param_1 + 0xe4a) = 1;
      FUN_0064de00(*(undefined8 *)(param_1 + 3000),L"Start");
      FUN_0064de00(*(undefined8 *)(param_1 + 0xc08),L"Stop");
      FUN_00b90440(*(undefined8 *)(param_1 + 0xc28),*(undefined8 *)(param_1 + 0xe50));
      FUN_00b90440(*(undefined8 *)(param_1 + 0xc30),*(undefined8 *)(param_1 + 0xe58));
    }
  }
  else if (*(char *)(param_1 + 0xe4a) != '\0') {
    *(undefined1 *)(param_1 + 0xe4a) = 0;
    FUN_0064de00(*(undefined8 *)(param_1 + 3000),L"Center");
    FUN_0064de00(*(undefined8 *)(param_1 + 0xc08),L"Span");
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc28),*(undefined8 *)(param_1 + 0xe60));
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc30),*(undefined8 *)(param_1 + 0xe68));
  }
  return;
}

