/* Ghidra address: 0068fff0 */
/* Ghidra symbol: FUN_0068fff0 */


undefined8 * FUN_0068fff0(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_b8 [12];
  int local_ac;
  undefined1 local_a8 [4];
  int local_a4;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined1 local_84 [16];
  undefined1 local_74 [16];
  undefined1 local_64 [16];
  undefined1 local_54 [16];
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  cVar1 = (**(code **)(*(longlong *)param_1[2] + 0xf0))((longlong *)param_1[2]);
  if (cVar1 == '\0') {
    FUN_00423010(param_2,0,0,0,0);
  }
  else {
    (**(code **)(*(longlong *)param_1[2] + 0xe0))((longlong *)param_1[2],param_2);
    local_40 = 0x17;
    local_44 = 0x1c;
    uVar4 = FUN_00786090(param_1);
    thunk_FUN_04083ff6(uVar4,2,&local_44);
    if (local_38 == local_3c) {
      FUN_00423010(&local_94,0,0,0,0);
      *param_2 = local_94;
      param_2[1] = uStack_8c;
    }
    else {
      if (local_34 == 0) {
        FUN_00690360(param_1,local_a8);
        FUN_00690360(param_1,local_54);
        iVar2 = FUN_004230c0(local_54);
        iVar3 = (**(code **)(*param_1 + 0x48))(param_1,9);
        iVar2 = FUN_0040c770(((double)(local_30 - local_3c) / (double)(local_38 - local_3c)) *
                             (double)(iVar2 - iVar3));
        *(int *)((longlong)param_2 + 4) = local_a4 + iVar2;
        iVar2 = (**(code **)(*param_1 + 0x48))(param_1,9);
        *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 4) + iVar2;
      }
      else {
        FUN_00690360(param_1,local_a8);
        iVar2 = local_3c;
        FUN_00690360(param_1,local_64);
        iVar3 = FUN_004230c0(local_64);
        iVar2 = FUN_0040c770(((double)(local_30 - iVar2) / (double)(local_38 - iVar2)) *
                             (double)iVar3);
        *(int *)((longlong)param_2 + 4) = local_a4 + iVar2;
        FUN_00690360(param_1,local_a8);
        iVar2 = local_3c;
        FUN_00690360(param_1,local_74);
        iVar3 = FUN_004230c0(local_74);
        iVar2 = FUN_0040c770(((double)(((local_30 + local_34) - iVar2) + -1) /
                             (double)(local_38 - iVar2)) * (double)iVar3);
        iVar2 = local_a4 + iVar2;
        *(int *)((longlong)param_2 + 0xc) = iVar2;
        iVar3 = (**(code **)(*param_1 + 0x48))(param_1,9);
        if (iVar2 - *(int *)((longlong)param_2 + 4) < iVar3) {
          if (local_38 - local_3c == local_34) {
            FUN_00690360(param_1,local_a8);
            *(int *)((longlong)param_2 + 4) = local_a4;
          }
          else {
            FUN_00690360(param_1,local_a8);
            FUN_00690360(param_1,local_84);
            iVar2 = FUN_004230c0(local_84);
            iVar3 = (**(code **)(*param_1 + 0x48))(param_1,9);
            iVar2 = FUN_0040c770(((double)(local_30 - local_3c) /
                                 (double)((local_38 - local_3c) - local_34)) *
                                 (double)(iVar2 - iVar3));
            *(int *)((longlong)param_2 + 4) = local_a4 + iVar2;
          }
          iVar2 = (**(code **)(*param_1 + 0x48))(param_1,9);
          *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 4) + iVar2;
        }
      }
      FUN_00690520(param_1,local_a8);
      if (local_a4 < *(int *)((longlong)param_2 + 0xc)) {
        FUN_00690520(param_1,local_a8);
        *(int *)((longlong)param_2 + 0xc) = local_a4;
      }
      FUN_00690520(param_1,local_a8);
      FUN_006903f0(param_1,local_b8);
      iVar2 = (**(code **)(*param_1 + 0x48))(param_1,9);
      if (local_a4 - local_ac < iVar2) {
        FUN_004238d0(param_2,0,0,0,0);
      }
    }
  }
  return param_2;
}

