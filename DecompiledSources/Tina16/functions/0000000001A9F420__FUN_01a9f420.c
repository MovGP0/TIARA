/* Ghidra address: 01a9f420 */
/* Ghidra symbol: FUN_01a9f420 */


void FUN_01a9f420(longlong *param_1,int param_2,int param_3,float param_4,longlong *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if ((*(ushort *)(param_1 + 0x2c) & 4) == 0) {
    local_50 = FUN_00498310(param_2,param_3);
    local_40 = FUN_01a9cdf0(param_1,&local_50);
    iVar1 = (**(code **)(*param_5 + 0x60))(param_5);
    iVar1 = FUN_0040c840((double)iVar1 / (double)param_4);
    iVar2 = (**(code **)(*param_5 + 0x48))(param_5);
    iVar2 = FUN_0040c840((double)iVar2 / (double)param_4);
    local_50 = FUN_00498310(param_2 + iVar1,param_3 + iVar2);
    local_48 = FUN_01a9cdf0(param_1,&local_50);
    if ((*(ushort *)(param_1 + 0x2c) & 2) == 0) {
      local_78 = (longlong)&local_40 + 4;
      FUN_01a98380(param_1,local_40 & 0xffffffff,local_40._4_4_,&local_40);
      local_78 = (longlong)&local_48 + 4;
      FUN_01a98380(param_1,local_48 & 0xffffffff,local_48 >> 0x20,&local_48);
      if ((*(ushort *)(param_1 + 0x2c) & 1) != 0) {
        FUN_01a9ee60(param_1,param_5,3,0x3c);
      }
      if (*(char *)((longlong)param_1 + 0x12d) == '\0') {
        if (*(char *)((longlong)param_1 + 0x171) != '\0') {
          FUN_01a9ee60(param_1,param_5,*(char *)((longlong)param_1 + 0x171),
                       *(undefined4 *)((longlong)param_1 + 0x174));
        }
        param_5 = (longlong *)
                  FUN_01a9eff0(param_1,param_5,*(undefined1 *)((longlong)param_1 + 0x162));
        plVar4 = (longlong *)FUN_01a97e00(param_1);
        uVar5 = FUN_005ffa40(plVar4);
        uVar6 = FUN_01a9f220(auStack_98);
        thunk_FUN_039bba01(uVar5,uVar6);
        local_78 = CONCAT44(local_78._4_4_,local_48._4_4_ - *(int *)((longlong)param_1 + 0x18c));
        FUN_00498350(local_60,(int)local_40 - (int)param_1[0x31],
                     local_40._4_4_ - *(int *)((longlong)param_1 + 0x18c),
                     (int)local_48 - (int)param_1[0x31]);
        (**(code **)(*plVar4 + 0x110))(plVar4,local_60,param_5);
        uVar5 = FUN_005ffa40(plVar4);
        thunk_FUN_039bba01(uVar5,0);
        FUN_01a97ea0(param_1,plVar4);
      }
      if (((*(ushort *)(param_1 + 0x2c) & 1) != 0) && (-1 < (char)param_1[0x2e])) {
        uVar3 = FUN_01a99990(param_1);
        (**(code **)(*param_1 + 0xb8))(param_1,0x8000);
        local_78 = (longlong)&local_40 + 4;
        FUN_01a982d0(param_1,local_40 & 0xffffffff,local_40._4_4_,&local_40);
        local_78 = (longlong)&local_48 + 4;
        FUN_01a982d0(param_1,local_48 & 0xffffffff,local_48._4_4_,&local_48);
        if ((int)local_48 < (int)local_40) {
          FUN_01cefdf0(&local_40,&local_48);
        }
        if (local_48._4_4_ < local_40._4_4_) {
          FUN_01cefdf0((longlong)&local_40 + 4,(longlong)&local_48 + 4);
        }
        local_78 = CONCAT44(local_78._4_4_,local_48._4_4_ + 1);
        (**(code **)(*param_1 + 0x58))
                  (param_1,(int)local_40 + -1,local_40._4_4_ + -1,(int)local_48 + 1);
        (**(code **)(*param_1 + 0xb8))(param_1,uVar3);
      }
    }
    else {
      FUN_01a9a440(param_1,0x11);
      local_78 = CONCAT44(local_78._4_4_,local_48._4_4_);
      (**(code **)(*param_1 + 0xa0))
                (param_1,local_40 & 0xffffffff,local_40._4_4_,local_48 & 0xffffffff);
    }
    FUN_00410f20(param_5);
  }
  return;
}

