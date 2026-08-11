/* Ghidra address: 016a5690 */
/* Ghidra symbol: FUN_016a5690 */


void FUN_016a5690(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_016a94d0(*(undefined8 *)(param_1 + 0x30),0);
  }
  FUN_016a4e50(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

