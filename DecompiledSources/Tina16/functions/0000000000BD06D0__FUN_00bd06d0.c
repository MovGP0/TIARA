/* Ghidra address: 00bd06d0 */
/* Ghidra symbol: FUN_00bd06d0 */


void FUN_00bd06d0(longlong param_1,char param_2)

{
  *(char *)(param_1 + 0x48) = param_2;
  if (param_2 == '\0') {
    FUN_00414ad0(param_1 + 0x18,&DAT_00bd074c);
  }
  else if (param_2 == '\x01') {
    FUN_00414ad0(param_1 + 0x18,&DAT_00bd0760);
  }
  else if (param_2 == '\x02') {
    FUN_00414ad0(param_1 + 0x18,&DAT_00bd0770);
  }
  else if (param_2 == '\x03') {
    FUN_00414ad0(param_1 + 0x18,&LAB_00bd0780);
  }
  return;
}

