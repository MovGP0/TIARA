/* Ghidra address: 01d81a90 */
/* Ghidra symbol: FUN_01d81a90 */


undefined8 FUN_01d81a90(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xafc) == '\0') {
    *param_2 = 0;
  }
  else {
    *param_2 = 1;
  }
  if (*(char *)(param_1 + 0xafd) != '\0') {
    *param_2 = 2;
  }
  cVar1 = FUN_010e2b90();
  if (cVar1 != '\0') {
    *param_2 = 3;
  }
  FUN_00f835c0(10);
  return 0;
}

