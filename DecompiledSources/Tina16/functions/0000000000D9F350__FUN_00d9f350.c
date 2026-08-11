/* Ghidra address: 00d9f350 */
/* Ghidra symbol: FUN_00d9f350 */


void FUN_00d9f350(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 undefined8 *param_9)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_54 [12];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_48 = *param_9;
  uStack_40 = param_9[1];
  uStack_38 = param_9[2];
  uStack_30 = param_9[3];
  uVar1 = (**(code **)(param_1 + 0x58))(param_1);
  FUN_00787870(local_54,uVar1,param_4,param_5);
  uVar2 = FUN_007810f0();
  FUN_00779040(uVar2,param_3,local_54,param_6,param_7,param_8,&local_48,0);
  return;
}

