/* Ghidra address: 008f7c90 */
/* Ghidra symbol: FUN_008f7c90 */


int FUN_008f7c90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_2c = -1;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8));
  iVar1 = iVar1 + -1;
  iVar2 = local_2c;
  if (-1 < iVar1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                (*(longlong **)(param_1 + 8),&local_20,iVar1);
      iVar2 = FUN_00416420(local_20,param_2);
      if (iVar2 == 0) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))
                          (*(longlong **)(param_1 + 8),iVar1);
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
                  (*(longlong **)(param_1 + 0x10),&local_28,uVar3);
        iVar4 = FUN_00416420(local_28,param_3);
        iVar2 = iVar1;
        if (iVar4 == 0) break;
      }
      iVar1 = iVar1 + -1;
      iVar2 = local_2c;
    } while (iVar1 != -1);
  }
  local_2c = iVar2;
  FUN_004145c0(&local_28,2);
  return local_2c;
}

