/* Ghidra address: 015c8210 */
/* Ghidra symbol: FUN_015c8210 */


void FUN_015c8210(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_015d9f40(*(undefined8 *)(param_1 + 0x18),param_2);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x250);
  }
  return;
}

