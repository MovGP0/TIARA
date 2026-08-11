/* Ghidra address: 00b4fd90 */
/* Ghidra symbol: FUN_00b4fd90 */


void FUN_00b4fd90(longlong *param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = FUN_00b4fc70(param_1,param_2);
  (**(code **)(*param_1 + 8))(param_1,uVar1,local_20);
  lVar2 = FUN_00b4fc70(param_1,param_2);
  *(undefined2 *)(lVar2 + 0x48) = param_3;
  lVar2 = FUN_00b4fc70(param_1,param_2);
  *(undefined2 *)(lVar2 + 0x4a) = param_4;
  FUN_00b1adb0(param_1[3],param_2,local_20);
  FUN_004144d0(local_20);
  return;
}

