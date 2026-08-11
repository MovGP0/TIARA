/* Ghidra address: 013712e0 */
/* Ghidra symbol: FUN_013712e0 */


undefined8 FUN_013712e0(longlong param_1,undefined8 param_2,char param_3)

{
  if ((param_3 == '\x01') && (*(char *)(param_1 + 0x333) != '\0')) {
    param_2 = FUN_00c44470(param_2,0xc059000000000000);
  }
  else if ((param_3 == '\0') && (*(char *)(param_1 + 0x333) == '\0')) {
    param_2 = FUN_00c43d30(param_2);
  }
  return param_2;
}

