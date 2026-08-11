/* Ghidra address: 016d2570 */
/* Ghidra symbol: FUN_016d2570 */


void FUN_016d2570(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  do {
    FUN_004b84c0(*(undefined8 *)(param_1 + 0x68),*(longlong *)(param_1 + 0x60) + (longlong)param_2,8
                );
    FUN_00409a70(*(longlong *)(param_1 + 0x60) + (longlong)param_2,param_1 + 0x2c,4);
    FUN_00409a70(*(longlong *)(param_1 + 0x60) + (longlong)(param_2 + 4),param_1 + 0x24,4);
    FUN_004154b0(local_20,param_1 + 0x2b,0);
    iVar1 = FUN_00415a60(local_20[0],param_3);
    if (iVar1 != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x48))
                (*(longlong **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x24),1);
    }
    FUN_004154b0(&local_28,param_1 + 0x2b,0);
    iVar1 = FUN_00415a60(local_28,param_3);
  } while (iVar1 != 0);
  FUN_00414590(&local_28,2);
  return;
}

