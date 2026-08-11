/* Ghidra address: 00af2730 */
/* Ghidra symbol: FUN_00af2730 */


void FUN_00af2730(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x758) + 0x49c) -
          *(int *)(*(longlong *)(param_1 + 0x740) + 0x9c);
  if (*param_4 < iVar1) {
    iVar1 = *param_4;
  }
  *param_4 = iVar1;
  FUN_00aa66b0(*(undefined8 *)(param_1 + 0x8b0),*param_4);
  if ((*(ushort *)(param_1 + 0x8a0) & 1) == 0) {
    uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x740));
    thunk_FUN_0418ab71(uVar2,0,*(int *)(*(longlong *)(param_1 + 0x758) + 0x494) - *param_4,0,0);
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x198))(*(longlong **)(param_1 + 0x740));
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x180))(*(longlong **)(param_1 + 0x740));
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x180))(*(longlong **)(param_1 + 0x740));
  }
  return;
}

