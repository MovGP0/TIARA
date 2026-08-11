/* Ghidra address: 01758b70 */
/* Ghidra symbol: FUN_01758b70 */


void FUN_01758b70(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                 undefined1 param_5,char param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_res18;
  undefined8 local_res20;
  ulonglong in_stack_ffffffffffffff28;
  undefined4 *puVar8;
  undefined8 in_stack_ffffffffffffff30;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  short local_4d;
  short local_4b;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  char local_46;
  undefined4 local_45;
  undefined4 local_3d;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if ((((param_2 != (longlong *)0x0) && (cVar1 = FUN_0175ad40(param_1,param_2), cVar1 != '\0')) ||
      (local_res18 != 0)) && (lVar6 = param_1[5], *(char *)(lVar6 + 0xb) == '\0')) {
    if (param_6 == '\0') {
      (**(code **)(*param_1 + 8))
                (param_1,&local_68,param_2,param_5,in_stack_ffffffffffffff28 & 0xffffffffffffff00);
      uVar7 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff30 >> 8),1);
      FUN_01d048c0(param_1[5],local_68,local_64,local_2c,&local_30,uVar7,1);
      puVar8 = &local_38;
      uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      FUN_01d048c0(param_1[5],local_60,local_5c,&local_34,puVar8,uVar7,1);
      uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uVar5 = (undefined4)((ulonglong)puVar8 >> 0x20);
      if (param_2 != (longlong *)0x0) {
        uVar4 = (**(code **)(*param_2 + 0xd0))(param_2,0);
        uVar7 = CONCAT44(uVar3,uVar4);
        (**(code **)(*param_2 + 0x60))
                  (param_2,local_2c[0],local_30,local_34,CONCAT44(uVar5,local_38),uVar7);
        uVar5 = (**(code **)(*(longlong *)param_1[5] + 0x2a8))((longlong *)param_1[5],param_2);
        (**(code **)(*param_2 + 0xb8))(param_2,uVar5);
      }
      uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),local_res18 == 0);
      FUN_01d048c0(param_1[5],8,0,local_2c,&local_30,uVar7,1);
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x40))(param_2,local_2c[0],local_30);
      }
      puVar8 = &local_38;
      uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),local_res18 == 0);
      FUN_01d048c0(param_1[5],0x20,0,&local_34,puVar8,uVar7,1);
      uVar5 = (undefined4)((ulonglong)puVar8 >> 0x20);
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x48))(param_2,local_34,local_38);
      }
      if (local_res18 != 0) {
        uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),local_34);
        FUN_01243890(&local_70,local_res18,local_res20,local_2c[0],CONCAT44(uVar5,local_30),uVar7,
                     local_38,1,0x8000);
      }
      uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),local_res18 == 0);
      FUN_01d048c0(param_1[5],8,4,local_2c,&local_30,uVar7,1);
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x40))(param_2,local_2c[0],local_30);
      }
      puVar8 = &local_38;
      uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),local_res18 == 0);
      FUN_01d048c0(param_1[5],8,0xfffffffc,&local_34,puVar8,uVar7,1);
      uVar5 = (undefined4)((ulonglong)puVar8 >> 0x20);
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x48))(param_2,local_34,local_38);
      }
      if (local_res18 != 0) {
        uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),local_34);
        FUN_01243890(&local_78,local_res18,local_res20,local_2c[0],CONCAT44(uVar5,local_30),uVar7,
                     local_38,1,0x8000);
      }
      local_2c[0] = local_34;
      local_30 = local_38;
      puVar8 = &local_38;
      uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),local_res18 == 0);
      FUN_01d048c0(param_1[5],0x20,0xfffffffc,&local_34,puVar8,uVar7,1);
      uVar5 = (undefined4)((ulonglong)puVar8 >> 0x20);
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x48))(param_2,local_34,local_38);
      }
      if (local_res18 != 0) {
        uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),local_34);
        FUN_01243890(&local_80,local_res18,local_res20,local_2c[0],CONCAT44(uVar5,local_30),uVar7,
                     local_38,1,0x8000);
      }
      local_2c[0] = local_34;
      local_30 = local_38;
      puVar8 = &local_38;
      uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),local_res18 == 0);
      FUN_01d048c0(param_1[5],0x20,4,&local_34,puVar8,uVar7,1);
      uVar5 = (undefined4)((ulonglong)puVar8 >> 0x20);
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x48))(param_2,local_34,local_38);
      }
      if (local_res18 != 0) {
        uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),local_34);
        FUN_01243890(&local_88,local_res18,local_res20,local_2c[0],CONCAT44(uVar5,local_30),uVar7,
                     local_38,1,0x8000);
      }
      local_2c[0] = local_34;
      local_30 = local_38;
      puVar8 = &local_38;
      uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),local_res18 == 0);
      FUN_01d048c0(param_1[5],8,4,&local_34,puVar8,uVar7,1);
      uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uVar5 = (undefined4)((ulonglong)puVar8 >> 0x20);
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x48))(param_2,local_34,local_38);
      }
      if (local_res18 != 0) {
        FUN_01243890(&local_90,local_res18,local_res20,local_2c[0],CONCAT44(uVar5,local_30),
                     CONCAT44(uVar3,local_34),local_38,1,0x8000);
      }
      if (((*(char *)((longlong)param_1 + 0xb) != '\0') && ((char)param_1[1] != '\0')) &&
         ((*PTR_DAT_020052b8 == '\0' || (*PTR_DAT_020023b0 == '\0')))) {
        FUN_0173d380(param_1,param_2,local_res18,local_res20);
      }
    }
    else {
      if (param_1[8] == 0) {
        lVar6 = FUN_01d06fb0(lVar6,*(undefined1 *)(lVar6 + 0xd1));
        param_1[8] = lVar6;
      }
      uVar5 = (undefined4)(in_stack_ffffffffffffff28 >> 0x20);
      if (((param_1[8] != 0) && (cVar1 = FUN_01d07320(param_1[5]), -1 < cVar1)) &&
         (cVar1 = FUN_00c3d380(param_1[8],&local_58,&local_4d), cVar1 != '\0')) {
        iVar2 = FUN_00c3c540(local_49,local_48,local_47,local_46);
        if ((char)param_1[1] == '\0') {
          cVar1 = FUN_01d07320(param_1[5]);
          *(int *)(param_1 + 2) = (int)cVar1;
        }
        else {
          cVar1 = FUN_01d07320(param_1[5]);
          *(int *)(param_1 + 2) = iVar2 + cVar1;
        }
        if (param_2 != (longlong *)0x0) {
          FUN_01a9d8b0(param_2,(char)param_1[2]);
          FUN_01a9a720(param_2,*(undefined4 *)(param_1[5] + 0xc),*(undefined4 *)(param_1[5] + 0x10))
          ;
          uVar3 = FUN_0173cca0(param_1[5],param_5,param_6);
          FUN_01a9a770(param_2,uVar3);
          FUN_01a9a780(param_2,*(undefined1 *)(param_1[5] + 0xd1),*(undefined1 *)(param_1[5] + 0xd3)
                      );
        }
        uVar7 = FUN_01a9f060(local_49,local_48,local_47,local_46,CONCAT44(uVar5,local_45),local_58,
                             (char)param_1[2]);
        if ((local_46 == '\0') && ((char)param_1[1] != '\0')) {
          FUN_01a9e8f0(uVar7,4,0);
          cVar1 = '\x04';
        }
        else {
          cVar1 = '\0';
        }
        (**(code **)(*(longlong *)param_1[4] + 0x10))((longlong *)param_1[4],uVar7);
        if ((*(int *)((longlong)param_1 + 0x14) == (int)param_1[2]) && (cVar1 == (char)param_1[3]))
        {
          FUN_00410f20(uVar7);
        }
        else {
          if (param_2 != (longlong *)0x0) {
            FUN_01a9f420(param_2,(longlong)local_4d,(longlong)local_4b,local_3d,uVar7,0,1);
          }
          *(int *)((longlong)param_1 + 0x14) = (int)param_1[2];
          *(char *)(param_1 + 3) = cVar1;
        }
      }
    }
  }
  FUN_00417840(&local_90,&LAB_00b9fca0,5);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

