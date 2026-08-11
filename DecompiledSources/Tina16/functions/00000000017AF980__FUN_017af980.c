/* Ghidra address: 017af980 */
/* Ghidra symbol: FUN_017af980 */


void FUN_017af980(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = FUN_00498310(param_2,param_3);
  local_20 = FUN_017ae4e0(param_1,&local_30);
  local_30 = FUN_00498310(param_4,param_5);
  local_28 = FUN_017ae4e0(param_1,&local_30);
  if ((int)local_28 < (int)local_20) {
    FUN_017ad610(&local_20,&local_28);
  }
  if (local_28._4_4_ < local_20._4_4_) {
    FUN_017ad610((longlong)&local_20 + 4,(longlong)&local_28 + 4);
  }
  FUN_00498350(local_40,DAT_01fa23a8 * (*(int *)(param_1 + 0x14) + (int)local_20),
               DAT_01fa23ac * (*(int *)(param_1 + 0x18) + local_20._4_4_),
               DAT_01fa23a8 * (*(int *)(param_1 + 0x14) + (int)local_28) + 1,
               DAT_01fa23ac * (*(int *)(param_1 + 0x18) + local_28._4_4_) + 1);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x110))(*(longlong **)(param_1 + 8),local_40,param_6);
  return;
}

