/* Ghidra address: 01c74220 */
/* Ghidra symbol: FUN_01c74220 */


void FUN_01c74220(longlong param_1,undefined8 *param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  double dVar11;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 *puVar12;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_30 = *param_2;
  if (*(longlong *)(param_1 + 0x27a8) != 0) {
    lVar6 = FUN_0198d430(*(longlong *)(param_1 + 0x27a8));
    if (lVar6 != 0) {
      cVar9 = *PTR_DAT_02005700;
      sVar2 = thunk_FUN_03cbc5c8(0x11);
      if (((longlong)sVar2 & 0x8000U) != 0) {
        cVar9 = cVar9 == '\0';
      }
      if (cVar9 == '\0') {
        sVar2 = thunk_FUN_03cbc5c8(0x10);
        bVar10 = ((longlong)sVar2 & 0x8000U) != 0;
        if (bVar10) {
          uVar1 = *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0xa10) + 0x498) + 0x10);
        }
        else {
          uVar1 = *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0xa10) + 0x4b0) + 0x10);
        }
        iVar8 = (uint)uVar1 * 5 * (-param_3 / 0x78);
        if (bVar10) {
          uVar5 = FUN_00b905e0(0,*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa10) + 0x498) +
                                         0x14) + iVar8);
          uVar5 = FUN_00b905f0(uVar5,*(undefined4 *)
                                      (*(longlong *)(*(longlong *)(param_1 + 0xa10) + 0x498) + 0x18)
                              );
          FUN_007fa6c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x498),uVar5);
        }
        else {
          uVar5 = FUN_00b905e0(0,*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa10) + 0x4b0) +
                                         0x14) + iVar8);
          uVar5 = FUN_00b905f0(uVar5,*(undefined4 *)
                                      (*(longlong *)(*(longlong *)(param_1 + 0xa10) + 0x4b0) + 0x18)
                              );
          FUN_007fa6c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x4b0),uVar5);
        }
        uVar7 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
        FUN_01a98210(uVar7,&local_40);
        FUN_00b95860(&local_40,-local_40,-local_3c);
        uVar7 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
        puVar12 = &local_70;
        FUN_01a984b0(uVar7,*(undefined4 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0xa10) + 0x498) + 0x14),
                     *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xa10) + 0x4b0) + 0x14),
                     &local_6c,puVar12);
        uVar5 = (undefined4)((ulonglong)puVar12 >> 0x20);
        FUN_00b95860(&local_40,local_6c,local_70);
        FUN_01c74990(param_1,local_40,local_3c,local_38,CONCAT44(uVar5,local_34));
      }
      else {
        local_68 = FUN_0064d3a0(*(undefined8 *)(param_1 + 0xa10),&local_30);
        (**(code **)(**(longlong **)(param_1 + 0xa10) + 0xe0))
                  (*(longlong **)(param_1 + 0xa10),&local_60);
        iVar8 = (int)local_68;
        if ((((local_60 <= (int)local_68) && (local_5c <= local_68._4_4_)) &&
            ((int)local_68 <= local_58)) && (local_68._4_4_ <= local_54)) {
          uVar7 = CONCAT44(uVar5,local_54);
          FUN_00b956d0(&local_50,local_60,local_5c,local_58,uVar7);
          uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
          if (param_3 < 0) {
            dVar11 = (double)FUN_00b90620((double)*(float *)(param_1 + 0x1924) * 0.9,
                                          0x3fb999999999999a);
            *(float *)(param_1 + 0x1924) = (float)dVar11;
          }
          else {
            dVar11 = (double)FUN_00b90650((double)*(float *)(param_1 + 0x1924) * 1.1,
                                          0x4024000000000000);
            *(float *)(param_1 + 0x1924) = (float)dVar11;
          }
          iVar3 = FUN_0040c840((double)(local_48 - local_50) / (double)*(float *)(param_1 + 0x1924))
          ;
          iVar4 = FUN_0040c840((double)(local_44 - local_4c) / (double)*(float *)(param_1 + 0x1924))
          ;
          uVar7 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
          FUN_01a98210(uVar7,&local_40);
          local_40 = FUN_0040c840(((double)iVar8 / (double)(local_48 - local_50)) *
                                  (double)(iVar3 - (local_38 - local_40)));
          local_40 = *(int *)(param_1 + 0x1b60) - local_40;
          local_3c = FUN_0040c840(((double)local_68._4_4_ / (double)(local_44 - local_4c)) *
                                  (double)(iVar4 - (local_34 - local_3c)));
          local_3c = *(int *)(param_1 + 0x1b64) - local_3c;
          local_38 = local_40 + iVar3;
          local_34 = local_3c + iVar4;
          FUN_00b95860(&local_50,-local_50,-local_4c);
          FUN_01c74990(param_1,local_40,local_3c,local_38,CONCAT44(uVar5,local_34));
          FUN_0064e770(*(undefined8 *)(param_1 + 0xa10));
        }
      }
    }
  }
  return;
}

