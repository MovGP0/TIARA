/* Ghidra address: 0174f6d0 */
/* Ghidra symbol: FUN_0174f6d0 */


void FUN_0174f6d0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                 undefined1 param_5,char param_6)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int *piVar6;
  double dVar7;
  double dVar8;
  longlong local_res18;
  undefined8 local_res20;
  undefined1 auStack_118 [32];
  int *local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  int local_c0;
  int local_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  short local_9d;
  short local_9b;
  undefined1 local_99;
  undefined1 local_98;
  undefined1 local_97;
  char local_96;
  undefined4 local_95;
  undefined4 local_8d;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
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
  double local_50;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c [7];
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (param_2 == (longlong *)0x0) {
LAB_0174f73c:
    if (local_res18 == 0) goto LAB_0174fffe;
  }
  else {
    cVar2 = FUN_0175ad40(param_1,param_2);
    if (cVar2 == '\0') goto LAB_0174f73c;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(lVar1 + 0xb) == '\0') {
    if (*(longlong *)(param_1 + 0x40) == 0) {
      uVar5 = FUN_01d06fb0(lVar1,*(undefined1 *)(lVar1 + 0xd1));
      *(undefined8 *)(param_1 + 0x40) = uVar5;
    }
    if ((param_6 != '\0') && (*(longlong *)(param_1 + 0x40) != 0)) {
      cVar2 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28));
      if (-1 < cVar2) {
        cVar2 = FUN_00c3d380(*(undefined8 *)(param_1 + 0x40),&local_a8,&local_9d);
        if (cVar2 != '\0') {
          iVar3 = FUN_00c3c540(local_99,local_98,local_97,local_96);
          if (*(char *)(param_1 + 8) == '\0') {
            cVar2 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28));
            *(int *)(param_1 + 0x10) = (int)cVar2;
          }
          else {
            cVar2 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28));
            *(int *)(param_1 + 0x10) = iVar3 + cVar2;
          }
          FUN_01a9d8b0(param_2,*(undefined1 *)(param_1 + 0x10));
          FUN_01a9a720(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc),
                       *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10));
          uVar4 = FUN_0173cca0(*(undefined8 *)(param_1 + 0x28),param_5,param_6);
          FUN_01a9a770(param_2,uVar4);
          FUN_01a9a780(param_2,*(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xd1),
                       *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xd3));
          local_f8 = (int *)CONCAT71(local_f8._1_7_,local_96);
          local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,local_95);
          local_e8 = local_a8;
          piVar6 = (int *)FUN_01a9f1e0(param_2,local_99,local_98,local_97);
          if ((local_96 == '\0') && (*(char *)(param_1 + 8) != '\0')) {
            FUN_01a9ee60(param_2,piVar6,4,0);
            cVar2 = '\x04';
          }
          else {
            cVar2 = '\0';
          }
          if (*(char *)(param_1 + 10) == '\0') {
            if ((*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x10)) &&
               (cVar2 == *(char *)(param_1 + 0x18))) {
              FUN_00410f20(piVar6);
            }
            else {
              local_f0 = (undefined1 *)0x0;
              local_e8 = CONCAT71(local_e8._1_7_,1);
              local_f8 = piVar6;
              FUN_01a9f420(param_2,(longlong)local_9d,(longlong)local_9b,local_8d);
              *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
              *(char *)(param_1 + 0x18) = cVar2;
            }
          }
          else {
            local_f8 = (int *)CONCAT44(local_f8._4_4_,9);
            FUN_00498350(local_b8,0x23,1,0x2b);
            local_f0 = local_b8;
            local_e8 = CONCAT71(local_e8._1_7_,1);
            local_f8 = piVar6;
            FUN_01a9f420(param_2,(longlong)local_9d,(longlong)local_9b,local_8d);
          }
        }
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                          (*(longlong **)(param_1 + 0x28),param_2);
        (**(code **)(*param_2 + 0xb8))(param_2,uVar4);
        if (*(char *)(*(longlong *)(param_1 + 0x28) + 0xd3) == '\0') {
          iVar3 = 0xf - *(int *)(param_1 + 0x38);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x38);
        }
        dVar8 = ((double)iVar3 * 6.283185307179586) / 16.0;
        dVar7 = (double)FUN_0040bcd0(dVar8);
        local_54 = FUN_0040c770(dVar7 * 2.0);
        local_58 = local_54 + 0x27;
        local_54 = 0x27 - local_54;
        dVar7 = (double)FUN_0040bdd0(dVar8);
        local_5c = FUN_0040c770(dVar7 * 2.0);
        local_60 = local_5c + 5;
        local_5c = 5 - local_5c;
        local_f8 = &local_40;
        local_f0._0_1_ = 1;
        local_e8._0_1_ = 1;
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_54,local_5c,local_3c);
        local_f8 = &local_48;
        local_f0 = (undefined1 *)CONCAT71(local_f0._1_7_,1);
        local_e8 = CONCAT71(local_e8._1_7_,1);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_58,local_60,&local_44);
        (**(code **)(*param_2 + 0xe8))(param_2,3);
        (**(code **)(*param_2 + 0x40))(param_2,local_3c[0],local_40);
        (**(code **)(*param_2 + 0x48))(param_2,local_44,local_48);
        (**(code **)(*param_2 + 0xe8))(param_2,0);
        goto LAB_0174fffe;
      }
    }
    FUN_0174f3e0(param_1,&local_80);
    local_bc = local_78;
    local_c0 = local_80;
    local_50 = (double)(local_78 - local_80) / 2.0 + 0.01;
    local_88 = (local_80 + local_78) / 2;
    local_84 = (local_7c + local_74) / 2;
    if (param_2 != (longlong *)0x0) {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                        (*(longlong **)(param_1 + 0x28),param_2);
      (**(code **)(*param_2 + 0xb8))(param_2,uVar4);
    }
    local_f8 = &local_40;
    local_e8._0_1_ = 1;
    local_f0._0_1_ = local_res18 == 0;
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_c0,local_7c,local_3c);
    local_f8 = &local_48;
    local_f0 = (undefined1 *)CONCAT71(local_f0._1_7_,local_res18 == 0);
    local_e8 = CONCAT71(local_e8._1_7_,1);
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_bc,local_74,&local_44);
    if (param_2 != (longlong *)0x0) {
      local_f8 = &local_68;
      FUN_01a98380(param_2,local_3c[0],local_40,&local_64);
      local_f8 = &local_70;
      FUN_01a98380(param_2,local_44,local_48,&local_6c);
      if (*(char *)((longlong)param_2 + 0x12d) != '\0') goto LAB_0174fffe;
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                        (*(longlong **)(param_1 + 0x28),param_2);
      (**(code **)(*param_2 + 0xb8))(param_2,uVar4);
      uVar5 = thunk_FUN_0412d81c(0xffffff);
      uVar5 = thunk_FUN_041a19a1(param_2[0x29],uVar5);
      if (local_6c < local_64) {
        FUN_01cefdf0(&local_64,&local_6c);
      }
      if (local_70 < local_68) {
        FUN_01cefdf0(&local_68,&local_70);
      }
      local_f8 = (int *)CONCAT44(local_f8._4_4_,local_70);
      thunk_FUN_041d615e(param_2[0x29],local_64,local_68,local_6c);
      FUN_01a9a6f0(param_2,param_2[0x29],uVar5);
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                        (*(longlong **)(param_1 + 0x28),param_2);
      (**(code **)(*param_2 + 0xb8))(param_2,uVar4);
    }
    if (local_res18 != 0) {
      local_f8 = (int *)CONCAT44(local_f8._4_4_,local_44);
      local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,local_48);
      local_e8 = CONCAT44(local_e8._4_4_,1);
      local_e0 = 0x8000;
      local_d8 = 0xfffffffe;
      FUN_01243bf0(local_res18,local_res20,local_3c[0],local_40);
    }
    if (*(char *)(*(longlong *)(param_1 + 0x28) + 0xd3) == '\0') {
      iVar3 = 0xf - *(int *)(param_1 + 0x38);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x38);
    }
    dVar7 = ((double)iVar3 * 6.283185307179586) / 16.0;
    FUN_0174f450(auStack_118,dVar7,&local_88);
    FUN_0174f450(auStack_118,dVar7 + 3.141592653589793,&local_88);
    if (*(char *)(param_1 + 8) != '\0') {
      FUN_0173d380(param_1,param_2,local_res18,local_res20);
    }
  }
LAB_0174fffe:
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

