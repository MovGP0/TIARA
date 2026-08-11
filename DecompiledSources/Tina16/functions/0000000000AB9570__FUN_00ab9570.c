/* Ghidra address: 00ab9570 */
/* Ghidra symbol: FUN_00ab9570 */


int FUN_00ab9570(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4,
                undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                undefined8 param_9,longlong param_10,int *param_11,undefined4 *param_12)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_20 [4];
  int local_1c;
  
  *(int *)((longlong)param_1 + 0x74) = param_4;
  *(int *)(param_1 + 0xf) = param_4;
  *(int *)((longlong)param_1 + 0x7c) = param_4;
  *(undefined4 *)(param_1 + 0xd) = *param_12;
  (**(code **)(*(longlong *)param_1[0x1e] + 0x10))((longlong *)param_1[0x1e]);
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  if (*(byte *)(param_1 + 0x25) < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(param_1 + 0x25) & 0x1f)
            & 6U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    if (*(int *)((longlong)param_1 + 0x6c) == 0) {
      lVar3 = FUN_00a94a50(param_1[0x23],0);
      iVar1 = *(int *)(lVar3 + 0x48);
      *(int *)(param_1 + 0x11) = iVar1;
      *param_11 = 0;
      *(int *)((longlong)param_1 + 0x8c) = iVar1;
      *(int *)(param_1 + 0x10) = param_4 + iVar1;
      *(int *)((longlong)param_1 + 0x84) = param_4 + iVar1;
      *(undefined4 *)(param_1 + 0x12) = param_3;
      *(int *)((longlong)param_1 + 0x94) = (int)param_1[0xf];
      *(int *)(param_1 + 0x13) = (int)param_1[0x12] + *param_11;
      *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x94) + (int)param_1[0x11];
      return iVar1;
    }
    if ((char)param_1[0x15] == '\0') {
      uVar2 = *(undefined4 *)(param_10 + 0xc);
      *(undefined4 *)(param_10 + 0xc) = 32000;
      FUN_00ab8320(auStack_58);
      *(undefined4 *)(param_10 + 0xc) = uVar2;
      local_38 = param_7;
      local_30 = param_8;
      (**(code **)(*param_1 + 0xb8))(param_1,param_2,local_20,param_11);
      *(int *)(param_1 + 0x13) = (int)param_1[0x12] + *param_11;
      return local_1c;
    }
  }
  FUN_00ab8320(auStack_58);
  return local_1c;
}

