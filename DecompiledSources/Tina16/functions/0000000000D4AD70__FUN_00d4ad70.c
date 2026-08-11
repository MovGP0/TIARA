/* Ghidra address: 00d4ad70 */
/* Ghidra symbol: FUN_00d4ad70 */


void FUN_00d4ad70(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar14;
  int *piVar13;
  undefined1 local_88 [28];
  int local_6c;
  int local_68;
  int local_64;
  longlong local_60;
  undefined1 local_54 [12];
  int local_48 [2];
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_60 = 0;
  plVar7 = (longlong *)FUN_00781840();
  (**(code **)(*plVar7 + 0x1b8))(plVar7,local_54,1);
  uVar8 = FUN_00781840();
  uVar9 = FUN_005ffa40(param_2);
  uVar2 = FUN_00787fa0(*(undefined8 *)(param_1 + 0x18));
  uVar3 = FUN_00787c80(*(undefined8 *)(param_1 + 0x18));
  FUN_004238d0(local_88,0,0,uVar2,CONCAT44(uVar14,uVar3));
  piVar13 = (int *)0x0;
  FUN_00778dc0(uVar8,uVar9,local_54,local_88,0,0);
  lVar10 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x40e,0,0);
  if (lVar10 < 1) {
    iVar4 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x406,0,0);
    iVar5 = 0;
    iVar12 = iVar4;
    if (-1 < iVar4 + -1) {
      do {
        FUN_004238d0(&local_38,0,0,0,(ulonglong)piVar13 & 0xffffffff00000000);
        thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x40a,(longlong)iVar5,&local_38);
        iVar6 = FUN_00429b10(&local_38);
        if (iVar6 != 0) break;
        plVar7 = (longlong *)FUN_00781840();
        (**(code **)(*plVar7 + 0x1b8))(plVar7,local_54,2);
        uVar8 = FUN_00781840();
        uVar9 = FUN_005ffa40(param_2);
        piVar13 = (int *)0x0;
        FUN_00778dc0(uVar8,uVar9,local_54,&local_38,0,0);
        if (iVar5 == iVar4 + -1) {
          FUN_00787be0(*(undefined8 *)(param_1 + 0x18),local_48);
          local_48[0] = FUN_004230c0(&local_38);
          local_48[0] = local_40 - local_48[0];
          plVar7 = (longlong *)FUN_00781840();
          (**(code **)(*plVar7 + 0x1b8))(plVar7,local_54,4);
          uVar8 = FUN_00781840();
          uVar9 = FUN_005ffa40(param_2);
          piVar13 = (int *)0x0;
          FUN_00778dc0(uVar8,uVar9,local_54,local_48,0,0);
        }
        plVar7 = (longlong *)FUN_00781840();
        (**(code **)(*plVar7 + 0x1b8))(plVar7,local_54,2);
        thunk_FUN_04176532(&local_38,0xffffffff,0xffffffff);
        FUN_007879c0(*(undefined8 *)(param_1 + 0x18),0);
        thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x40c);
        FUN_004169f0(&local_60);
        iVar6 = 0;
        if (local_60 != 0) {
          iVar6 = *(int *)(local_60 + -4);
        }
        if (0 < iVar6) {
          FUN_00414de0(&local_60);
          uVar11 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8));
          if ((uVar11 & 0x1000) == 0) {
            piVar13 = &local_38;
            FUN_00788490(param_1);
          }
        }
        iVar5 = iVar5 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
  }
  else {
    FUN_00787be0(*(undefined8 *)(param_1 + 0x18),&local_38);
    FUN_0040d200(&local_6c,0xc,0);
    thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x407,0,&local_6c);
    local_38 = local_6c + local_64;
    local_34 = local_68;
    local_2c = local_2c - local_68;
    local_30 = local_30 - local_64;
    plVar7 = (longlong *)FUN_00781840();
    (**(code **)(*plVar7 + 0x1b8))(plVar7,local_54,2);
    uVar8 = FUN_00781840();
    uVar9 = FUN_005ffa40(param_2);
    FUN_00778dc0(uVar8,uVar9,local_54,&local_38,0,0);
    FUN_00787be0(*(undefined8 *)(param_1 + 0x18),local_48);
    local_48[0] = FUN_004230c0(&local_38);
    local_48[0] = local_40 - local_48[0];
    plVar7 = (longlong *)FUN_00781840();
    (**(code **)(*plVar7 + 0x1b8))(plVar7,local_54,4);
    uVar8 = FUN_00781840();
    uVar9 = FUN_005ffa40(param_2);
    FUN_00778dc0(uVar8,uVar9,local_54,local_48,0,0);
    plVar7 = (longlong *)FUN_00781840();
    (**(code **)(*plVar7 + 0x1b8))(plVar7,local_54,2);
    uVar1 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x40c,0,0);
    FUN_004169f0(&local_60,uVar1);
    iVar12 = 0;
    if (local_60 != 0) {
      iVar12 = *(int *)(local_60 + -4);
    }
    if (0 < iVar12) {
      uVar8 = FUN_00414de0(&local_60);
      thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x40d,0,uVar8);
      uVar2 = FUN_007879c0(*(undefined8 *)(param_1 + 0x18),0);
      FUN_00788490(param_1,param_2,local_54,local_60,&local_38,uVar2);
    }
  }
  FUN_00414480(&local_60);
  return;
}

