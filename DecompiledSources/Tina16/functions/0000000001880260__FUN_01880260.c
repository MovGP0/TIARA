/* Ghidra address: 01880260 */
/* Ghidra symbol: FUN_01880260 */


void FUN_01880260(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_40 = 0;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  (**(code **)(*param_1 + 0x28))(param_1,&local_40);
  (**(code **)(*param_2 + 0x120))
            (param_2,(int)local_38 + (int)param_1[3] + -2,local_38._4_4_,local_40);
  FUN_005fd4e0(param_2[0xf],0x808080);
  FUN_00414480(&local_40);
  return;
}

