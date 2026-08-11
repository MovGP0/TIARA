/* Ghidra address: 012a4100 */
/* Ghidra symbol: FUN_012a4100 */


void FUN_012a4100(longlong *param_1,longlong *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  uint7 uVar7;
  longlong in_stack_ffffffffffffff50;
  uint7 uVar8;
  int local_64;
  int local_60;
  int local_5c;
  char local_4a;
  char local_49 [23];
  undefined2 local_32;
  double local_30;
  
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  *param_3 = '\0';
  local_5c = 0;
  iVar6 = 0;
  do {
    *param_3 = '\0';
    local_32 = 0;
    iVar1 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
    local_64 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar3 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],local_64);
        lVar4 = FUN_004113f0(uVar3,&PTR_FUN_01105a20);
        if (*(char *)((longlong)param_1 + 0x59) != '\0') {
          *(undefined4 *)(lVar4 + 0xbc) = 0xffffffff;
        }
        *(undefined8 *)(lVar4 + 0xd8) = 0;
        if ((*(char *)(lVar4 + 0x11) != '\0') ||
           (((char)param_1[0xb] != '\0' &&
            (iVar2 = (**(code **)(*param_1 + 0x128))(param_1), local_64 == iVar2)))) {
          *(undefined8 *)(lVar4 + 0xd8) = 0;
          in_stack_ffffffffffffff50 = lVar4 + 0xf0;
          FUN_00e18010(local_64,&local_32,lVar4 + 0xd8,lVar4 + 0xe2,lVar4 + 0xe8,
                       in_stack_ffffffffffffff50,lVar4 + 0xf8,lVar4 + 0x100,local_49,&local_4a);
          if (local_49[0] != '\0') {
            if (*(char *)((longlong)param_1 + 0x59) != '\0') {
              *(int *)(lVar4 + 0xbc) = local_5c;
              iVar6 = iVar6 + 1;
              local_5c = local_5c + 1;
            }
            *(undefined2 *)(lVar4 + 0xe0) = local_32;
            *param_3 = '\x01';
          }
        }
        local_64 = local_64 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (0 < iVar6) {
      if (*(char *)((longlong)param_1 + 0x59) != '\0') {
        local_60 = 0;
        *(undefined1 *)((longlong)param_1 + 0x59) = 0;
        if (*param_2 != 0) {
          FUN_01cc6030(*param_2);
          if (param_1[0x12] != 0) {
            FUN_00410f20(param_1[0x12]);
          }
        }
        if ((char)param_1[0xb] == '\0') {
          uVar3 = 0;
          lVar4 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,3,*(undefined1 *)((longlong)param_1 + 0xa3),0);
          *param_2 = lVar4;
        }
        else {
          uVar3 = 0;
          lVar4 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,1,*(undefined1 *)((longlong)param_1 + 0xa3),0);
          *param_2 = lVar4;
        }
        FUN_01cc6020(*param_2);
        uVar7 = (uint7)((ulonglong)uVar3 >> 8);
        uVar8 = (uint7)((ulonglong)in_stack_ffffffffffffff50 >> 8);
        if ((char)param_1[0xb] == '\0') {
          in_stack_ffffffffffffff50 = (ulonglong)uVar8 << 8;
          FUN_01cc31d0(*(undefined8 *)(*param_2 + 8),iVar6,0,2,(ulonglong)uVar7 << 8,
                       in_stack_ffffffffffffff50,0,1);
        }
        else {
          in_stack_ffffffffffffff50 = (ulonglong)uVar8 << 8;
          FUN_01cc31d0(*(undefined8 *)(*param_2 + 8),iVar6,0,2,CONCAT71(uVar7,1),
                       in_stack_ffffffffffffff50,0,1);
        }
        if ((char)param_1[0xb] == '\0') {
          lVar4 = FUN_01cc6f70(&PTR_FUN_010ff460,1,*param_2);
          param_1[0x12] = lVar4;
        }
        else {
          lVar4 = FUN_01cc6f70(&PTR_FUN_010ff630,1,*param_2);
          param_1[0x12] = lVar4;
        }
        FUN_01cc5c60(*param_2);
        iVar1 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
        local_64 = 0;
        if (-1 < iVar1 + -1) {
          do {
            uVar3 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],local_64);
            plVar5 = (longlong *)FUN_004113f0(uVar3,&PTR_FUN_01105a20);
            if (*(int *)((longlong)plVar5 + 0xbc) == -1) {
              *(undefined4 *)(plVar5 + 0x17) = 0xffffffff;
            }
            else {
              uVar3 = FUN_01cc5cc0(*param_2);
              (**(code **)(*plVar5 + 0x10))(plVar5,uVar3,*param_2);
              FUN_01cc09f0(plVar5[8],plVar5[1]);
              *(int *)(plVar5 + 0x17) = local_60;
              if (local_60 == 0) {
                (**(code **)(*(longlong *)param_1[0x12] + 0x10))
                          ((longlong *)param_1[0x12],plVar5[8],0);
                lVar4 = FUN_01cc80a0(param_1[0x12]);
                param_1[0x13] = lVar4;
              }
              local_60 = local_60 + 1;
              if (((char)param_1[0xb] != '\0') && (local_64 == *(int *)((longlong)param_1 + 0x74)))
              {
                *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((longlong)plVar5 + 0xbc);
              }
            }
            local_64 = local_64 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      FUN_012a3d00(param_1,local_32,param_2);
      iVar1 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
      local_64 = 0;
      if (-1 < iVar1 + -1) {
        do {
          uVar3 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],local_64);
          lVar4 = FUN_004113f0(uVar3,&PTR_FUN_01105a20);
          if (*(longlong *)(lVar4 + 0xd8) != 0) {
            FUN_004095f0(*(longlong *)(lVar4 + 0xd8),
                         (uint)*(ushort *)(lVar4 + 0xe0) *
                         (uint)(byte)PTR_DAT_02004838[*(byte *)(lVar4 + 0xe2)]);
          }
          *(undefined8 *)(lVar4 + 0xd8) = 0;
          local_64 = local_64 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_00e17810(param_1 + 0x14,&local_30,1);
      if ((local_4a == '\0') && (0.5 < local_30 * 10.0)) {
        uVar3 = FUN_004113f0(param_1[2],&PTR_FUN_010dee68);
        uVar3 = FUN_0065b870(uVar3);
        thunk_FUN_0413e052(uVar3,0x534,0,0);
      }
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
  } while (((local_4a == '\0') && (*(char *)((longlong)param_1 + 0x22) != '\0')) &&
          (*param_3 != '\0'));
  FUN_00410f20(param_1[0x12]);
  param_1[0x12] = 0;
  return;
}

