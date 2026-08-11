/* Ghidra address: 0185e6a0 */
/* Ghidra symbol: FUN_0185e6a0 */


void FUN_0185e6a0(longlong param_1,int param_2,undefined2 *param_3)

{
  undefined2 local_c;
  undefined1 local_9;
  
  if (param_2 == 1) {
    local_9 = *(undefined1 *)param_3;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),&local_9,1);
  }
  else if (param_2 == 2) {
    local_c = *param_3;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),&local_c,2);
  }
  else {
    FUN_01860ba0(8);
  }
  return;
}

