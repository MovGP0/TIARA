/* Ghidra address: 0189ac40 */
/* Ghidra symbol: FUN_0189ac40 */


void FUN_0189ac40(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)param_2;
  *(char *)(param_1 + 0x4e1) = cVar1;
  FUN_01898f00(*(undefined8 *)(param_1 + 0x4e8),param_2);
  if (cVar1 == '\0') {
    FUN_0064c650(*(undefined8 *)(param_1 + 0x4b8),1);
  }
  else if (cVar1 == '\x01') {
    FUN_0064c650(*(undefined8 *)(param_1 + 0x4b8),2);
  }
  return;
}

