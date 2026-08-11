/* Ghidra address: 00698660 */
/* Ghidra symbol: FUN_00698660 */


void FUN_00698660(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x10) == -0x4e0) {
    *(undefined1 *)((longlong)param_1 + 0x43) = 1;
    FUN_00786040(param_1,1);
    uVar1 = FUN_00786090(param_1);
    thunk_FUN_041543e0(uVar1,0,0,0x101);
    FUN_00786040(param_1,0);
    FUN_00785c20(param_1,param_2);
    FUN_00786040(param_1,1);
    *(undefined1 *)((longlong)param_1 + 0x43) = 0;
    (**(code **)(*param_1 + 0x58))(param_1);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}

