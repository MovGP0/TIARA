/* Ghidra address: 01115a60 */
/* Ghidra symbol: FUN_01115a60 */


void FUN_01115a60(longlong param_1,char param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  char local_39;
  undefined8 local_38;
  longlong local_30;
  
  local_30 = 0;
  local_38 = 0;
  if ((((param_2 == '\a') || (param_2 == '\b')) || (param_2 == '\t')) ||
     ((param_2 == '\f' || (param_2 == '\n')))) {
    lVar5 = *(longlong *)(param_1 + 0x550);
    iVar4 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x4e8);
    iVar4 = 2;
  }
  iVar1 = *(int *)(lVar5 + 0x10);
  FUN_00414b50(&local_30,&DAT_01115c18);
  iVar6 = iVar1 + -1;
  if (iVar4 <= iVar6) {
    iVar6 = (iVar6 - iVar4) + 1;
    do {
      local_39 = '\0';
      cVar2 = FUN_013b4b50(lVar5,iVar4);
      if (cVar2 == param_2) {
        FUN_013b4b30(lVar5,iVar4,&local_38);
        FUN_00416ad0(&local_30,local_38);
        if (iVar4 < iVar1 + -1) {
          FUN_00416ad0(&local_30,&LAB_01115c2c);
        }
        iVar3 = 0;
        if (local_30 != 0) {
          iVar3 = *(int *)(local_30 + -4);
        }
        if (0x12a < iVar3 * 10) {
          (**(code **)(**(longlong **)(param_1 + 0x890) + 0x78))
                    (*(longlong **)(param_1 + 0x890),local_30);
          FUN_00414b50(&local_30,&DAT_01115c18);
          local_39 = '\x01';
        }
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (local_39 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x890) + 0x78))(*(longlong **)(param_1 + 0x890),local_30)
    ;
  }
  FUN_00414560(&local_38,2);
  return;
}

