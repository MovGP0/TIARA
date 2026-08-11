/* Ghidra address: 00692940 */
/* Ghidra symbol: FUN_00692940 */


void FUN_00692940(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  int local_a0 [4];
  undefined1 *local_90;
  longlong *local_80;
  longlong *local_78;
  undefined1 local_70 [14];
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60 [4];
  int local_5c;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [4];
  int local_3c;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  longlong *local_20;
  
  local_90 = auStack_d8;
  plVar5 = (longlong *)FUN_00777cd0();
  cVar2 = (**(code **)(*plVar5 + 0x90))(plVar5);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))(*(longlong **)(param_1 + 0x10));
    if (cVar2 == '\0') {
      local_62 = 5;
    }
    else {
      cVar2 = FUN_006926e0(param_1);
      if (cVar2 == '\0') {
        if (*(char *)(param_1 + 100) == '\0') {
          local_62 = 2;
        }
        else {
          local_62 = 3;
        }
      }
      else {
        local_62 = 4;
      }
    }
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))(*(longlong **)(param_1 + 0x10));
    if (cVar2 == '\0') {
      local_61 = 0xe;
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      pcVar6 = (code *)FUN_00411550(uVar7,0xffb0);
      cVar2 = (*pcVar6)(uVar7);
      if (cVar2 == '\0') {
        if (*(char *)(param_1 + 0x38) == '\0') {
          local_61 = 0xb;
        }
        else {
          local_61 = 0xc;
        }
      }
      else {
        local_61 = 0xd;
      }
    }
    local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    (**(code **)(*local_20 + 0xe0))
              (local_20,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x98),
               *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x9c));
    uVar3 = (**(code **)(*local_20 + 0x60))(local_20);
    uVar4 = (**(code **)(*local_20 + 0x48))(local_20);
    local_b8 = CONCAT44(local_b8._4_4_,uVar4);
    FUN_004238d0(&local_30,0,0,uVar3);
    plVar5 = (longlong *)FUN_00777cd0();
    (**(code **)(*plVar5 + 0xf0))(plVar5,local_70,local_61);
    cVar2 = FUN_006927d0(param_1);
    if ((cVar2 == '\x01') && (*(longlong *)(param_1 + 0x68) != 0)) {
      thunk_FUN_03e49910(*(undefined8 *)(param_1 + 0x68),local_60);
      uVar7 = FUN_00786090(param_1);
      thunk_FUN_03e49910(uVar7,local_40);
      local_24 = local_5c - local_3c;
      uVar7 = FUN_00777cd0();
      uVar8 = FUN_00609e10(local_20);
      uVar8 = FUN_005ffa40(uVar8);
      local_b8 = 0;
      local_b0 = 0;
      FUN_00778dc0(uVar7,uVar8,local_70,&local_30);
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x9c);
      local_b8._0_4_ = iVar1;
      FUN_004238d0(&local_30,0,iVar1 - (local_34 - local_54),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x98));
      local_78 = (longlong *)FUN_00609e10(local_20);
      FUN_005fdcb0(local_78[0x10],0);
      uVar7 = FUN_00777cd0();
      uVar3 = FUN_007793c0(uVar7,0xff00000f);
      FUN_005fdab0(local_78[0x10],uVar3);
      (**(code **)(*local_78 + 0xa8))(local_78,&local_30);
      uVar3 = (**(code **)(*local_20 + 0x60))(local_20);
      uVar4 = (**(code **)(*local_20 + 0x48))(local_20);
      local_b8 = CONCAT44(local_b8._4_4_,uVar4);
      FUN_004238d0(&local_30,0,0,uVar3);
      local_24 = local_5c - local_3c;
    }
    else {
      uVar7 = FUN_00777cd0();
      uVar8 = FUN_00609e10(local_20);
      uVar8 = FUN_005ffa40(uVar8);
      local_b8 = 0;
      local_b0 = 0;
      FUN_00778dc0(uVar7,uVar8,local_70,&local_30);
    }
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (((*(byte *)(plVar5 + 0x59) & 2) == 0) && (*(longlong *)(param_1 + 0x70) == 0)) {
      (**(code **)(*plVar5 + 0xe0))(plVar5,&local_30);
      FUN_00423b10(&local_30,0xfffffffd,0xfffffffd);
      FUN_00692750(param_1,local_a0);
      local_28 = local_a0[0] + -2;
      local_80 = (longlong *)FUN_00609e10(local_20);
      FUN_005fdab0(local_80[0x10],*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 200));
      (**(code **)(*local_80 + 0xa8))(local_80,&local_30);
    }
    cVar2 = FUN_006927d0(param_1);
    if (cVar2 != '\x01') {
      plVar5 = (longlong *)FUN_00777cd0();
      (**(code **)(*plVar5 + 0xf0))(plVar5,local_70,local_62);
      uVar7 = FUN_00777cd0();
      uVar8 = FUN_00609e10(local_20);
      uVar8 = FUN_005ffa40(uVar8);
      FUN_00692750(param_1,local_a0);
      local_b8 = 0;
      local_b0 = 0;
      FUN_00778dc0(uVar7,uVar8,local_70,local_a0);
    }
    uVar7 = FUN_00786090(param_1);
    lVar9 = thunk_FUN_041b2403(uVar7,0x147,0,0);
    if ((lVar9 < 0) || (*(longlong *)(param_1 + 0x70) != 0)) {
      if (*(longlong *)(param_1 + 0x70) != 0) {
        uVar7 = FUN_00786090(param_1);
        thunk_FUN_03e49910(uVar7,&local_30);
        thunk_FUN_03e49910(*(undefined8 *)(param_1 + 0x70),&local_50);
        FUN_00423b50(&local_50,-local_30,-local_2c);
        uVar7 = FUN_005ffa40(param_2);
        local_b8 = CONCAT44(local_b8._4_4_,local_44);
        thunk_FUN_041a27b3(uVar7,local_50,local_4c,local_48);
      }
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))
                (*(longlong **)(param_1 + 0x10),&local_30);
      FUN_00423b10(&local_30,0xfffffffd,0xfffffffd);
      FUN_00692750(param_1,local_a0);
      local_28 = local_a0[0] + -2;
      uVar7 = FUN_005ffa40(param_2);
      local_b8 = CONCAT44(local_b8._4_4_,local_24);
      thunk_FUN_041a27b3(uVar7,local_30,local_2c,local_28);
    }
    (**(code **)(*param_2 + 0x88))(param_2,0,0,local_20);
    FUN_00410f20(local_20);
  }
  return;
}

