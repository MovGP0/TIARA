/* Ghidra address: 00607140 */
/* Ghidra symbol: FUN_00607140 */


void FUN_00607140(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_94 [24];
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  
  lVar2 = thunk_FUN_0413b85d(0xe);
  if (lVar2 == 0) {
    FUN_005ffe20(PTR_PTR_02004180);
  }
  FUN_00606460(param_1);
  lVar1 = param_1[9];
  uVar3 = thunk_FUN_04130c1a(lVar2,0);
  *(undefined8 *)(lVar1 + 0x10) = uVar3;
  thunk_FUN_04079bf6(*(undefined8 *)(lVar1 + 0x10),0x6c,local_94);
  *(int *)(lVar1 + 0x18) = local_74 - local_7c;
  *(int *)(lVar1 + 0x1c) = local_70 - local_78;
  *(undefined2 *)(lVar1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  lVar2 = (**(code **)(*param_1 + 0x50))(param_1);
  *(bool *)((longlong)param_1 + 0x3a) = lVar2 != 0;
  (**(code **)(*param_1 + 0x20))(param_1,param_1);
  return;
}

