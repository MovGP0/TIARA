/* Ghidra address: 00606a20 */
/* Ghidra symbol: FUN_00606a20 */


void FUN_00606a20(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_84 [24];
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  
  if (param_2 != 0) {
    iVar1 = thunk_FUN_04079bf6(param_2,0x6c,local_84);
    if (iVar1 == 0) {
      FUN_005ffe90();
    }
  }
  FUN_00606d90(param_1);
  if (*(longlong *)(param_1[9] + 0x10) != 0) {
    thunk_FUN_040d2fd9(*(longlong *)(param_1[9] + 0x10));
  }
  FUN_005fb100(*(undefined8 *)(param_1[9] + 0x20));
  *(undefined8 *)(param_1[9] + 0x20) = 0;
  *(longlong *)(param_1[9] + 0x10) = param_2;
  lVar2 = param_1[9];
  *(undefined4 *)(lVar2 + 0x2c) = 0;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  if (param_2 != 0) {
    *(int *)(lVar2 + 0x18) = local_64 - local_6c;
    *(int *)(lVar2 + 0x1c) = local_60 - local_68;
  }
  lVar2 = (**(code **)(*param_1 + 0x50))(param_1);
  *(bool *)((longlong)param_1 + 0x3a) = lVar2 != 0;
  (**(code **)(*param_1 + 0x20))(param_1,param_1);
  return;
}

