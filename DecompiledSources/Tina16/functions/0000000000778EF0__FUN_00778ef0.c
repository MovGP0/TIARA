/* Ghidra address: 00778ef0 */
/* Ghidra symbol: FUN_00778ef0 */


void FUN_00778ef0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined4 uStack_2c;
  
  local_34 = *param_3;
  uStack_2c = *(undefined4 *)(param_3 + 1);
  local_44 = *param_5;
  uStack_3c = param_5[1];
  uVar1 = FUN_0060f580(param_6);
  uVar1 = FUN_0060f570(uVar1);
  FUN_00778f70(param_1,param_2,&local_34,param_4,&local_44,uVar1,param_8,0);
  return;
}

