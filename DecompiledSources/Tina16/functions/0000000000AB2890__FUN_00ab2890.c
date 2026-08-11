/* Ghidra address: 00ab2890 */
/* Ghidra symbol: FUN_00ab2890 */


undefined8 FUN_00ab2890(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_30;
  int local_2c;
  
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x168) + 0x10);
  local_2c = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar2 = FUN_00ac4a60(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x168),local_2c);
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x14c);
      iVar7 = *(int *)(lVar2 + 0x10);
      local_30 = 0;
      if (-1 < iVar7 + -1) {
        do {
          uVar3 = FUN_004aeac0(lVar2,local_30);
          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_00a8c408);
          if ((((cVar1 != '\0') && (lVar4 = FUN_004aeac0(lVar2,local_30), iVar5 <= param_2)) &&
              (param_2 < iVar5 + *(int *)(lVar4 + 0x28))) &&
             ((*(int *)(*(longlong *)(lVar4 + 0x80) + 0x58) <= param_3 &&
              (param_3 < *(int *)(*(longlong *)(lVar4 + 0x80) + 0x58) + *(int *)(lVar4 + 0x2c))))) {
            uVar3 = FUN_00ac3920(*(undefined8 *)(lVar4 + 0x80),param_2,param_3,
                                 *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                                 *(undefined8 *)(param_1 + 0x78));
            return uVar3;
          }
          iVar5 = iVar5 + *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x158) +
                                  (longlong)local_30 * 4);
          local_30 = local_30 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      local_2c = local_2c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

