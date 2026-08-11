/* Ghidra address: 01056220 */
/* Ghidra symbol: FUN_01056220 */


bool FUN_01056220(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_40[0] = 0;
  local_30 = 0;
  iVar4 = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_40,iVar3);
      FUN_0043e1a0(&local_30,local_40[0]);
      iVar2 = FUN_004170c0(L"(error",local_30,1);
      if ((((0 < iVar2) || (iVar2 = FUN_004170c0(L"error:",local_30,1), 0 < iVar2)) ||
          (iVar2 = FUN_004170c0(L" error ",local_30,1), 0 < iVar2)) ||
         (iVar2 = FUN_004170c0(L"error makefile",local_30,1), 0 < iVar2)) {
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_40);
  FUN_00414480(&local_30);
  return 0 < iVar4;
}

