/* Ghidra address: 01750930 */
/* Ghidra symbol: FUN_01750930 */


void FUN_01750930(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                 undefined1 param_5,char param_6)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong local_res18;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 *puVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 in_stack_ffffffffffffff50;
  undefined7 uVar17;
  undefined8 uVar16;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  short local_5d;
  short local_5b;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  char local_56;
  undefined4 local_55;
  undefined4 local_4d;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_78 = 0;
  local_70 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if ((((param_2 != (longlong *)0x0) && (cVar2 = FUN_0175ad40(param_1,param_2), cVar2 != '\0')) ||
      (local_res18 != 0)) &&
     (plVar1 = *(longlong **)(param_1 + 0x28), *(char *)((longlong)plVar1 + 0xb) == '\0')) {
    if (param_6 == '\0') {
      if (param_2 != (longlong *)0x0) {
        uVar8 = (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2);
        (**(code **)(*param_2 + 0xb8))(param_2,uVar8);
        (**(code **)(*param_2 + 0xe8))(param_2,0);
      }
      uVar12 = (int)*(uint *)(param_1 + 0x38) >> 0x1f;
      iVar4 = (*(uint *)(param_1 + 0x38) ^ uVar12) - uVar12;
      if (*(char *)(param_1 + 9) == '\0') {
        if ((iVar4 < 0x19) || (*(char *)(param_1 + 8) != '\0')) {
          uVar8 = 0xffffff;
          uVar11 = 0xffffff;
        }
        else if (iVar4 < 0x32) {
          uVar8 = 0x808080;
          uVar11 = 0xffff;
        }
        else if (iVar4 < 0x4b) {
          uVar8 = 0xffff;
          uVar11 = 0xffff;
        }
        else if (iVar4 < 0x65) {
          uVar8 = 0xffff;
          uVar11 = 0xffffff;
        }
        else {
          uVar8 = 0xffffff;
          uVar11 = 0xffffff;
        }
      }
      else {
        uVar8 = 0xffffff;
        uVar11 = 0xffffff;
      }
      sVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))(*(longlong **)(param_1 + 0x28));
      uVar17 = (undefined7)((ulonglong)in_stack_ffffffffffffff50 >> 8);
      if (sVar3 == 0x6f) {
        uVar16 = CONCAT71(uVar17,local_res18 == 0);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),7,0xfffffff7,&local_2c,&local_30,uVar16,1);
        puVar13 = &local_38;
        uVar16 = CONCAT71((int7)((ulonglong)uVar16 >> 8),local_res18 == 0);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x19,9,&local_34,puVar13,uVar16,1);
        uVar7 = (undefined4)((ulonglong)puVar13 >> 0x20);
      }
      else {
        uVar16 = CONCAT71(uVar17,local_res18 == 0);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),8,0xc,&local_2c,&local_30,uVar16,1);
        puVar13 = &local_38;
        uVar16 = CONCAT71((int7)((ulonglong)uVar16 >> 8),local_res18 == 0);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x20,0xfffffff4,&local_34,puVar13,uVar16,1);
        uVar7 = (undefined4)((ulonglong)puVar13 >> 0x20);
      }
      if (param_2 != (longlong *)0x0) {
        FUN_01a98380(param_2,local_2c,local_30,&local_3c,&local_40);
        piVar14 = &local_48;
        FUN_01a98380(param_2,local_34,local_38,&local_44,piVar14);
        uVar7 = (undefined4)((ulonglong)piVar14 >> 0x20);
        if (*(char *)((longlong)param_2 + 0x12d) != '\0') goto LAB_017513d8;
        uVar9 = FUN_005fbf20(uVar8);
        uVar9 = thunk_FUN_0412a071(param_2[0x29],uVar9);
        uVar10 = FUN_005fbf20(uVar11);
        uVar10 = thunk_FUN_03e3a7dc(param_2[0x29],uVar10);
        uVar11 = FUN_005fdb10(DAT_0210ffe0);
        uVar11 = thunk_FUN_041a19a1(param_2[0x29],uVar11);
        if (local_44 < local_3c) {
          FUN_01cefdf0(&local_3c,&local_44);
        }
        if (local_48 < local_40) {
          FUN_01cefdf0(&local_40,&local_48);
        }
        uVar15 = CONCAT44(uVar7,local_48);
        thunk_FUN_041d615e(param_2[0x29],local_3c,local_40,local_44,uVar15);
        uVar7 = (undefined4)((ulonglong)uVar15 >> 0x20);
        thunk_FUN_041a19a1(param_2[0x29],uVar11);
        thunk_FUN_0412a071(param_2[0x29],uVar9);
        thunk_FUN_03e3a7dc(param_2[0x29],uVar10);
      }
      if (local_res18 != 0) {
        uVar16 = CONCAT44((int)((ulonglong)uVar16 >> 0x20),local_38);
        FUN_01243bf0(local_res18,local_res20,local_2c,local_30,CONCAT44(uVar7,local_34),uVar16,1,
                     0x8000,uVar8);
      }
      if (param_2 != (longlong *)0x0) {
        uVar8 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                          (*(longlong **)(param_1 + 0x28),param_2);
        (**(code **)(*param_2 + 0xb8))(param_2,uVar8);
      }
      sVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))(*(longlong **)(param_1 + 0x28));
      uVar17 = (undefined7)((ulonglong)uVar16 >> 8);
      if (sVar3 == 0x6f) {
        uVar11 = CONCAT71(uVar17,local_res18 == 0);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),9,0xfffffffa,&local_2c,&local_30,uVar11,1);
        puVar13 = &local_38;
        uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),local_res18 == 0);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x16,6,&local_34,puVar13,uVar11,1);
        uVar8 = (undefined4)((ulonglong)puVar13 >> 0x20);
      }
      else {
        uVar11 = CONCAT71(uVar17,local_res18 == 0);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0xc,0xfffffff8,&local_2c,&local_30,uVar11,1);
        puVar13 = &local_38;
        uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),local_res18 == 0);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x1c,8,&local_34,puVar13,uVar11,1);
        uVar8 = (undefined4)((ulonglong)puVar13 >> 0x20);
      }
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x40))(param_2,local_2c,local_30);
        (**(code **)(*param_2 + 0x48))(param_2,local_34,local_38);
      }
      if (local_res18 != 0) {
        uVar11 = CONCAT44((int)((ulonglong)uVar11 >> 0x20),local_34);
        FUN_01243890(&local_70,local_res18,local_res20,local_2c,CONCAT44(uVar8,local_30),uVar11,
                     local_38,1,0x8000);
      }
      sVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))(*(longlong **)(param_1 + 0x28));
      uVar17 = (undefined7)((ulonglong)uVar11 >> 8);
      if (sVar3 == 0x6f) {
        uVar11 = CONCAT71(uVar17,local_res18 == 0);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),9,6,&local_2c,&local_30,uVar11,1);
        puVar13 = &local_38;
        uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),local_res18 == 0);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x16,0xfffffffa,&local_34,puVar13,uVar11,1);
        uVar7 = (undefined4)((ulonglong)uVar11 >> 0x20);
        uVar8 = (undefined4)((ulonglong)puVar13 >> 0x20);
      }
      else {
        uVar11 = CONCAT71(uVar17,local_res18 == 0);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0xc,8,&local_2c,&local_30,uVar11,1);
        puVar13 = &local_38;
        uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),local_res18 == 0);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x1c,0xfffffff8,&local_34,puVar13,uVar11,1);
        uVar7 = (undefined4)((ulonglong)uVar11 >> 0x20);
        uVar8 = (undefined4)((ulonglong)puVar13 >> 0x20);
      }
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x40))(param_2,local_2c,local_30);
        (**(code **)(*param_2 + 0x48))(param_2,local_34,local_38);
      }
      if (local_res18 != 0) {
        FUN_01243890(&local_78,local_res18,local_res20,local_2c,CONCAT44(uVar8,local_30),
                     CONCAT44(uVar7,local_34),local_38,1,0x8000);
      }
      if (((*(char *)(param_1 + 0xb) != '\0') && (*(char *)(param_1 + 8) != '\0')) &&
         ((*(char *)(*(longlong *)(param_1 + 0x28) + 0x3b9) == '\0' &&
          ((*PTR_DAT_020052b8 == '\0' || (*PTR_DAT_020023b0 == '\0')))))) {
        FUN_0173d380(param_1,param_2,local_res18,local_res20);
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x40) == 0) {
        uVar11 = FUN_01d06fb0(plVar1,*(undefined1 *)((longlong)plVar1 + 0xd1));
        *(undefined8 *)(param_1 + 0x40) = uVar11;
      }
      if (((*(longlong *)(param_1 + 0x40) != 0) &&
          (cVar2 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28)), -1 < cVar2)) &&
         (cVar2 = FUN_00c3d380(*(undefined8 *)(param_1 + 0x40),&local_68,&local_5d), cVar2 != '\0'))
      {
        iVar4 = FUN_00c3c520(local_59,local_58,local_57);
        iVar5 = FUN_00c3c540(local_59,local_58,local_57,local_56);
        uVar12 = (int)*(uint *)(param_1 + 0x38) >> 0x1f;
        iVar6 = (*(uint *)(param_1 + 0x38) ^ uVar12) - uVar12;
        if (iVar6 < 0x65) {
          if (iVar6 < 0x1a) {
            cVar2 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28));
            *(int *)(param_1 + 0x10) = (int)cVar2;
          }
          else {
            cVar2 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28));
            *(int *)(param_1 + 0x10) = iVar4 + cVar2;
          }
        }
        else {
          cVar2 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28));
          *(int *)(param_1 + 0x10) = iVar5 + cVar2;
        }
        if (param_2 != (longlong *)0x0) {
          FUN_01a9d8b0(param_2,*(undefined1 *)(param_1 + 0x10));
          FUN_01a9a720(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc),
                       *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10));
          uVar7 = FUN_0173cca0(*(undefined8 *)(param_1 + 0x28),param_5,param_6);
          FUN_01a9a770(param_2,uVar7);
          FUN_01a9a780(param_2,*(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xd1),
                       *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xd3));
        }
        uVar11 = FUN_01a9f060(local_59,local_58,local_57,local_56,CONCAT44(uVar8,local_55),local_68,
                              *(undefined1 *)(param_1 + 0x10));
        if ((local_56 == '\0') && (*(char *)(param_1 + 8) != '\0')) {
          FUN_01a9e8f0(uVar11,4,0);
          cVar2 = '\x04';
        }
        else {
          cVar2 = '\0';
        }
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),uVar11)
        ;
        if ((*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x10)) &&
           (cVar2 == *(char *)(param_1 + 0x18))) {
          FUN_00410f20(uVar11);
        }
        else {
          if (param_2 != (longlong *)0x0) {
            FUN_01a9f420(param_2,(longlong)local_5d,(longlong)local_5b,local_4d,uVar11,0,1);
          }
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
          *(char *)(param_1 + 0x18) = cVar2;
        }
      }
    }
  }
LAB_017513d8:
  FUN_00417840(&local_78,&LAB_00b9fca0,2);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

