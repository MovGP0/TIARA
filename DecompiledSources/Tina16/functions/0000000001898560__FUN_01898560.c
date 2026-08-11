/* Ghidra address: 01898560 */
/* Ghidra symbol: FUN_01898560 */


undefined4 FUN_01898560(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006e4e30(param_1,param_2,param_3);
  if (((char)param_3 == '\x01') && (*(char *)(param_1 + 0x72c) != '\0')) {
    FUN_01898700(param_1);
  }
  return uVar1;
}

