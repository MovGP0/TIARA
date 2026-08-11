/* Ghidra address: 00a9d290 */
/* Ghidra symbol: FUN_00a9d290 */


void FUN_00a9d290(longlong *param_1,undefined8 param_2,int *param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_34 [4];
  int local_30;
  int local_2c;
  
  if ((char)param_1[8] != '\x11') {
    if (*(byte *)((longlong)param_1 + 0x4c) < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
               (*(byte *)((longlong)param_1 + 0x4c) & 0x1f) & 0xcU) != 0;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) {
      (**(code **)(*param_1 + 0xd0))(param_1,param_5,param_6,local_34);
      if (((*(char *)((longlong)param_1 + 0x50e) == '\0') || ((int)param_1[0x99] == -0xbc6d5d)) ||
         ((int)param_1[0x99] < 0x15)) {
        (**(code **)(*param_1 + 200))(param_1,param_2,&local_2c,&local_30,param_5,param_6);
      }
      else {
        local_30 = (int)param_1[0x99];
        local_2c = local_30;
      }
      if (*(int *)((longlong)param_1 + 0x484) == -0xbc6d5d) {
        *(undefined4 *)((longlong)param_1 + 0x484) = 0;
      }
      if (*(int *)((longlong)param_1 + 0x47c) == -0xbc6d5d) {
        *(undefined4 *)((longlong)param_1 + 0x47c) = 0;
      }
      if ((int)param_1[0x99] == -0xbc6d5d) {
        *(undefined4 *)(param_1 + 0x99) = 0;
      }
      iVar1 = *(int *)((longlong)param_1 + 0x484) + *(int *)((longlong)param_1 + 0x4a4) +
              *(int *)((longlong)param_1 + 0x494);
      iVar2 = *(int *)((longlong)param_1 + 0x47c) + *(int *)((longlong)param_1 + 0x49c) +
              *(int *)((longlong)param_1 + 0x48c);
      iVar4 = (int)param_1[0x99];
      if (iVar4 < 1) {
        iVar3 = iVar4;
        if (iVar4 < local_2c) {
          iVar3 = local_2c;
        }
        *param_3 = iVar3 + iVar1 + iVar2;
        if (iVar4 < local_30) {
          iVar4 = local_30;
        }
        *param_4 = iVar4 + iVar1 + iVar2;
      }
      else {
        *param_3 = iVar4 + iVar1 + iVar2;
        *param_4 = *param_3;
      }
      iVar4 = (int)param_1[0x8d];
      if ((0 < iVar4) && (*param_3 < iVar4)) {
        *param_3 = iVar4;
      }
      iVar4 = (int)param_1[0x8e];
      if (iVar4 < 1) {
        return;
      }
      if (*param_4 <= iVar4) {
        return;
      }
      *param_4 = iVar4;
      return;
    }
  }
  *param_3 = 0;
  *param_4 = 0;
  return;
}

