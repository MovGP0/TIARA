/* Ghidra address: 01831410 */
/* Ghidra symbol: FUN_01831410 */


undefined8 FUN_01831410(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  int local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  plVar1 = *(longlong **)(param_1 + 0x90);
  cVar2 = FUN_004113d0(plVar1,&PTR_FUN_0182dc88);
  if (cVar2 == '\0') {
    FUN_00468820(param_2,0);
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_40);
    iVar4 = FUN_0046c9e0(&local_40,1);
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))(*(longlong **)(param_1 + 0x88),&local_70);
    iVar7 = 0;
    if (-1 < iVar4) {
      do {
        local_98[0] = iVar7;
        FUN_0046cb70(&local_58,&local_40,1,local_98);
        uVar3 = FUN_0046f320(&local_70,&local_58);
        FUN_00468820(param_2,uVar3);
        if (iVar7 < iVar4 + -1) {
          local_98[0] = iVar7 + 1;
          FUN_0046cb70(&local_b0,&local_40,1,local_98);
          FUN_0046f180(&local_c8);
          uVar6 = FUN_0046f320(&local_b0,&local_c8);
          if ((char)uVar6 == '\0') goto LAB_018315ef;
          uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        }
        else {
LAB_018315ef:
          uVar3 = 0;
        }
        FUN_00468820(&local_e0,uVar3);
        FUN_00461840(&local_f8,param_2);
        FUN_0046b960(&local_f8);
        FUN_0046f260(&local_e0,&local_f8);
        iVar5 = FUN_004644a0(&local_e0);
        if (iVar5 != 0) {
          cVar2 = FUN_0046f3d0(&local_70,&local_58);
          if (cVar2 == '\0') {
LAB_01831683:
            uVar3 = 0;
          }
          else {
            local_98[0] = iVar7 + 2;
            FUN_0046cb70(&local_110,&local_40,1,local_98);
            uVar6 = FUN_0046f380(&local_70,&local_110);
            if ((char)uVar6 == '\0') goto LAB_01831683;
            uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          }
          FUN_00468820(param_2,uVar3);
          iVar7 = iVar7 + 2;
        }
        iVar5 = FUN_004644a0(param_2);
      } while ((iVar5 == 0) && (iVar7 = iVar7 + 1, iVar7 <= iVar4));
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))(*(longlong **)(param_1 + 0x88),&local_90);
    uVar3 = FUN_0184c560(plVar1[0x14],&local_90);
    FUN_00468820(param_2,uVar3);
  }
  FUN_00417840(&local_110,&DAT_004013d8,5);
  FUN_00460ba0(&local_90);
  FUN_00417840(&local_70,&DAT_004013d8,3);
  return param_2;
}

