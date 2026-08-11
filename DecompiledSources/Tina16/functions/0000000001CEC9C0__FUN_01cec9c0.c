/* Ghidra address: 01cec9c0 */
/* Ghidra symbol: FUN_01cec9c0 */


void FUN_01cec9c0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,longlong *param_7,char param_8)

{
  if (param_2 != *(int *)(param_1 + 0x18) || param_8 != '\0') {
    (**(code **)(*param_7 + 0x278))(param_7);
    FUN_01cec6e0(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}

