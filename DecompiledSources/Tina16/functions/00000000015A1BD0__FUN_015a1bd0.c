/* Ghidra address: 015a1bd0 */
/* Ghidra symbol: FUN_015a1bd0 */


void FUN_015a1bd0(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint local_28;
  uint local_24;
  short local_18;
  short local_14;
  int local_10;
  
  local_10 = 0;
  if (*(int *)((longlong)param_1 + 0x9d) < 1) {
    local_24 = param_3 + 5;
    local_28 = local_24;
  }
  else {
    if (*(int *)(*param_1 + 0x48) == 2) {
      uVar1 = FUN_015a5270(param_1);
      *(undefined4 *)(*param_1 + 0x48) = uVar1;
    }
    FUN_015a2cf0(param_1,(longlong)param_1 + 0xb31);
    FUN_015a2cf0(param_1,(longlong)param_1 + 0xb45);
    local_10 = FUN_015a4190(param_1);
    local_28 = *(int *)((longlong)param_1 + 0x16de) + 10U >> 3;
    local_24 = *(int *)((longlong)param_1 + 0x16e2) + 10U >> 3;
    if (local_24 <= local_28) {
      local_28 = local_24;
    }
  }
  if ((local_28 < param_3 + 4U) || (param_2 == 0)) {
    if ((*(int *)((longlong)param_1 + 0xa1) == 4) || (local_24 == local_28)) {
      if ((int)param_1[0x2de] < 0xe) {
        *(ushort *)((longlong)param_1 + 0x16ee) =
             *(ushort *)((longlong)param_1 + 0x16ee) |
             (ushort)((param_4 + 2U & 0xffff) << ((byte)(int)param_1[0x2de] & 0x1f));
        *(int *)(param_1 + 0x2de) = (int)param_1[0x2de] + 3;
      }
      else {
        local_18 = (short)(param_4 + 2U);
        *(ushort *)((longlong)param_1 + 0x16ee) =
             *(ushort *)((longlong)param_1 + 0x16ee) |
             local_18 << ((byte)(int)param_1[0x2de] & 0x1f);
        *(char *)(*(longlong *)((longlong)param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 4)) =
             (char)*(undefined2 *)((longlong)param_1 + 0x16ee);
        *(int *)(param_1 + 4) = (int)param_1[4] + 1;
        *(char *)(*(longlong *)((longlong)param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 4)) =
             (char)((ushort)*(undefined2 *)((longlong)param_1 + 0x16ee) >> 8);
        *(int *)(param_1 + 4) = (int)param_1[4] + 1;
        *(short *)((longlong)param_1 + 0x16ee) =
             (short)((int)(param_4 + 2U & 0xffff) >> (0x10U - (char)(int)param_1[0x2de] & 0x1f));
        *(int *)(param_1 + 0x2de) = (int)param_1[0x2de] + -0xd;
      }
      FUN_015a4890(param_1,&DAT_01f69660,&DAT_01f69ae0);
    }
    else {
      if ((int)param_1[0x2de] < 0xe) {
        *(ushort *)((longlong)param_1 + 0x16ee) =
             *(ushort *)((longlong)param_1 + 0x16ee) |
             (ushort)((param_4 + 4U & 0xffff) << ((byte)(int)param_1[0x2de] & 0x1f));
        *(int *)(param_1 + 0x2de) = (int)param_1[0x2de] + 3;
      }
      else {
        local_14 = (short)(param_4 + 4U);
        *(ushort *)((longlong)param_1 + 0x16ee) =
             *(ushort *)((longlong)param_1 + 0x16ee) |
             local_14 << ((byte)(int)param_1[0x2de] & 0x1f);
        *(char *)(*(longlong *)((longlong)param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 4)) =
             (char)*(undefined2 *)((longlong)param_1 + 0x16ee);
        *(int *)(param_1 + 4) = (int)param_1[4] + 1;
        *(char *)(*(longlong *)((longlong)param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 4)) =
             (char)((ushort)*(undefined2 *)((longlong)param_1 + 0x16ee) >> 8);
        *(int *)(param_1 + 4) = (int)param_1[4] + 1;
        *(short *)((longlong)param_1 + 0x16ee) =
             (short)((int)(param_4 + 4U & 0xffff) >> (0x10U - (char)(int)param_1[0x2de] & 0x1f));
        *(int *)(param_1 + 0x2de) = (int)param_1[0x2de] + -0xd;
      }
      FUN_015a4270(param_1,*(int *)((longlong)param_1 + 0xb39) + 1,
                   *(int *)((longlong)param_1 + 0xb4d) + 1,local_10 + 1);
      FUN_015a4890(param_1,(longlong)param_1 + 0xad,(longlong)param_1 + 0x9a1);
    }
  }
  else {
    FUN_015a2380(param_1,param_2,param_3,param_4);
  }
  FUN_015a2520(param_1);
  if (param_4 != 0) {
    FUN_015a53d0(param_1);
  }
  return;
}

