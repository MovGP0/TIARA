/* Ghidra address: 004b91b0 */
/* Ghidra symbol: FUN_004b91b0 */


void FUN_004b91b0(undefined8 param_1,int param_2)

{
  int iVar1;
  int local_20;
  int local_1c;
  
  if (param_2 < 0) {
    local_1c = FUN_004b6da0(param_1);
    iVar1 = -param_2;
    local_1c = local_1c + param_2;
    FUN_004b6dc0(param_1,(longlong)iVar1);
    FUN_004b84c0(param_1,&local_20,4);
    local_1c = (local_1c - local_20) + 4;
    FUN_004b6dc0(param_1,(longlong)(iVar1 + -4));
    FUN_004b89e0(param_1,&local_1c,4);
    FUN_004b6dc0(param_1,(longlong)(iVar1 + local_1c + local_20 + -4));
  }
  else {
    local_1c = FUN_004b6da0(param_1);
    local_1c = local_1c - param_2;
    FUN_004b6dc0(param_1,(longlong)(param_2 + -4));
    FUN_004b89e0(param_1,&local_1c,4);
    FUN_004b6dc0(param_1,(longlong)(param_2 + local_1c));
  }
  return;
}

