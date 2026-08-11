/* Ghidra address: 0159c330 */
/* Ghidra symbol: FUN_0159c330 */


uint FUN_0159c330(longlong param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint local_res10;
  char *local_58;
  char *local_50;
  char local_48;
  char local_47;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_34;
  
  local_40 = *(uint *)(param_1 + 0x95);
  local_58 = (char *)((ulonglong)*(uint *)(param_1 + 0x85) + *(longlong *)(param_1 + 0x45));
  local_44 = *(uint *)(param_1 + 0x91);
  local_3c = *(uint *)(param_1 + 0xa9);
  if (*(int *)(param_1 + 0x39) - 0x106U < *(uint *)(param_1 + 0x85)) {
    local_34 = *(int *)(param_1 + 0x85) - (*(int *)(param_1 + 0x39) + -0x106);
  }
  else {
    local_34 = 0;
  }
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x45) + 0x102 + (ulonglong)*(uint *)(param_1 + 0x85));
  local_47 = local_58[(int)(local_44 - 1)];
  local_48 = local_58[(int)local_44];
  if (*(uint *)(param_1 + 0xa5) <= *(uint *)(param_1 + 0x91)) {
    local_40 = local_40 >> 2;
  }
  local_res10 = param_2;
  if (*(uint *)(param_1 + 0x8d) < local_3c) {
    local_3c = *(uint *)(param_1 + 0x8d);
  }
  do {
    local_50 = (char *)((ulonglong)local_res10 + *(longlong *)(param_1 + 0x45));
    if ((((local_50[(int)local_44] == local_48) && (local_50[(int)(local_44 - 1)] == local_47)) &&
        (*local_50 == *local_58)) && (local_50[1] == local_58[1])) {
      local_58 = local_58 + 2;
      local_50 = local_50 + 2;
      while (((((pcVar3 = local_58 + 1, local_58[1] == local_50[1] &&
                (pcVar3 = local_58 + 2, local_58[2] == local_50[2])) &&
               ((pcVar3 = local_58 + 3, local_58[3] == local_50[3] &&
                ((pcVar3 = local_58 + 4, local_58[4] == local_50[4] &&
                 (pcVar3 = local_58 + 5, local_58[5] == local_50[5])))))) &&
              (pcVar3 = local_58 + 6, local_58[6] == local_50[6])) &&
             (pcVar3 = local_58 + 7, local_58[7] == local_50[7]))) {
        local_58 = local_58 + 8;
        local_50 = local_50 + 8;
        pcVar3 = local_58;
        if ((*local_58 != *local_50) || (pcVar1 <= local_58)) break;
      }
      local_58 = pcVar3;
      iVar2 = -((int)pcVar1 - (int)local_58);
      uVar4 = iVar2 + 0x102;
      local_58 = pcVar1 + -0x102;
      if ((int)local_44 < (int)uVar4) {
        *(uint *)(param_1 + 0x89) = local_res10;
        local_44 = uVar4;
        if ((int)local_3c <= (int)uVar4) {
LAB_0159c741:
          if (*(uint *)(param_1 + 0x8d) < local_44) {
            local_44 = *(uint *)(param_1 + 0x8d);
          }
          return local_44;
        }
        local_47 = local_58[iVar2 + 0x101];
        local_48 = local_58[(int)uVar4];
      }
    }
    local_res10 = (uint)*(ushort *)
                         (*(longlong *)(param_1 + 0x51) +
                         (ulonglong)(local_res10 & *(uint *)(param_1 + 0x41)) * 2);
    if ((local_res10 <= local_34) || (local_40 = local_40 - 1, local_40 == 0)) goto LAB_0159c741;
  } while( true );
}

