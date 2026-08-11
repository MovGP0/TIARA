/* Ghidra address: 006d5ab0 */
/* Ghidra symbol: FUN_006d5ab0 */


void FUN_006d5ab0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_24;
  longlong local_20;
  
  local_30 = auStack_58;
  local_20 = *(longlong *)(param_2 + 0x10);
  local_24 = thunk_FUN_03b57162(*(undefined8 *)(local_20 + 0x20));
  FUN_005fdf10(param_1[0x92]);
  FUN_005ffb10(param_1[0x92],*(undefined8 *)(local_20 + 0x20));
  FUN_005ff880(param_1[0x92],param_1[0x17]);
  FUN_005ff8c0(param_1[0x92],param_1[0x66]);
  (**(code **)(*param_1 + 0x268))
            (param_1,*(undefined4 *)(local_20 + 8),local_20 + 0x28,
             (*(uint *)(local_20 + 0x10) & 1) != 0);
  FUN_005ffb10(param_1[0x92],0);
  FUN_005fe090(param_1[0x92]);
  thunk_FUN_0402759f(*(undefined8 *)(local_20 + 0x20),local_24);
  *(undefined8 *)(param_2 + 0x18) = 1;
  return;
}

