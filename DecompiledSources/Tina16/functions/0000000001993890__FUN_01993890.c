/* Ghidra address: 01993890 */
/* Ghidra symbol: FUN_01993890 */


void FUN_01993890(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                 undefined1 param_6,int param_7)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  int iVar3;
  int iVar4;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  undefined1 auStack_d8 [32];
  uint local_b8;
  uint local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined8 *local_70;
  undefined1 local_68 [72];
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  FUN_01b1cd00(local_res10,local_res18);
  FUN_01b1cd00(local_res20,&param_5);
  if ((int)local_res20[0] < (int)local_res10[0]) {
    FUN_01cefdf0(local_res10,local_res20);
  }
  if ((int)param_5 < (int)local_res18[0]) {
    FUN_01cefdf0(local_res18,&param_5);
  }
  local_b8 = local_res20[0];
  local_b0 = param_5;
  local_a8 = local_a8 & 0xffffffffffffff00;
  local_70 = (undefined8 *)FUN_017c0440(0,&PTR_FUN_017c0190,local_res10[0],local_res18[0]);
  FUN_00b95480(local_68,&PTR_FUN_0198a7c8,0x10,10);
  FUN_0198a830(local_68,local_res10[0],local_res18[0]);
  FUN_0198a830(local_68,local_res20[0],param_5);
  if (*PTR_DAT_020052b8 != '\0') {
    local_88 = local_res10[0];
    local_84 = local_res18[0];
    local_80 = local_res20[0];
    local_7c = param_5;
    unaff_RBX = 0;
  }
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_00b94e60(param_1,iVar3);
      FUN_01993390(auStack_d8,uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_00b94e60(param_1,iVar3);
      FUN_01993760(auStack_d8,uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_0198a970(local_68,local_res10,local_res18);
  while (cVar1 = FUN_0198a990(local_68,local_res20,&param_5), cVar1 != '\0') {
    if (*PTR_DAT_020052b8 == '\0') {
      local_b8 = param_5;
      local_b0 = CONCAT31(local_b0._1_3_,param_6);
      local_a8 = 0;
      FUN_01992cc0(param_1,local_res10[0],local_res18[0],local_res20[0]);
    }
    else {
      local_b8 = param_5;
      uVar2 = FUN_01993d60(param_1,local_res10[0],local_res18[0],local_res20[0]);
      if ((param_7 != -1) &&
         ((((local_res18[0] == param_5 && ((int)local_88 <= (int)local_res10[0])) &&
           ((int)local_res20[0] <= (int)local_80)) ||
          (((local_res10[0] == local_res20[0] && ((int)local_84 <= (int)local_res18[0])) &&
           ((int)param_5 <= (int)local_7c)))))) {
        uVar2 = FUN_017c4f60(&DAT_017bfed0,1,param_7,uVar2);
      }
      local_b8 = local_res20[0];
      local_b0 = param_5;
      local_a8 = CONCAT71(local_a8._1_7_,param_6);
      local_a0 = uVar2;
      local_98 = unaff_RBX;
      unaff_RBX = FUN_019931d0(&DAT_01992fe8,1,local_res10[0],local_res18[0]);
    }
    local_res10[0] = local_res20[0];
    local_res18[0] = param_5;
  }
  if (*PTR_DAT_020052b8 != '\0') {
    FUN_00410f20(unaff_RBX);
  }
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_00b94e60(param_1,iVar3);
      FUN_01993840(auStack_d8,uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00b95360(param_1);
  FUN_00b94e30(local_68);
  uVar2 = (**(code **)*local_70)(local_70);
  FUN_00418590(uVar2,&DAT_017c0400);
  return;
}

