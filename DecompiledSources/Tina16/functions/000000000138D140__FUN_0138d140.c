/* Ghidra address: 0138d140 */
/* Ghidra symbol: FUN_0138d140 */


void FUN_0138d140(longlong param_1,char param_2)

{
  undefined8 local_30 [2];
  
  local_30[0] = (**(code **)(**(longlong **)(param_1 + 0xe88) + 0xd8))
                          (*(longlong **)(param_1 + 0xe88));
  if (param_2 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xe88) + 200))
              (*(longlong **)(param_1 + 0xe88),local_30,0);
  }
  else if (param_2 == '\x01') {
    (**(code **)(**(longlong **)(param_1 + 0xe88) + 200))
              (*(longlong **)(param_1 + 0xe88),local_30,2);
  }
  else if (param_2 == '\x06') {
    (**(code **)(**(longlong **)(param_1 + 0xe88) + 200))
              (*(longlong **)(param_1 + 0xe88),local_30,1);
  }
  (**(code **)(**(longlong **)(param_1 + 0xe88) + 0xd0))
            (*(longlong **)(param_1 + 0xe88),local_30[0]);
  FUN_00b90440(*(undefined8 *)(param_1 + 0xd98),local_30[0]);
  return;
}

