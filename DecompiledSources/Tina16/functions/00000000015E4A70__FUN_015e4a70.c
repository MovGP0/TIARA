/* Ghidra address: 015e4a70 */
/* Ghidra symbol: FUN_015e4a70 */


void FUN_015e4a70(longlong *param_1,undefined8 param_2,char param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  int iVar1;
  int extraout_var;
  
  if (param_3 == '\x01') {
    iVar1 = (**(code **)(*param_1 + 0xd8))(param_1);
    (**(code **)(*param_1 + 0xd8))(param_1);
    (**(code **)(*(longlong *)param_1[0xd7] + 0xa8))
              ((longlong *)param_1[0xd7],iVar1 + param_5,extraout_var + param_6);
  }
  return;
}

