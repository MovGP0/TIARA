/* Ghidra address: 01a98550 */
/* Ghidra symbol: FUN_01a98550 */


void FUN_01a98550(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)((longlong)param_1 + 0x12d) == '\0') {
    FUN_01a9a440(param_1,0x12);
    uVar1 = (**(code **)(*param_1 + 0xd0))(param_1,0);
    (**(code **)(*param_1 + 200))(param_1,uVar1);
    iVar2 = thunk_FUN_041de4d6(param_1[0x28]);
    if (iVar2 != 0) {
      thunk_FUN_03a2fc9d(param_1[0x28],0,0xffffffff);
    }
  }
  *(undefined4 *)(param_1 + 0x26) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x27) = 0x80000001;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x80000001;
  return;
}

