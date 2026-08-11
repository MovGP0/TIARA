/* Ghidra address: 00c0b0d0 */
/* Ghidra symbol: FUN_00c0b0d0 */


void FUN_00c0b0d0(undefined8 param_1,longlong param_2)

{
  if ((*(char *)(param_2 + 0xbf) != '\0') && (0x270 < *(ushort *)(param_2 + 0xe8))) {
    FUN_00bfa470(*(undefined8 *)(param_2 + 0xe0),param_2 + 0xb4);
    FUN_00bfa6c0(*(undefined8 *)(param_2 + 0xe0),param_2 + 0xac);
  }
  if ((*(char *)(param_2 + 0xbf) != '\0') || (*(ushort *)(param_2 + 0xe8) < 0x271)) {
    (**(code **)(**(longlong **)(param_2 + 0xe0) + 0x2b0))
              (*(undefined8 *)(param_2 + 0xe0),param_2 + 0xa4);
  }
  return;
}

