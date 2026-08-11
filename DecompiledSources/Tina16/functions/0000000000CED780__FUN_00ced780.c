/* Ghidra address: 00ced780 */
/* Ghidra symbol: FUN_00ced780 */


longlong * FUN_00ced780(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_d8 [32];
  int *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  longlong *local_90;
  undefined8 local_88;
  int local_7c;
  int *local_78;
  undefined8 local_70;
  int *local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_70 = 0;
  local_78 = (int *)0x0;
  local_60 = 0;
  local_68 = (int *)0x0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_58 = 0;
  local_90 = param_1;
  local_88 = param_2;
  FUN_00414ad0(param_1,param_2);
  iVar5 = 0;
  if (*local_90 != 0) {
    iVar5 = *(int *)(*local_90 + -4);
  }
  bVar1 = false;
  iVar6 = 1;
  local_7c = 1;
  if (0 < iVar5) {
    do {
      local_7c = FUN_008b04e0(&LAB_00cedb24,*local_90,iVar5,local_7c);
      if (local_7c == 0) break;
      iVar4 = FUN_008b0400(&LAB_00cedb24,*local_90,iVar5,local_7c);
      local_50 = iVar5;
      if (iVar4 != 0) {
        local_50 = iVar4 + -1;
      }
      local_b8 = &local_50;
      local_b0 = local_30;
      local_a8 = &local_38;
      local_a0 = &local_40;
      cVar2 = FUN_00ced1a0(auStack_d8,*local_90,local_7c,&local_4c);
      if (cVar2 == '\0') {
        local_7c = FUN_008b0400(&LAB_00cedb24,*local_90,iVar5,local_7c);
        if (local_7c == 0) break;
        bVar1 = false;
      }
      else {
        cVar3 = '\0';
        cVar2 = FUN_00ced340(auStack_d8,local_38,local_40,&local_58);
        if (cVar2 != '\0') {
          cVar3 = FUN_00cebd10(local_30[0],local_58,&local_48);
        }
        if (cVar3 == '\0') {
          local_7c = local_50 + 1;
        }
        else if (bVar1) {
          FUN_00416dc0(&local_60,*local_90,1,iVar6 + -1);
          FUN_00416dc0(&local_68,*local_90,local_50 + 1,0x7fffffff);
          local_b8 = local_68;
          FUN_00416cd0(local_90,3,local_60,local_48);
          local_7c = 0;
          if (local_48 != 0) {
            local_7c = *(int *)(local_48 + -4);
          }
          local_7c = iVar6 + local_7c;
        }
        else {
          FUN_00416dc0(&local_70,*local_90,1,local_4c + -1);
          FUN_00416dc0(&local_78,*local_90,local_50 + 1,0x7fffffff);
          local_b8 = local_78;
          FUN_00416cd0(local_90,3,local_70,local_48);
          local_7c = 0;
          if (local_48 != 0) {
            local_7c = *(int *)(local_48 + -4);
          }
          local_7c = local_4c + local_7c;
        }
        iVar5 = 0;
        if (*local_90 != 0) {
          iVar5 = *(int *)(*local_90 + -4);
        }
        bVar1 = true;
        iVar6 = local_7c;
      }
    } while (local_7c <= iVar5);
  }
  FUN_00414560(&local_78,4);
  FUN_00419430(&local_58,&DAT_0086e978);
  FUN_00414560(&local_48,4);
  return local_90;
}

