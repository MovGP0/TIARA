/* Ghidra address: 00ab2610 */
/* Ghidra symbol: FUN_00ab2610 */


undefined8 FUN_00ab2610(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x168) + 0x10);
  local_30 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_00ac4a60(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x168),local_30);
      local_2c = *(int *)(*(longlong *)(param_1 + 0x30) + 0x14c);
      iVar6 = *(int *)(lVar2 + 0x10);
      local_34 = 0;
      if (-1 < iVar6 + -1) {
        do {
          uVar3 = FUN_004aeac0(lVar2,local_34);
          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_00a8c408);
          if ((((cVar1 != '\0') && (lVar4 = FUN_004aeac0(lVar2,local_34), local_2c <= param_2)) &&
              (param_2 < local_2c + *(int *)(lVar4 + 0x28))) &&
             ((*(int *)(*(longlong *)(lVar4 + 0x80) + 0x58) <= param_3 &&
              (param_3 < *(int *)(*(longlong *)(lVar4 + 0x80) + 0x58) + *(int *)(lVar4 + 0x2c))))) {
            uVar3 = FUN_00414480(*(undefined8 *)(param_1 + 0x60));
            uVar3 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x40))
                              (*(longlong **)(lVar4 + 0x80),*(undefined8 *)(param_1 + 0x38),param_2,
                               param_3,*(undefined8 *)(param_1 + 0x50),
                               *(undefined8 *)(param_1 + 0x58),uVar3);
            return uVar3;
          }
          local_2c = local_2c +
                     *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x158) +
                             (longlong)local_34 * 4);
          local_34 = local_34 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_30 = local_30 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

