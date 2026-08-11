/* Ghidra address: 01113cd0 */
/* Ghidra symbol: FUN_01113cd0 */


void FUN_01113cd0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 local_34 [8];
  undefined8 local_2c;
  
  if (((param_2 == 0) || (*(char *)(param_1 + 0x611) == '\0')) ||
     (*(char *)(param_1 + 0x617) == '\0')) {
    *(longlong *)(param_1 + 0x640) = param_2;
  }
  else {
    *(undefined4 *)(param_1 + 0x618) = 0x10002;
    local_2c = FUN_0065b870(param_2);
    iVar1 = thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x841,
                               (longlong)*(int *)(param_1 + 0x618),local_34);
    *(int *)(param_1 + 0x634) = iVar1;
    if (iVar1 == 0) {
      *(longlong *)(param_1 + 0x640) = param_2;
      FUN_004d26c0(param_2,param_1);
    }
    else {
      *(undefined8 *)(param_1 + 0x640) = 0;
    }
  }
  return;
}

