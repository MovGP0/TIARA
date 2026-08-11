/* Ghidra address: 00c32f40 */
/* Ghidra symbol: FUN_00c32f40 */


void FUN_00c32f40(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00c24600(param_1[0xb]);
  if (param_2 != iVar1) {
    FUN_00c35490(param_1);
    FUN_00c24620(param_1[0xb],param_2);
    FUN_00c34390(param_1);
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

