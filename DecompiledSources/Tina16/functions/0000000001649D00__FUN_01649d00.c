/* Ghidra address: 01649d00 */
/* Ghidra symbol: FUN_01649d00 */


undefined8 FUN_01649d00(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined *in_stack_ffffffffffffff88;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_00414480(&local_30);
  iVar5 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x5a8) + 0x28))(*(longlong **)(param_1 + 0x5a8));
  if (0 < iVar1) {
    FUN_00414b50(&local_30,&DAT_01649ec8);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x630) + 0x10);
    iVar4 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x630),iVar4);
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x5a8) + 0xb0))
                          (*(longlong **)(param_1 + 0x5a8),*(undefined8 *)(lVar3 + 8));
        if (-1 < iVar2) {
          FUN_00b8fd60(&local_40,*(undefined8 *)(lVar3 + 0x10),4,0,
                       (ulonglong)in_stack_ffffffffffffff88 & 0xffffffffffffff00);
          in_stack_ffffffffffffff88 = &DAT_01649eec;
          FUN_00416cd0(&local_38,5,&DAT_01649edc,*(undefined8 *)(lVar3 + 8),&DAT_01649eec,local_40,
                       &DAT_01649efc);
          FUN_00416ad0(&local_30,local_38);
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x5a8) + 0x28))
                            (*(longlong **)(param_1 + 0x5a8));
          if (iVar5 < iVar2 + -1) {
            FUN_00416ad0(&local_30,&LAB_01649f0c);
          }
          iVar5 = iVar5 + 1;
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00416ad0(&local_30,&DAT_01649efc);
  }
  FUN_00414ad0(param_2,local_30);
  FUN_00414560(&local_40,3);
  return param_2;
}

