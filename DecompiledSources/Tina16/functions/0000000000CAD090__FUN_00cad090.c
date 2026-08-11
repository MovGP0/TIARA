/* Ghidra address: 00cad090 */
/* Ghidra symbol: FUN_00cad090 */


undefined8 FUN_00cad090(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 local_res20;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  local_res20 = param_4;
  FUN_0041b910(param_4);
  if (param_3 < 1) {
    FUN_00414480(param_2);
  }
  else {
    (**(code **)(*param_1 + 0x188))(param_1,local_20,param_3,0);
    FUN_00875240(local_30,local_res20,param_1[0x2a],3);
    FUN_0041b840(&local_res20,local_30[0]);
    FUN_008785a0(param_2,local_20[0],0,param_3,local_res20);
  }
  FUN_0041b800(local_30);
  FUN_00419430(local_20,&DAT_0086e978);
  FUN_0041b800(&local_res20);
  return param_2;
}

