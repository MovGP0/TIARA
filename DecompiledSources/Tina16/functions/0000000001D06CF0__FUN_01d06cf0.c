/* Ghidra address: 01d06cf0 */
/* Ghidra symbol: FUN_01d06cf0 */


void FUN_01d06cf0(undefined8 param_1,char param_2,longlong param_3)

{
  if (param_2 == '\x04') {
    FUN_004095f0(param_3);
  }
  else if (param_2 == '\x05') {
    FUN_01cfd490(param_1,*(undefined8 *)(param_3 + 0x28));
    FUN_004095f0(param_3);
  }
  return;
}

