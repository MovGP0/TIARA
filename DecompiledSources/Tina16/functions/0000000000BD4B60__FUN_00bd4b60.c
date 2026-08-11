/* Ghidra address: 00bd4b60 */
/* Ghidra symbol: FUN_00bd4b60 */


void FUN_00bd4b60(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_5;
  uStack_30 = param_5[1];
  local_3c = param_2;
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  FUN_00bd4950(auStack_88,uVar1);
  FUN_00bd4a20(auStack_88);
  local_68 = &local_38;
  local_60 = param_6;
  local_58 = param_7;
  local_50 = param_1[8];
  FUN_00bd3920(param_1[1],local_3c,param_3,param_4);
  return;
}

