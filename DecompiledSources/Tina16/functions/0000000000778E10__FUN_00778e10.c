/* Ghidra address: 00778e10 */
/* Ghidra symbol: FUN_00778e10 */


void FUN_00778e10(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  undefined8 local_34;
  undefined4 uStack_2c;
  
  local_34 = *param_3;
  uStack_2c = *(undefined4 *)(param_3 + 1);
  (**(code **)(*param_1 + 0x18))(param_1,param_2,&local_34,param_4,param_5,param_6,0);
  return;
}

