/* Ghidra address: 00de0bb0 */
/* Ghidra symbol: FUN_00de0bb0 */


void FUN_00de0bb0(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  char local_9;
  
  local_30 = auStack_58;
  local_9 = *(longlong *)(param_1 + 0x4a8) != 0;
  puVar1 = auStack_58;
  if (!(bool)local_9) {
    FUN_00dde110(param_1);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_20 = thunk_FUN_0416a623(*(undefined8 *)(param_1 + 0x4a8));
  uVar2 = thunk_FUN_0420b4c4(*(undefined8 *)(param_1 + 0x4a8));
  (**(code **)(*param_2 + 0x20))(param_2,local_20,uVar2);
  thunk_FUN_04172795(*(undefined8 *)(param_1 + 0x4a8));
  if (local_9 == '\0') {
    FUN_00dde660(param_1);
  }
  return;
}

