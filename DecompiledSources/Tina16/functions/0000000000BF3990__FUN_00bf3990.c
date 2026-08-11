/* Ghidra address: 00bf3990 */
/* Ghidra symbol: FUN_00bf3990 */


void FUN_00bf3990(longlong *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_res10 [2];
  int local_res18 [4];
  int local_28 [4];
  
  if ((*(char *)((longlong)param_1 + 0xa9) != '\0') &&
     (local_res10[0] = param_2, local_res18[0] = param_3, cVar1 = FUN_0065be20(param_1),
     cVar1 != '\0')) {
    if ((local_res10[0] == -1) && (local_res18[0] == -1)) {
      (**(code **)(*param_1 + 0xe0))(param_1,local_28);
      local_28[0] = local_28[0] + (int)param_1[0x122];
      if ((*(ushort *)(param_1 + 199) & 4) == 0) {
        (**(code **)(*param_1 + 0x268))(param_1,local_28,0);
      }
      else {
        FUN_00423a60(param_1 + 0xc5,local_28,param_1 + 0xc5);
      }
    }
    else {
      if (local_res10[0] < 2) {
        local_res10[0] = 1;
      }
      if (local_res18[0] < 2) {
        local_res18[0] = 1;
      }
      if (local_res18[0] < local_res10[0]) {
        FUN_00bcbe70(local_res18,local_res10);
      }
      iVar2 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
      if (iVar2 <= local_res18[0]) {
        local_res18[0] = 0x7fffffff;
      }
      if (((char)param_1[0x93] != '\0') || (cVar1 = FUN_00c10e70(param_1), cVar1 != '\0')) {
        local_res10[0] = FUN_00c11030(param_1,local_res10[0]);
        iVar2 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
        if (local_res18[0] < iVar2) {
          if ((char)param_1[0x93] == '\0') {
            local_res18[0] = FUN_00c11030(param_1,local_res18[0] + 1);
            local_res18[0] = local_res18[0] + -1;
          }
          else {
            local_res18[0] = FUN_00c11030(param_1,local_res18[0]);
          }
        }
      }
      iVar2 = *(int *)((longlong)param_1 + 0x534);
      if (*(int *)((longlong)param_1 + 0x534) < local_res10[0]) {
        iVar2 = local_res10[0];
      }
      iVar3 = *(int *)((longlong)param_1 + 0x534) + (int)param_1[0xa1];
      if (local_res18[0] < iVar3) {
        iVar3 = local_res18[0];
      }
      if (iVar2 <= iVar3) {
        local_res10[0] = iVar2;
        local_res18[0] = iVar3;
        uVar4 = FUN_0064d0b0(param_1);
        FUN_00498350(local_28,(int)param_1[0x122],
                     *(int *)((longlong)param_1 + 0x52c) *
                     (local_res10[0] - *(int *)((longlong)param_1 + 0x534)),uVar4,
                     *(int *)((longlong)param_1 + 0x52c) *
                     ((local_res18[0] - *(int *)((longlong)param_1 + 0x534)) + 1));
        if ((*(ushort *)(param_1 + 199) & 4) == 0) {
          (**(code **)(*param_1 + 0x268))(param_1,local_28,0);
        }
        else {
          FUN_00423a60(param_1 + 0xc5,local_28,param_1 + 0xc5);
        }
      }
    }
  }
  return;
}

