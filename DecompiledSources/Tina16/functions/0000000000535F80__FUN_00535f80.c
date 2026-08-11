/* Ghidra address: 00535f80 */
/* Ghidra symbol: FUN_00535f80 */


void FUN_00535f80(longlong param_1,uint param_2)

{
  char cVar1;
  
  FUN_00411a80(param_1,param_2);
  cVar1 = FUN_00534e60(*(undefined8 *)(param_1 + 0x18));
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x28) == '\0')) {
    FUN_004185d0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),1);
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

