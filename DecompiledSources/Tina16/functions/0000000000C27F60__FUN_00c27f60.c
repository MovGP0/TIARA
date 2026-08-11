/* Ghidra address: 00c27f60 */
/* Ghidra symbol: FUN_00c27f60 */


void FUN_00c27f60(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  short local_22;
  int local_20;
  byte local_19;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  lVar3 = FUN_00c27290(&DAT_00c27068,1);
  param_1[0x11] = lVar3;
  (**(code **)(*param_1 + 8))(param_1);
  param_1[0xd] = param_1[7];
  *(ushort *)(param_1 + 0x10) = (ushort)*(byte *)param_1[7];
  param_1[0xd] = param_1[0xd] + 1;
  if ((int)param_1[3] <= (int)(short)param_1[0x10]) {
    FUN_0041ddd0(&local_38,PTR_PTR_020042b0);
    FUN_00c1a320(local_38);
  }
  while( true ) {
    cVar2 = FUN_00c279d0(param_1);
    if (cVar2 == '\0') break;
    bVar1 = *(byte *)param_1[0xd];
    param_1[0xd] = param_1[0xd] + 1;
    local_19 = bVar1;
    if ((int)param_1[3] <= (int)(uint)bVar1) {
      FUN_0041ddd0(&local_40,PTR_PTR_020042b0);
      FUN_00c1a320(local_40);
    }
    local_20 = (int)CONCAT21((short)param_1[0x10],bVar1);
    local_22 = FUN_00c27420(param_1[0x11],local_20);
    if (local_22 < 0) {
      (**(code **)*param_1)(param_1,(longlong)(short)param_1[0x10]);
      *(ushort *)(param_1 + 0x10) = (ushort)local_19;
      if (*(short *)((longlong)param_1 + 0x82) < 0xfff) {
        FUN_00c273c0(param_1[0x11],local_20,*(short *)((longlong)param_1 + 0x82));
        *(short *)((longlong)param_1 + 0x82) = *(short *)((longlong)param_1 + 0x82) + 1;
      }
      else {
        (**(code **)(*param_1 + 8))(param_1);
      }
    }
    else {
      *(short *)(param_1 + 0x10) = local_22;
    }
  }
  (**(code **)*param_1)(param_1,(longlong)(short)param_1[0x10]);
  FUN_00410f20(param_1[0x11]);
  FUN_00414560(&local_40,2);
  return;
}

