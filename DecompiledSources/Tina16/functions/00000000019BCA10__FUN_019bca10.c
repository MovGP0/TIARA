/* Ghidra address: 019bca10 */
/* Ghidra symbol: FUN_019bca10 */


longlong * FUN_019bca10(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int local_34;
  int local_30;
  int local_2c;
  
  FUN_00419430(param_2,&DAT_019bb718);
  local_2c = 0;
  local_34 = 0;
  lVar2 = param_3;
  iVar5 = param_4;
  if (param_4 - 1U < 0x80000000) {
    do {
      local_30 = local_34 + 1;
      if (local_30 <= param_4) {
        iVar6 = (param_4 - local_30) + 1;
        lVar3 = param_3 + (longlong)local_30 * 0x10;
        do {
          cVar1 = FUN_019bc9e0(param_1,lVar2,lVar3);
          if (cVar1 != '\0') {
            FUN_00419260(param_2,&DAT_019bb718,1,(longlong)(local_2c + 1));
            lVar4 = (longlong)local_2c;
            FUN_00419260(*param_2 + lVar4 * 8,&DAT_019bb6d8,1,2);
            **(int **)(*param_2 + lVar4 * 8) = local_34;
            *(int *)(*(longlong *)(*param_2 + lVar4 * 8) + 4) = local_30;
            local_2c = local_2c + 1;
          }
          local_30 = local_30 + 1;
          lVar3 = lVar3 + 0x10;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_34 = local_34 + 1;
      iVar5 = iVar5 + -1;
      lVar2 = lVar2 + 0x10;
    } while (iVar5 != 0);
  }
  return param_2;
}

