/* Ghidra address: 00f01b90 */
/* Ghidra symbol: FUN_00f01b90 */


void FUN_00f01b90(longlong param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x533);
  FUN_00f01eb0(param_1);
  if ((((char)param_2 == '\0') && (*(char *)(param_1 + 0x530) == '\x01')) && (cVar1 != '\0')) {
    FUN_00f024c0(*(undefined8 *)(param_1 + 0x508));
  }
  FUN_00650ea0(param_1,param_2,param_3,param_4,param_5);
  return;
}

