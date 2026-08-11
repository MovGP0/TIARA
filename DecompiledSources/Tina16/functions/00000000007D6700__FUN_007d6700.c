/* Ghidra address: 007d6700 */
/* Ghidra symbol: FUN_007d6700 */


void FUN_007d6700(longlong param_1,undefined4 param_2,longlong *param_3,int param_4,int param_5,
                 undefined4 param_6,char param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_54;
  longlong *local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    local_54 = param_2;
    local_50 = param_3;
    if (param_7 == '\0') {
      if (*(char *)(param_1 + 0xb4) == '\0') {
        if (*(longlong *)(param_1 + 0xc0) == 0) {
          uVar4 = FUN_00608c80(&PTR_FUN_005f92e8,1);
          *(undefined8 *)(param_1 + 0xc0) = uVar4;
          plVar7 = *(longlong **)(param_1 + 0xc0);
          FUN_0060b9b0(plVar7,1);
          (**(code **)(*plVar7 + 0x88))(plVar7,*(undefined4 *)(param_1 + 0x94));
          (**(code **)(*plVar7 + 0x70))(plVar7,*(undefined4 *)(param_1 + 0x90));
        }
        lVar6 = FUN_00609e10(*(undefined8 *)(param_1 + 0xc0));
        FUN_005fdab0(*(undefined8 *)(lVar6 + 0x80),0xffffff);
        plVar7 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0xc0));
        local_88 = *(undefined4 *)(param_1 + 0x90);
        FUN_004238d0(local_48,0,0,*(undefined4 *)(param_1 + 0x94));
        (**(code **)(*plVar7 + 0xa8))(plVar7,local_48);
        uVar4 = FUN_007d56e0(param_1);
        uVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0xc0));
        uVar5 = FUN_005ffa40(uVar5);
        local_88 = 0;
        local_80 = (ulonglong)local_80._4_4_ << 0x20;
        local_78 = 0;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_60 = 0;
        thunk_FUN_0413e9f5(uVar4,local_54,uVar5,0);
        local_88 = param_5 + *(int *)(param_1 + 0x90);
        FUN_004238d0(local_38,param_4,param_5,param_4 + *(int *)(param_1 + 0x94));
        uVar4 = FUN_00609e10(*(undefined8 *)(param_1 + 0xc0));
        uVar4 = FUN_005ffa40(uVar4);
        FUN_005fdab0(local_50[0x10],0xff000014);
        uVar5 = FUN_005ffa40(local_50);
        thunk_FUN_0412a071(uVar5,0xffffff);
        thunk_FUN_03e3a7dc(uVar5,0);
        local_88 = *(undefined4 *)(param_1 + 0x90);
        local_78 = 0;
        local_70 = 0;
        local_68 = 0xe20746;
        local_80 = uVar4;
        thunk_FUN_0415fcd2(uVar5,param_4 + 1,param_5 + 1,*(undefined4 *)(param_1 + 0x94));
        FUN_005fdab0(local_50[0x10],0xff000010);
        uVar5 = FUN_005ffa40(local_50);
        thunk_FUN_0412a071(uVar5,0xffffff);
        thunk_FUN_03e3a7dc(uVar5,0);
        local_88 = *(undefined4 *)(param_1 + 0x90);
        local_78 = 0;
        local_70 = 0;
        local_68 = 0xe20746;
        local_80 = uVar4;
        thunk_FUN_0415fcd2(uVar5,param_4,param_5,*(undefined4 *)(param_1 + 0x94));
      }
      else {
        if (*(longlong *)(param_1 + 200) == 0) {
          uVar4 = FUN_00608c80(&PTR_FUN_005f92e8,1);
          *(undefined8 *)(param_1 + 200) = uVar4;
          plVar7 = *(longlong **)(param_1 + 200);
          FUN_0060bbf0(plVar7,7);
          (**(code **)(*plVar7 + 0x88))(plVar7,*(undefined4 *)(param_1 + 0x94));
          (**(code **)(*plVar7 + 0x70))(plVar7,*(undefined4 *)(param_1 + 0x90));
          (**(code **)(*plVar7 + 0xf8))(plVar7,0);
          *(undefined1 *)(plVar7 + 10) = 1;
          FUN_0060a2b0(plVar7,2);
        }
        plVar7 = *(longlong **)(param_1 + 200);
        iVar2 = (**(code **)(*plVar7 + 0x48))(plVar7);
        uVar4 = FUN_0060a050(plVar7,iVar2 + -1);
        uVar1 = (**(code **)(**(longlong **)(param_1 + 200) + 0x60))(*(longlong **)(param_1 + 200));
        iVar2 = FUN_00600270(uVar1,0x20,0x20);
        iVar3 = (**(code **)(**(longlong **)(param_1 + 200) + 0x48))(*(longlong **)(param_1 + 200));
        FUN_0040d200(uVar4,(longlong)(iVar2 * iVar3),0);
        uVar4 = FUN_007d56e0(param_1);
        uVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 200));
        uVar5 = FUN_005ffa40(uVar5);
        local_88 = 0;
        local_80 = (ulonglong)local_80._4_4_ << 0x20;
        local_78 = 0;
        local_70 = 0xffffffff;
        local_68 = 0xffffffff;
        local_60 = 1;
        thunk_FUN_0413e9f5(uVar4,local_54,uVar5,0);
        FUN_007d65e0(auStack_a8,*(undefined8 *)(param_1 + 200));
        (**(code **)(*local_50 + 0x88))(local_50,param_4,param_5,*(undefined8 *)(param_1 + 200));
      }
    }
    else {
      uVar4 = FUN_007d56e0(param_1);
      uVar5 = FUN_005ffa40(local_50);
      uVar1 = FUN_007d65b0(param_1);
      uVar1 = FUN_007d5020(uVar1);
      local_68 = FUN_007d5020(*(undefined4 *)(param_1 + 0xb0));
      local_88 = param_5;
      local_80 = (ulonglong)local_80._4_4_ << 0x20;
      local_78 = 0;
      local_60 = param_6;
      local_70 = uVar1;
      thunk_FUN_0413e9f5(uVar4,local_54,uVar5,param_4);
    }
  }
  return;
}

