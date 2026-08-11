/* Ghidra address: 01495cb0 */
/* Ghidra symbol: FUN_01495cb0 */


void FUN_01495cb0(longlong param_1,int param_2)

{
  undefined8 local_30 [2];
  
  if ((0 < param_2) && (*(int *)(*(longlong *)(param_1 + 0x8b8) + 0x4cc) != param_2)) {
    local_30[0] = FUN_00bb7750(1,param_2);
    (**(code **)(**(longlong **)(param_1 + 0x8b8) + 0x2b0))
              (*(longlong **)(param_1 + 0x8b8),local_30);
  }
  FUN_00bf3780(*(undefined8 *)(param_1 + 0x8b8),param_2);
  FUN_00c0dc30(*(undefined8 *)(param_1 + 0x8b8),param_2);
  return;
}

