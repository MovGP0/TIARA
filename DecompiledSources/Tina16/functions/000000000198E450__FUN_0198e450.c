/* Ghidra address: 0198e450 */
/* Ghidra symbol: FUN_0198e450 */


void FUN_0198e450(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [16];
  undefined1 *local_b0;
  int local_84;
  undefined8 local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
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
  longlong *local_30;
  
  local_b0 = auStack_108;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  uVar3 = FUN_0069e8a0();
  local_30 = (longlong *)FUN_01a973b0(0,&PTR_FUN_01a96ef0,uVar3,param_1 + 0xa4);
  uVar3 = FUN_0069e8a0();
  uVar3 = FUN_0069dc70(uVar3);
  local_5c = thunk_FUN_03e5bd07(uVar3,0x58);
  uVar3 = FUN_0069e8a0();
  uVar3 = FUN_0069dc70(uVar3);
  local_60 = thunk_FUN_03e5bd07(uVar3,0x5a);
  FUN_01a98060(local_30,&local_50);
  iVar2 = FUN_0040c770(((double)local_5c / 25.4) * *(double *)(param_1 + 0x48));
  local_50 = local_50 + iVar2;
  iVar2 = FUN_0040c770(((double)local_60 / 25.4) * *(double *)(param_1 + 0x38));
  local_4c = local_4c + iVar2;
  iVar2 = FUN_0040c770(((double)local_5c / 25.4) * *(double *)(param_1 + 0x50));
  local_48 = local_48 - iVar2;
  iVar2 = FUN_0040c770(((double)local_60 / 25.4) * *(double *)(param_1 + 0x40));
  local_44 = local_44 - iVar2;
  (**(code **)(*local_30 + 0x10))(local_30,&local_50);
  local_e8 = CONCAT44(local_e8._4_4_,local_44);
  FUN_004238d0(local_c0,local_50,local_4c,local_48);
  local_80 = thunk_FUN_0411fefb(local_c0);
  local_54 = ((*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa4)) - *(int *)(param_1 + 0xb4)) -
             *(int *)(param_1 + 0xbc);
  local_58 = ((*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xa8)) - *(int *)(param_1 + 0xb8)) -
             *(int *)(param_1 + 0xc0);
  local_64 = *(int *)(param_1 + 0xa4) + *(int *)(param_1 + 0xb4);
  local_68 = *(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0xb8);
  local_74 = 1;
  iVar2 = local_58 / *(int *)(param_1 + 0xa0);
  local_70 = 0;
  if (-1 < iVar2 + -1) {
    do {
      iVar5 = local_54 / *(int *)(param_1 + 0x9c);
      local_6c = 0;
      if (-1 < iVar5 + -1) {
        do {
          if (1 < local_74) {
            uVar3 = FUN_0069e8a0();
            FUN_0069d690(uVar3);
          }
          if (*(longlong *)PTR_DAT_02002660 != 0) {
            FUN_00441920(&local_d0,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
            FUN_0043f750(&local_d8,local_74);
            local_e8 = local_d8;
            FUN_00416cd0(&local_c8,3,local_d0,L", page ");
            FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02002660 + 0x6c8),local_c8);
            FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
            lVar4 = FUN_0069e8a0();
            if (*(char *)(lVar4 + 0x39) != '\0') {
              FUN_0198ece0(0,local_b0);
              goto LAB_0198eca9;
            }
          }
          local_40 = local_64 + local_6c * *(int *)(param_1 + 0x9c);
          local_3c = local_68 + local_70 * *(int *)(param_1 + 0xa0);
          local_38 = local_64 + (local_6c + 1) * *(int *)(param_1 + 0x9c);
          local_34 = local_68 + (local_70 + 1) * *(int *)(param_1 + 0xa0);
          (**(code **)(*local_30 + 0x18))(local_30,&local_40);
          FUN_00b95860(&local_40,0xffffffce,0xffffffce);
          local_38 = local_38 + 100;
          local_34 = local_34 + 100;
          uVar3 = FUN_0069e8a0();
          uVar3 = FUN_0069dc70(uVar3);
          thunk_FUN_039bba01(uVar3,local_80);
          FUN_0199c750(param_1,&local_40,local_30);
          iVar6 = *(int *)(param_1 + 0x10);
          local_84 = 0;
          if (-1 < iVar6 + -1) {
            do {
              uVar3 = FUN_00b94e60(param_1,local_84);
              cVar1 = FUN_0198e380(auStack_108,uVar3);
              if (cVar1 != '\0') {
                FUN_00b94e60(param_1,local_84);
                break;
              }
              local_84 = local_84 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          uVar3 = FUN_0069e8a0();
          uVar3 = FUN_0069dc70(uVar3);
          thunk_FUN_039bba01(uVar3,0);
          FUN_00b95860(&local_40,0x32,0x32);
          local_38 = local_38 + -100;
          local_34 = local_34 + -100;
          (**(code **)(*local_30 + 0xb8))(local_30,0);
          *(undefined1 *)((longlong)local_30 + 0x12e) = 1;
          (**(code **)(*local_30 + 0xe8))(local_30,0);
          (**(code **)(*local_30 + 0xe0))(local_30,0);
          *(undefined1 *)((longlong)local_30 + 0x12e) = 0;
          local_e8 = CONCAT44(local_e8._4_4_,local_68 + local_58);
          (**(code **)(*local_30 + 0x58))(local_30,local_64,local_68,local_64 + local_54);
          if (*(char *)(param_1 + 0x68) != '\0') {
            local_78 = FUN_0040c770(40.0 / *(double *)(param_1 + 0x60));
            (**(code **)(*local_30 + 0x40))(local_30,local_40 + 1,local_3c + local_78 + 1);
            (**(code **)(*local_30 + 0x48))(local_30,local_40 + 1,local_3c + 1);
            (**(code **)(*local_30 + 0x48))(local_30,local_40 + local_78 + 1,local_3c + 1);
            (**(code **)(*local_30 + 0x40))(local_30,local_38 + -1,local_3c + local_78 + 1);
            (**(code **)(*local_30 + 0x48))(local_30,local_38 + -1,local_3c + 1);
            (**(code **)(*local_30 + 0x48))(local_30,(local_38 - local_78) + -1,local_3c + 1);
            (**(code **)(*local_30 + 0x40))(local_30,local_40 + 1,(local_34 - local_78) + -1);
            (**(code **)(*local_30 + 0x48))(local_30,local_40 + 1,local_34 + -1);
            (**(code **)(*local_30 + 0x48))(local_30,local_40 + local_78 + 1,local_34 + -1);
            (**(code **)(*local_30 + 0x40))(local_30,local_38 + -1,(local_34 - local_78) + -1);
            (**(code **)(*local_30 + 0x48))(local_30,local_38 + -1,local_34 + -1);
            (**(code **)(*local_30 + 0x48))(local_30,(local_38 - local_78) + -1,local_34 + -1);
          }
          local_74 = local_74 + 1;
          local_6c = local_6c + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_70 = local_70 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar3 = (**(code **)*local_30)(local_30);
  FUN_00418590(uVar3,&DAT_01a96ff8);
  uVar3 = FUN_0069e8a0();
  uVar3 = FUN_0069dc70(uVar3);
  thunk_FUN_039bba01(uVar3,0);
LAB_0198eca9:
  FUN_00414560(&local_d8,3);
  return;
}

