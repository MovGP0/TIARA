/* Ghidra address: 00659160 */
/* Ghidra symbol: FUN_00659160 */


void FUN_00659160(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  local_30 = *param_4;
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_03e49910(uVar1,param_3);
  FUN_00423b10(param_3,10,10);
  if (*(longlong *)(param_1 + 0x3d8) != 0) {
    (**(code **)(param_1 + 0x3d8))
              (*(undefined8 *)(param_1 + 0x3e0),param_1,param_2,param_3,&local_30,param_5);
  }
  return;
}

