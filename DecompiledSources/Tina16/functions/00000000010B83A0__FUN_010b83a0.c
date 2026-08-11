/* Ghidra address: 010b83a0 */
/* Ghidra symbol: FUN_010b83a0 */


void FUN_010b83a0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  int *local_c8;
  undefined4 local_c0;
  undefined1 local_b0 [16];
  undefined1 *local_a0;
  longlong *local_98;
  undefined1 local_81;
  undefined1 local_64 [16];
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  longlong local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_a0 = auStack_e8;
  if (param_2 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2,&local_54);
  if (*(char *)((longlong)param_2 + 0x12d) == '\0') {
    if (*(char *)((longlong)param_1 + 0xb) == '\0') {
      (**(code **)(*param_2 + 0xf0))(param_2,0);
      if (*(char *)((longlong)param_1 + 9) == '\0') {
        if (param_1[7] != 0) {
          local_30 = param_2[0x29];
          local_44 = thunk_FUN_03b57162(local_30);
          uVar3 = thunk_FUN_041715dd(4);
          thunk_FUN_041a19a1(local_30,uVar3);
          uVar3 = thunk_FUN_041715dd(7);
          thunk_FUN_041a19a1(local_30,uVar3);
          uVar3 = thunk_FUN_041715dd(0xd);
          thunk_FUN_041a19a1(local_30,uVar3);
          if (*(int *)((longlong)param_1 + 0x6c) != 0x3000000) {
            local_c0 = FUN_005fbf20(*(int *)((longlong)param_1 + 0x6c));
            local_c8 = (int *)CONCAT44(local_c8._4_4_,local_48);
            (**(code **)(*param_2 + 0x60))(param_2,local_54,local_50,local_4c);
          }
          if ((int)param_1[0xd] != 0x3000000) {
            uVar1 = FUN_005fbf20((int)param_1[0xd]);
            (**(code **)(*param_2 + 0xb8))(param_2,uVar1);
            local_81 = FUN_01a99b80(param_2);
            (**(code **)(*param_2 + 0xe8))(param_2,(char)param_1[0x10]);
            local_c8 = (int *)CONCAT44(local_c8._4_4_,local_48);
            (**(code **)(*param_2 + 0x58))(param_2,local_54,local_50,local_4c);
            (**(code **)(*param_2 + 0xe8))(param_2,local_81);
            uVar3 = thunk_FUN_041715dd(7);
            FUN_01a9a6f0(param_2,local_30,uVar3);
          }
          local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
          local_28 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
          if (*(char *)((longlong)param_1 + 0x182) != '\0') {
            FUN_0060bbf0(local_20,7);
            (**(code **)(*local_20 + 0x88))(local_20,local_4c - local_54);
            (**(code **)(*local_20 + 0x70))(local_20,local_48 - local_50);
            uVar3 = FUN_00609e10(local_20);
            uVar3 = FUN_005ffa40(uVar3);
            plVar4 = (longlong *)FUN_00609e10(local_20);
            (**(code **)(*plVar4 + 0x20))(plVar4,local_b0);
            thunk_FUN_0417aa92(uVar3,param_1[7],local_b0);
          }
          local_c8 = &local_50;
          FUN_01a98380(param_2,local_54,local_50,&local_54);
          local_c8 = &local_48;
          FUN_01a98380(param_2,local_4c,local_48,&local_4c);
          iVar2 = -1 - (char)param_1[0x10];
          FUN_00b95880(&local_54,iVar2,iVar2);
          local_3c = local_4c - local_54;
          local_40 = local_48 - local_50;
          FUN_01a98060(param_2,local_64);
          local_34 = local_54;
          local_38 = local_50;
          if ((*(char *)((longlong)param_1 + 0x182) == '\0') ||
             ((iVar2 = (**(code **)(*local_20 + 0x60))(local_20), local_3c == iVar2 &&
              (iVar2 = (**(code **)(*local_20 + 0x48))(local_20), local_40 == iVar2)))) {
            local_c8 = (int *)CONCAT44(local_c8._4_4_,local_48);
            FUN_00498350(local_b0,local_54,local_50,local_4c);
            thunk_FUN_0417aa92(local_30,param_1[7],local_b0);
          }
          else {
            FUN_0060bbf0(local_28,7);
            (**(code **)(*local_28 + 0x88))(local_28,local_3c);
            (**(code **)(*local_28 + 0x70))(local_28,local_40);
            FUN_01a9e380(local_20,local_28);
            local_98 = (longlong *)FUN_01a97e00(param_2);
            (**(code **)(*local_98 + 0x88))(local_98,local_34,local_38,local_28);
            FUN_01a97ea0(param_2,local_98);
          }
          FUN_00410f20(local_20);
          FUN_00410f20(local_28);
          thunk_FUN_0402759f(local_30,local_44);
        }
        if (*(char *)((longlong)param_1 + 10) != '\0') {
          (**(code **)(*param_1 + 0x50))(param_1,param_2,&local_54);
          FUN_01a9a440(param_2,0xf);
          local_c8 = (int *)CONCAT44(local_c8._4_4_,local_48);
          (**(code **)(*param_2 + 0xa0))(param_2,local_54,local_50,local_4c);
        }
      }
      else {
        local_c8 = (int *)CONCAT44(local_c8._4_4_,local_48 + 2);
        (**(code **)(*param_2 + 0x30))(param_2,local_54 - 2,local_50 + -2,local_4c + 2);
      }
    }
    else {
      FUN_01a9a440(param_2,0xe);
      local_c8 = (int *)CONCAT44(local_c8._4_4_,local_48);
      (**(code **)(*param_2 + 0xa0))(param_2,local_54,local_50,local_4c);
    }
    if (*(char *)((longlong)param_1 + 10) != '\0') {
      (**(code **)(*param_1 + 0x168))(param_1,param_2,0);
    }
    return;
  }
  local_c8 = &local_50;
  FUN_01a98380(param_2,local_54,local_50,&local_54);
  local_c8 = &local_48;
  FUN_01a98380(param_2,local_4c,local_48,&local_4c);
  return;
}

