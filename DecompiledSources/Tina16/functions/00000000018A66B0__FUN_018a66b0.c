/* Ghidra address: 018a66b0 */
/* Ghidra symbol: FUN_018a66b0 */


void FUN_018a66b0(longlong *param_1,char param_2,ushort param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  double dVar7;
  ushort local_res18;
  ulonglong uVar8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_73 [32];
  undefined1 local_53 [9];
  undefined2 local_4a;
  int local_38;
  int local_34;
  
  if (((char)param_1[0xa1] == '\0') && (*(longlong *)(param_1[0xa7] + 0x1f8) != 0)) {
    lVar5 = param_1[0xa7];
    (**(code **)(lVar5 + 0x1f8))(*(undefined8 *)(lVar5 + 0x200),lVar5);
  }
  iVar1 = FUN_004b2060(param_1[0xa5]);
  if ((iVar1 != 0) && ((char)param_1[0xa3] == '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x4f3) = 0;
    if ((char)param_1[0xaa] == '\0') {
      iVar1 = *(int *)((longlong)param_1 + 0x51c) + param_4;
    }
    else {
      iVar1 = FUN_0064d0b0(param_1);
      iVar1 = iVar1 - (*(int *)((longlong)param_1 + 0x51c) + param_4);
    }
    iVar1 = FUN_018a51c0(param_1[0xa5],(int)param_1[0xa4] + param_5,iVar1);
    *(undefined1 *)((longlong)param_1 + 0x4f2) = 1;
    FUN_018a9020(param_1[0xa7],iVar1 + 1);
    *(undefined1 *)((longlong)param_1 + 0x4f2) = 0;
    if (((char)param_1[0xa1] == '\0') && (param_2 != '\x01')) {
      local_53[0] = 3;
      local_4a = (undefined2)param_1[0x9e];
      FUN_018a71e0(param_1,local_53);
      local_res18 = param_3;
      if (*(char *)((longlong)param_1 + 0x551) != '\0') {
        local_res18 = param_3 | 2;
      }
      uVar2 = FUN_0064d0b0(param_1);
      FUN_018a5310(param_1[0xa5],&local_38,iVar1,uVar2,param_1[0xa9],(char)param_1[0xaa]);
      if ((*(int *)((longlong)param_1 + 0x55c) != *(int *)((longlong)param_1 + 0x554)) &&
         ((int)param_1[0xac] != (int)param_1[0xab])) {
        lVar5 = FUN_018a73a0(param_1);
        if ((*(uint *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + 0x220) + 10) & 0x20000) != 0) {
          plVar6 = (longlong *)FUN_018a73a0(param_1);
          plVar6 = (longlong *)(**(code **)(*plVar6 + 8))(plVar6,iVar1);
          if (((char)plVar6[0x36] == '\0') || (iVar1 % 2 != 1)) {
            dVar7 = (double)plVar6[0x35] * *(double *)PTR_DAT_02002c30 * (double)param_1[0xa9];
          }
          else {
            dVar7 = (double)plVar6[0x39] * *(double *)PTR_DAT_02002c30 * (double)param_1[0xa9];
          }
          dVar7 = (double)(local_38 - *(int *)((longlong)param_1 + 0x51c)) + dVar7;
          FUN_018a7120(param_1,local_73,(longlong)param_1 + 0x554,param_1[0xa9],dVar7,
                       (double)(local_34 - (int)param_1[0xa4]) +
                       (double)plVar6[0x3c] * *(double *)PTR_DAT_02002c30 * (double)param_1[0xa9]);
          uVar8 = (ulonglong)dVar7 & 0xffffffffffffff00;
          (**(code **)(*plVar6 + 0x220))
                    (plVar6,local_73,&PTR_FUN_01921f40,*(undefined8 *)(param_1[0xa7] + 0x4b0),uVar8)
          ;
          FUN_00498350(&local_88,0,0,0,uVar8 & 0xffffffff00000000);
          *(undefined8 *)((longlong)param_1 + 0x554) = local_88;
          *(undefined8 *)((longlong)param_1 + 0x55c) = uStack_80;
          (**(code **)(*param_1 + 0x180))(param_1);
        }
      }
      plVar6 = (longlong *)FUN_018a73a0(param_1);
      (**(code **)(*plVar6 + 0x120))
                (plVar6,iVar1,param_4,param_5,param_2,local_res18,param_1[0xa9],
                 (double)(local_38 - *(int *)((longlong)param_1 + 0x51c)),
                 (double)(local_34 - (int)param_1[0xa4]),local_53);
      iVar3 = FUN_00427dd0();
      uVar4 = thunk_FUN_03a8bf3f();
      if (uVar4 < (uint)(iVar3 - *(int *)((longlong)param_1 + 0x524))) {
        local_53[0] = 0;
        uVar2 = FUN_00427dd0();
        *(undefined4 *)((longlong)param_1 + 0x524) = uVar2;
        plVar6 = (longlong *)FUN_018a73a0();
        (**(code **)(*plVar6 + 0x120))
                  (plVar6,iVar1,param_4,param_5,param_2,local_res18,param_1[0xa9],
                   (double)(local_38 - *(int *)((longlong)param_1 + 0x51c)),
                   (double)(local_34 - (int)param_1[0xa4]),local_53);
      }
      else {
        *(undefined4 *)((longlong)param_1 + 0x524) = 0;
        local_53[0] = 1;
        plVar6 = (longlong *)FUN_018a73a0(param_1);
        (**(code **)(*plVar6 + 0x120))
                  (plVar6,iVar1,param_4,param_5,param_2,local_res18,param_1[0xa9],
                   (double)(local_38 - *(int *)((longlong)param_1 + 0x51c)),
                   (double)(local_34 - (int)param_1[0xa4]),local_53);
      }
    }
  }
  return;
}

