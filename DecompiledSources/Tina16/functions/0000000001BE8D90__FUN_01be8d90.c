/* Ghidra address: 01be8d90 */
/* Ghidra symbol: FUN_01be8d90 */


void FUN_01be8d90(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_78 [44];
  int local_4c;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong *local_30;
  
  local_48 = 0;
  local_40[0] = 0;
  if (((((*(ushort *)(param_1[0xb4] + 0x34) & 8) == 0) &&
       (*(char *)(param_1[0xb4] + 0x4d6) == '\x02')) &&
      (cVar2 = (**(code **)(*param_1 + 0x2c8))(param_1), cVar2 == '\0')) && (param_1[0xd4] != 0)) {
    FUN_01be8880(param_1);
    if (param_1[0xcd] == 0) {
      lVar4 = FUN_0061cd00(&PTR_FUN_0061ba98,1,param_1);
      param_1[0xcd] = lVar4;
      uVar5 = FUN_01bfaa70(param_1[0xd4]);
      lVar4 = FUN_01bfb850(uVar5);
      param_1[0xd3] = lVar4;
      FUN_01bfdfd0(lVar4,&LAB_01be9088);
    }
    uVar1 = param_1[0xb4];
    iVar3 = FUN_007ff9d0(uVar1);
    if (iVar3 == 0) {
      local_30 = param_1 + 0xd3;
      lVar4 = *local_30;
      *local_30 = 0;
      FUN_00410f20(lVar4);
    }
    iVar3 = FUN_007ff9d0();
    local_4c = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar5 = FUN_007ffa40(uVar1,local_4c);
        plVar6 = (longlong *)FUN_01be8ce0(auStack_78,uVar5);
        if (plVar6 == (longlong *)0x0) {
          plVar6 = (longlong *)FUN_006aa610(&PTR_FUN_01be0ce8,1,param_1[0xcd]);
          *(undefined1 *)(plVar6 + 0x2a) = 0;
          FUN_005b2830(plVar6,param_1[0xcd]);
          (**(code **)(*plVar6 + 0xf0))(plVar6,uVar1 & 0xffffffff);
          uVar5 = FUN_007ffa40(uVar1,local_4c);
          FUN_006aa5e0(plVar6,uVar5);
          uVar5 = FUN_007ffa40(uVar1,local_4c);
          FUN_0064dd90(uVar5,&local_48);
          (**(code **)(*plVar6 + 0xd8))(plVar6,local_48);
          uVar5 = FUN_01bfaa70(param_1[0xd4]);
          lVar4 = FUN_01bfb850(uVar5);
          plVar6[0x28] = lVar4;
          plVar6[0x29] = (longlong)param_1;
          FUN_01bfde30(plVar6[0x28],plVar6);
          FUN_01bfe550(plVar6[0x28],0xffffffff);
        }
        else {
          uVar5 = FUN_007ffa40(uVar1,local_4c);
          FUN_0064dd90(uVar5,local_40);
          (**(code **)(*plVar6 + 0xd8))(plVar6,local_40[0]);
        }
        if (local_4c == 0) {
          (**(code **)(*plVar6 + 0xe0))(plVar6,1);
        }
        local_4c = local_4c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00414560(&local_48,2);
  return;
}

