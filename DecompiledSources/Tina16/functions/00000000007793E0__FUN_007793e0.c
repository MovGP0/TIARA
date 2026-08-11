/* Ghidra address: 007793e0 */
/* Ghidra symbol: FUN_007793e0 */


void FUN_007793e0(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  undefined8 local_34;
  undefined4 uStack_2c;
  
  local_34 = *param_3;
  uStack_2c = *(undefined4 *)(param_3 + 1);
  (**(code **)(*param_1 + 0x70))(param_1,param_2,&local_34,param_4,param_5,0,param_6,0);
  return;
}

