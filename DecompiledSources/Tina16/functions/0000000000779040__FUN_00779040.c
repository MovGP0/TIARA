/* Ghidra address: 00779040 */
/* Ghidra symbol: FUN_00779040 */


void FUN_00779040(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 *param_7,undefined4 param_8)

{
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined4 uStack_2c;
  
  local_34 = *param_3;
  uStack_2c = *(undefined4 *)(param_3 + 1);
  local_54 = *param_7;
  uStack_4c = param_7[1];
  uStack_44 = param_7[2];
  uStack_3c = param_7[3];
  (**(code **)(*param_1 + 0x28))
            (param_1,param_2,&local_34,param_4,param_5,param_6,&local_54,param_8);
  return;
}

