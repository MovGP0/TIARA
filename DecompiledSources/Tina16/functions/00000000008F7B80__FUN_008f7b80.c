/* Ghidra address: 008f7b80 */
/* Ghidra symbol: FUN_008f7b80 */


int FUN_008f7b80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_3c = -1;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
  iVar5 = 0;
  iVar2 = local_3c;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),local_30,iVar5)
      ;
      iVar2 = FUN_00416420(local_30[0],param_2);
      if (iVar2 == 0) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))
                          (*(longlong **)(param_1 + 8),iVar5);
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
                  (*(longlong **)(param_1 + 0x10),&local_38,uVar3);
        iVar4 = FUN_00416420(local_38,param_3);
        iVar2 = iVar5;
        if (iVar4 == 0) break;
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
      iVar2 = local_3c;
    } while (iVar1 != 0);
  }
  local_3c = iVar2;
  FUN_004145c0(&local_38,2);
  return local_3c;
}

