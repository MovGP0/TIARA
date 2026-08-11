/* Ghidra address: 005b8ae0 */
/* Ghidra symbol: FUN_005b8ae0 */


longlong FUN_005b8ae0(longlong param_1,int param_2,int param_3,int param_4,longlong param_5,
                     byte param_6)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_3c;
  int local_38;
  int local_34;
  undefined8 local_30 [2];
  longlong local_20;
  int local_14;
  char local_d;
  int local_c;
  
  local_30[0] = 0;
  local_48 = param_1;
  local_3c = param_2;
  local_38 = param_3;
  local_34 = param_4;
  FUN_00414610(param_5);
  local_20 = 0;
  if (0 < local_3c) {
    if ((param_6 & 1) == 0) {
      local_d = -1;
      iVar3 = 0;
      if (param_5 != 0) {
        iVar3 = *(int *)(param_5 + -4);
      }
      local_38 = local_38 - iVar3;
      local_c = local_38 + 1;
    }
    else {
      local_d = '\x01';
      local_38 = local_38 + local_34;
      iVar3 = 0;
      if (param_5 != 0) {
        iVar3 = *(int *)(param_5 + -4);
      }
      local_c = ((local_3c - local_38) - iVar3) + 1;
      if ((local_c < 0) || (local_3c < local_38 + local_c)) goto LAB_005b8cdb;
    }
    if ((-1 < local_38) && (local_38 <= local_3c)) {
      local_20 = local_48 + (longlong)local_38 * 2;
      if ((param_6 & 2) == 0) {
        FUN_00432460(local_30,param_5);
        FUN_00414b50(&param_5,local_30[0]);
      }
      while ((0 < local_c &&
             ((((param_6 & 4) == 0 || (local_20 == local_48 + (longlong)local_38 * 2)) ||
              (cVar1 = FUN_005b8a00(auStack_68,&local_20), cVar1 != '\0'))))) {
        local_14 = 0;
        do {
          sVar2 = FUN_005b8aa0(auStack_68,local_20);
          if (sVar2 != *(short *)(param_5 + -2 + (longlong)(local_14 + 1) * 2))
          goto code_r0x005b8cb7;
          local_14 = local_14 + 1;
          iVar3 = 0;
          if (param_5 != 0) {
            iVar3 = *(int *)(param_5 + -4);
          }
        } while (local_14 < iVar3);
        if ((((param_6 & 4) == 0) || (local_c == 0)) ||
           (cVar1 = FUN_004321f0(local_20 + (longlong)local_14 * 2), cVar1 == '\0'))
        goto LAB_005b8cdb;
code_r0x005b8cb7:
        local_20 = local_20 + (longlong)local_d * 2;
        local_c = local_c + -1;
      }
      local_20 = 0;
    }
  }
LAB_005b8cdb:
  FUN_00414480(local_30);
  FUN_00414480(&param_5);
  return local_20;
}

