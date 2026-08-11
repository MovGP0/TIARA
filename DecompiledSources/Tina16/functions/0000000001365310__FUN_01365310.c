/* Ghidra address: 01365310 */
/* Ghidra symbol: FUN_01365310 */


void FUN_01365310(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_01365360(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
  FUN_01364f70(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

