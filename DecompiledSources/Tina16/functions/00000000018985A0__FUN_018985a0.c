/* Ghidra address: 018985a0 */
/* Ghidra symbol: FUN_018985a0 */


undefined4
FUN_018985a0(longlong param_1,undefined8 param_2,undefined2 param_3,undefined4 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006e4eb0(param_1,param_2,param_3,param_4,param_5);
  if (((char)param_4 == '\x01') && (*(char *)(param_1 + 0x72c) != '\0')) {
    FUN_01898700(param_1);
  }
  return uVar1;
}

