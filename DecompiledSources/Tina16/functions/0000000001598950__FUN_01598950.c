/* Ghidra address: 01598950 */
/* Ghidra symbol: FUN_01598950 */


int FUN_01598950(longlong param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int local_38;
  int local_30;
  char *local_18;
  
  iVar4 = param_2 + (param_2 + 7 >> 3) + 5 + (param_2 + 0x3f >> 6);
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    iVar4 = iVar4 + 6;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x28);
    iVar2 = *(int *)(lVar3 + 0x24);
    if (iVar2 == 0) {
      local_38 = 0;
    }
    else if (iVar2 == 1) {
      if (*(int *)(lVar3 + 0x85) == 0) {
        local_30 = 0;
      }
      else {
        local_30 = 4;
      }
      local_38 = local_30 + 6;
    }
    else if (iVar2 == 2) {
      local_38 = 0x12;
      if (*(longlong *)(lVar3 + 0x28) != 0) {
        if (*(longlong *)(*(longlong *)(lVar3 + 0x28) + 0x10) != 0) {
          local_38 = *(int *)(*(longlong *)(lVar3 + 0x28) + 0x18) + 0x14;
        }
        local_18 = *(char **)(*(longlong *)(lVar3 + 0x28) + 0x20);
        if (local_18 != (char *)0x0) {
          do {
            local_38 = local_38 + 1;
            cVar1 = *local_18;
            local_18 = local_18 + 1;
          } while (cVar1 != '\0');
        }
        local_18 = *(char **)(*(longlong *)(lVar3 + 0x28) + 0x2c);
        if (local_18 != (char *)0x0) {
          do {
            local_38 = local_38 + 1;
            cVar1 = *local_18;
            local_18 = local_18 + 1;
          } while (cVar1 != '\0');
        }
        if (*(int *)(*(longlong *)(lVar3 + 0x28) + 0x38) != 0) {
          local_38 = local_38 + 2;
        }
      }
    }
    else {
      local_38 = 6;
    }
    if ((*(int *)(lVar3 + 0x3d) == 0xf) && (*(int *)(lVar3 + 0x69) == 0xf)) {
      iVar4 = (param_2 >> 0x19) + 7 + local_38 + param_2 + (param_2 >> 0xc) + (param_2 >> 0xe);
    }
    else {
      iVar4 = iVar4 + local_38;
    }
  }
  return iVar4;
}

