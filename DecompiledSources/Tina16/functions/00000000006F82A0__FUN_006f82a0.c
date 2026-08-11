/* Ghidra address: 006f82a0 */
/* Ghidra symbol: FUN_006f82a0 */


void FUN_006f82a0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined2 local_26;
  undefined4 local_24;
  longlong local_20;
  
  local_30 = auStack_58;
  if (param_1[0x93] != 0) {
    local_20 = *(longlong *)(param_2 + 0x10);
    local_26 = *(undefined2 *)(local_20 + 0x10);
    local_24 = thunk_FUN_03b57162(*(undefined8 *)(local_20 + 0x20));
    FUN_005fdf10(param_1[0x93]);
    FUN_005ffb10(param_1[0x93],*(undefined8 *)(local_20 + 0x20));
    FUN_005ff880(param_1[0x93],param_1[0x17]);
    FUN_005ff8c0(param_1[0x93],param_1[0x66]);
    if (*(int *)(local_20 + 8) == -1) {
      (**(code **)(*(longlong *)param_1[0x93] + 0xa8))((longlong *)param_1[0x93],local_20 + 0x28);
    }
    else {
      uVar1 = FUN_006efcb0(param_1[0x9c],*(int *)(local_20 + 8));
      (**(code **)(*param_1 + 0x2f8))(param_1,uVar1,local_20 + 0x28,local_26);
    }
    FUN_005ffb10(param_1[0x93],0);
    FUN_005fe090(param_1[0x93]);
    thunk_FUN_0402759f(*(undefined8 *)(local_20 + 0x20),local_24);
    *(undefined8 *)(param_2 + 0x18) = 1;
  }
  return;
}

