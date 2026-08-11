/* Ghidra address: 00690690 */
/* Ghidra symbol: FUN_00690690 */


int * FUN_00690690(longlong *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_b8 [8];
  int local_b0;
  int local_a8 [5];
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
      *(undefined8 *)param_2 = local_94;
      *(undefined8 *)(param_2 + 2) = uStack_8c;
    }
    else {
      if (local_34 == 0) {
        FUN_00690a00(param_1,local_a8);
        FUN_00690a00(param_1,local_54);
        iVar2 = FUN_004230a0(local_54);
        iVar3 = (**(code **)(*param_1 + 0x48))(param_1,10);
        iVar2 = FUN_0040c770(((double)(local_30 - local_3c) / (double)(local_38 - local_3c)) *
                             (double)(iVar2 - iVar3));
        *param_2 = local_a8[0] + iVar2;
        iVar2 = (**(code **)(*param_1 + 0x48))(param_1,10);
        param_2[2] = *param_2 + iVar2;
      }
      else {
        FUN_00690a00(param_1,local_a8);
        iVar2 = local_3c;
        FUN_00690a00(param_1,local_64);
        iVar3 = FUN_004230a0(local_64);
        iVar2 = FUN_0040c770(((double)(local_30 - iVar2) / (double)(local_38 - iVar2)) *
                             (double)iVar3);
        *param_2 = local_a8[0] + iVar2;
        FUN_00690a00(param_1,local_a8);
        iVar2 = local_3c;
        FUN_00690a00(param_1,local_74);
        iVar3 = FUN_004230a0(local_74);
        iVar2 = FUN_0040c770(((double)(((local_30 + local_34) - iVar2) + -1) /
                             (double)(local_38 - iVar2)) * (double)iVar3);
        iVar2 = local_a8[0] + iVar2;
        param_2[2] = iVar2;
        iVar3 = (**(code **)(*param_1 + 0x48))(param_1,10);
        if (iVar2 - *param_2 < iVar3) {
          if (local_38 - local_3c == local_34) {
            FUN_00690a00(param_1,local_a8);
            *param_2 = local_a8[0];
          }
          else {
            FUN_00690a00(param_1,local_a8);
            FUN_00690a00(param_1,local_84);
            iVar2 = FUN_004230a0(local_84);
            iVar3 = (**(code **)(*param_1 + 0x48))(param_1,10);
            iVar2 = FUN_0040c770(((double)(local_30 - local_3c) /
                                 (double)((local_38 - local_3c) - local_34)) *
                                 (double)(iVar2 - iVar3));
            *param_2 = local_a8[0] + iVar2;
          }
          iVar2 = (**(code **)(*param_1 + 0x48))(param_1,10);
          param_2[2] = *param_2 + iVar2;
        }
      }
      FUN_00690bc0(param_1,local_a8);
      if (local_a8[0] < param_2[2]) {
        FUN_00690bc0(param_1,local_a8);
        param_2[2] = local_a8[0];
      }
      FUN_00690bc0(param_1,local_a8);
      FUN_00690a90(param_1,local_b8);
      iVar2 = (**(code **)(*param_1 + 0x48))(param_1,10);
      if (local_a8[0] - local_b0 < iVar2) {
        FUN_004238d0(param_2,0,0,0,0);
      }
    }
  }
  return param_2;
}

