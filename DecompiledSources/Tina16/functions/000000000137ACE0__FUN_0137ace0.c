/* Ghidra address: 0137ace0 */
/* Ghidra symbol: FUN_0137ace0 */


undefined8 FUN_0137ace0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  uint unaff_EDI;
  bool bVar9;
  undefined8 uVar10;
  double unaff_XMM6_Qa;
  double unaff_XMM7_Qa;
  ulonglong in_stack_ffffffffffffff10;
  int local_ac;
  int local_9c;
  undefined8 local_90;
  double local_88;
  undefined1 local_79 [73];
  
  iVar4 = 0;
  if (*param_2 != 0) {
    FUN_01cc6030(*param_2);
  }
  lVar5 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,8,0,0);
  *param_2 = lVar5;
  FUN_01cc6020(*param_2);
  param_1[0xd] = -1;
  local_9c = 0;
  iVar8 = 0;
  local_79[0] = 0;
  (**(code **)(*param_1 + 0x110))(param_1,&local_88,&local_90);
  iVar2 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
  local_ac = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar6 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],local_ac);
      lVar5 = FUN_004113f0(uVar6,&PTR_FUN_011051a8);
      *(undefined4 *)(lVar5 + 0xbc) = 0xffffffff;
      if ((*(char *)(lVar5 + 0x11) != '\0') && (cVar1 = FUN_00e1a6e0(local_ac), cVar1 != '\0')) {
        if (*(longlong *)(lVar5 + 0xd8) != 0) {
          FUN_004095f0(*(longlong *)(lVar5 + 0xd8));
        }
        in_stack_ffffffffffffff10 = lVar5 + 0xe8;
        iVar3 = FUN_00e1a9b0(local_ac,lVar5 + 0xe0,lVar5 + 0xd8,local_79,lVar5 + 0xe2,
                             in_stack_ffffffffffffff10,lVar5 + 0xf0,lVar5 + 0xf8,lVar5 + 0x100);
        if ((iVar3 == 0) && (*(longlong *)(lVar5 + 0xd8) != 0)) {
          *(int *)(lVar5 + 0xbc) = local_9c;
          iVar8 = iVar8 + 1;
          iVar3 = local_9c + 1;
          bVar9 = local_9c == 0;
          local_9c = iVar3;
          if (bVar9) {
            unaff_XMM6_Qa = *(double *)(lVar5 + 0xe8);
            unaff_XMM7_Qa = *(double *)(lVar5 + 0xf0);
            if (1e-09 < unaff_XMM7_Qa) {
              iVar4 = FUN_0040c840((local_88 - unaff_XMM6_Qa) / unaff_XMM7_Qa);
            }
            unaff_EDI = (uint)*(ushort *)(lVar5 + 0xe0);
          }
        }
      }
      local_ac = local_ac + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = 0;
  if (iVar8 != 0) {
    FUN_01cc31d0(*(undefined8 *)(*param_2 + 8),iVar8,0,2,1,
                 in_stack_ffffffffffffff10 & 0xffffffffffffff00,0,1);
    lVar5 = FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,*param_2);
    param_1[0xc] = lVar5;
    FUN_01cc5c60(*param_2);
    iVar8 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
    local_ac = 0;
    if (-1 < iVar8 + -1) {
      do {
        uVar6 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],local_ac);
        plVar7 = (longlong *)FUN_004113f0(uVar6,&PTR_FUN_011051a8);
        if (*(int *)((longlong)plVar7 + 0xbc) == -1) {
          *(undefined4 *)(plVar7 + 0x17) = 0xffffffff;
        }
        else {
          uVar6 = FUN_01cc5cc0(*param_2);
          (**(code **)(*plVar7 + 0x10))(plVar7,uVar6,*param_2);
          FUN_01cc09f0(plVar7[8],plVar7[1]);
          *(int *)(plVar7 + 0x17) = iVar2;
          iVar2 = iVar2 + 1;
          if (iVar2 == 1) {
            (**(code **)(*(longlong *)param_1[0xc] + 0x10))((longlong *)param_1[0xc],plVar7[8],0);
          }
        }
        local_ac = local_ac + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    lVar5 = FUN_01cc80a0(param_1[0xc]);
    param_1[0xd] = lVar5;
  }
  *(undefined1 *)((longlong)param_1 + 0x59) = 0;
  if ((param_1[0xc] == 0) || (param_1[0xd] == -1)) {
    uVar6 = 0xffffffff;
  }
  else {
    FUN_01cc80c0(param_1[0xc],param_1[0xd]);
    iVar2 = (unaff_EDI & 0xffff) - 1;
    if (iVar4 <= iVar2) {
      iVar2 = (iVar2 - iVar4) + 1;
      do {
        iVar8 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
        local_ac = 0;
        if (-1 < iVar8 + -1) {
          do {
            uVar6 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],local_ac);
            lVar5 = FUN_004113f0(uVar6,&PTR_FUN_011051a8);
            if (*(int *)(lVar5 + 0xbc) == 0) {
              if (1e-12 <= (double)iVar4 * unaff_XMM7_Qa + unaff_XMM6_Qa) {
                FUN_01cc5240(*param_2,(double)iVar4 * unaff_XMM7_Qa + unaff_XMM6_Qa);
              }
              else {
                FUN_01cc5240(*param_2,0x3d719799812dea11);
              }
            }
            if ((*(int *)(lVar5 + 0xbc) != -1) && (iVar3 = *(int *)(lVar5 + 0xb8), iVar3 != -1)) {
              uVar6 = FUN_00c44590(*(longlong *)(lVar5 + 0xd8) + (longlong)iVar4 * 0x10);
              uVar10 = FUN_00c445d0(*(longlong *)(lVar5 + 0xd8) + (longlong)iVar4 * 0x10);
              FUN_01cc52f0(*param_2,iVar3,uVar6,uVar10);
            }
            local_ac = local_ac + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_01cc5c60(*param_2);
    while (lVar5 = FUN_01cc5cc0(*param_2), lVar5 != 0) {
      FUN_01cc0ac0(lVar5,local_88,local_90);
    }
    lVar5 = FUN_01cc80a0(param_1[0xc]);
    param_1[0xd] = lVar5;
    uVar6 = 0;
    FUN_00e1a7e0();
  }
  FUN_00410f20(param_1[0xc]);
  param_1[0xc] = 0;
  return uVar6;
}

