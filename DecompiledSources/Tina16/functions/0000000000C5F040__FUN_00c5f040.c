/* Ghidra address: 00c5f040 */
/* Ghidra symbol: FUN_00c5f040 */


void FUN_00c5f040(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0x38))(param_1,(short)param_1[1]);
  if ((char)param_1[3] != '\0') {
    (**(code **)(*param_1 + 0x68))(param_1);
  }
  if (param_1[2] != 0) {
    FUN_01794b80(param_1[2],0);
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

