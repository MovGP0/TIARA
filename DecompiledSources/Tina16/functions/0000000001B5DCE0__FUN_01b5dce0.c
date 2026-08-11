/* Ghidra address: 01b5dce0 */
/* Ghidra symbol: FUN_01b5dce0 */


void FUN_01b5dce0(longlong param_1,longlong *param_2,char param_3,char *param_4)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint7 uVar7;
  ushort *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = (ushort *)0x0;
  *param_4 = '\x01';
  if (*(char *)(param_1 + 0x5b) == '\0') goto code_r0x01b5e14a;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                    (*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c));
  plVar4 = (longlong *)FUN_004113f0(uVar3,&PTR_FUN_011061a0);
  if (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0xa8 + (longlong)*(int *)(param_1 + 0x18) * 8)
      != 0) {
    if (*(char *)(param_1 + 0x5a) != '\0' || param_3 != '\0') {
      if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_00410f20(*(longlong *)(param_1 + 0x80));
      }
      if (*param_2 != 0) {
        FUN_01cc6030(*param_2);
      }
      if (*(char *)(param_1 + 0x58) == '\0') {
        uVar6 = 0;
        lVar5 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,3,1,0);
        *param_2 = lVar5;
      }
      else {
        uVar6 = 0;
        lVar5 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,1,1,0);
        *param_2 = lVar5;
      }
      FUN_01cc6020(*param_2);
      uVar3 = *(undefined8 *)(*param_2 + 8);
      uVar7 = (uint7)(uVar6 >> 8);
      if (*(char *)(param_1 + 0x58) == '\0') {
        uVar3 = FUN_01cc2930(uVar3,plVar4[1],2,0,(ulonglong)uVar7 << 8,0,1,0);
        (**(code **)(*plVar4 + 0x10))(plVar4,uVar3,*param_2);
      }
      else if (*(int *)((longlong)plVar4 + 0x15c) == 1) {
        uVar3 = FUN_01cc2930(uVar3,plVar4[1],2,1,(ulonglong)uVar7 << 8,0,1,0);
        (**(code **)(*plVar4 + 0x10))(plVar4,uVar3,*param_2);
      }
      else {
        FUN_00414b50(&local_30,plVar4[1]);
        uVar1 = *local_30;
        if (uVar1 < 0x57) {
          if (uVar1 == 0x56) {
            uVar2 = 1;
          }
          else if (uVar1 == 0x49) {
            uVar2 = 2;
          }
          else {
            if (uVar1 != 0x52) goto LAB_01b5dee9;
            uVar2 = 4;
          }
        }
        else if (uVar1 == 0x67) {
          uVar2 = 9;
        }
        else if (uVar1 == 0x68) {
          if (local_30[1] == 0x69) {
            uVar2 = 4;
          }
          else if (local_30[1] == 0x6f) {
            uVar2 = 9;
          }
          else {
            uVar2 = 0;
          }
        }
        else {
LAB_01b5dee9:
          uVar2 = 0;
        }
        uVar3 = FUN_01cc2930(uVar3,local_30,2,1,uVar6 & 0xffffffffffffff00,0,uVar2,0);
        (**(code **)(*(longlong *)plVar4[9] + 0x80))((longlong *)plVar4[9],local_30,uVar3);
        uVar3 = (**(code **)(*(longlong *)plVar4[9] + 0x30))
                          ((longlong *)plVar4[9],(int)plVar4[0x2c]);
        lVar5 = FUN_004113f0(uVar3,&PTR_FUN_01cb30c8);
        plVar4[8] = lVar5;
        (**(code **)(*plVar4 + 0x10))(plVar4,lVar5,*param_2);
      }
      if (*(char *)(param_1 + 0x58) == '\0') {
        uVar3 = FUN_01cc6f70(&PTR_FUN_010ff460,1,*param_2);
        *(undefined8 *)(param_1 + 0x80) = uVar3;
      }
      else {
        uVar3 = FUN_01cc6f70(&PTR_FUN_010ff630,1,*param_2);
        *(undefined8 *)(param_1 + 0x80) = uVar3;
      }
    }
    FUN_00e1d3b0(param_1 + 0xa0,param_1 + 0xa8);
    if ((*param_4 != '\0') && (*(char *)(param_1 + 0x5b) != '\0')) {
      if (*(char *)(param_1 + 0x58) == '\0') {
        FUN_01cc4620(*param_2,*(undefined8 *)(param_1 + 0xa0));
        FUN_01cc46b0(*param_2,0,*(undefined8 *)(param_1 + 0xa8));
        *(double *)(param_1 + 0x60) = *(double *)(param_1 + 0x60) + *(double *)(param_1 + 0xa0);
      }
      else {
        uVar3 = FUN_00c43d20(*(undefined8 *)(param_1 + 0x60));
        FUN_01cc47e0(*param_2,uVar3);
        local_28 = *(undefined8 *)(param_1 + 0xa0);
        local_20 = *(undefined8 *)(param_1 + 0xa8);
        FUN_01cc4e50(*param_2,0,local_28,local_20);
        *(double *)(param_1 + 0x60) = *(double *)(param_1 + 0x60) + 1e-09;
        uVar3 = FUN_00c43d20(*(undefined8 *)(param_1 + 0x60));
        FUN_01cc47e0(*param_2,uVar3);
        FUN_01cc4e50(*param_2,0,local_28,local_20);
        *(double *)(param_1 + 0x60) = *(double *)(param_1 + 0x60) + 1e-09;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x5a) = 0;
code_r0x01b5e14a:
  FUN_00414480(&local_30);
  return;
}

