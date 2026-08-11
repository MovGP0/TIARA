/* Ghidra address: 008456d0 */
/* Ghidra symbol: FUN_008456d0 */


void FUN_008456d0(longlong param_1,int *param_2,int *param_3,int *param_4,undefined2 param_5,
                 int param_6)

{
  undefined8 uVar1;
  
  FUN_00845660(param_1);
  if (param_6 < *param_2) {
    uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0xd0));
    thunk_FUN_04182059(uVar1,param_5,0,0x7f,0xffffffff);
  }
  else {
    uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0xd0));
    thunk_FUN_04182059(uVar1,param_5,0,0,0xffffffff);
  }
  if (*param_2 < *param_3) {
    FUN_008455a0(param_1);
    *param_4 = *param_2;
  }
  return;
}

