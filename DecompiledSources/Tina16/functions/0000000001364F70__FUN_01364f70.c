/* Ghidra address: 01364f70 */
/* Ghidra symbol: FUN_01364f70 */


void FUN_01364f70(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0x38))(param_1,(short)param_1[1]);
  (**(code **)(*param_1 + 0x68))(param_1,0x3f4e);
  (**(code **)(*param_1 + 0x68))(param_1,0x3f4f);
  if (param_1[2] != 0) {
    FUN_01c6cee0(param_1[2],0);
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

