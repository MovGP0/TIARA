/* Ghidra address: 01102fd0 */
/* Ghidra symbol: FUN_01102fd0 */


void FUN_01102fd0(longlong *param_1,longlong param_2,longlong param_3,char param_4,char param_5)

{
  longlong lVar1;
  
  if (param_5 != '\0') {
    (**(code **)(*param_1 + 0x70))(param_1,param_1[0x33]);
  }
  param_1[0x28] = param_2;
  param_1[0x29] = param_3;
  lVar1 = param_1[0x31];
  if (lVar1 != 0) {
    *(longlong *)(lVar1 + 0x140) = param_2;
    *(longlong *)(lVar1 + 0x148) = param_3;
  }
  if (param_4 != '\0') {
    (**(code **)(*param_1 + 0xc0))(param_1,param_1[0x33],param_1[0x32]);
  }
  if (param_5 != '\0') {
    (**(code **)(*param_1 + 0x70))(param_1,param_1[0x33]);
  }
  return;
}

