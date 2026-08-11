/* Ghidra address: 00c0f2c0 */
/* Ghidra symbol: FUN_00c0f2c0 */


void FUN_00c0f2c0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = FUN_00c09df0(param_1);
  if ((uVar1 & 0x4000000) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x40))
              (*(longlong **)(param_1 + 0x4e8),param_2,param_3);
  }
  else {
    FUN_00bf1640(local_20,param_3);
    (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x40))
              (*(longlong **)(param_1 + 0x4e8),param_2,local_20[0]);
  }
  FUN_00414480(local_20);
  return;
}

