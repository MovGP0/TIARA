/* Ghidra address: 01c25e40 */
/* Ghidra symbol: FUN_01c25e40 */


void FUN_01c25e40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0065aa90(param_1,param_2,param_3,param_4,param_5);
  (**(code **)(**(longlong **)(param_1 + 0x4d0) + 0x88))(*(longlong **)(param_1 + 0x4d0),param_4);
  (**(code **)(**(longlong **)(param_1 + 0x4d0) + 0x70))(*(longlong **)(param_1 + 0x4d0),param_5);
  FUN_01c258d0(param_1);
  return;
}

