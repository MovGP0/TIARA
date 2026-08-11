/* Ghidra address: 00f9d8b0 */
/* Ghidra symbol: FUN_00f9d8b0 */


void FUN_00f9d8b0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  int local_44;
  int local_40;
  int local_3c;
  double local_38;
  double local_30;
  double local_28;
  undefined8 local_20 [2];
  
  local_60 = auStack_b8;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_68 = 0;
  local_20[0] = 0;
  if (*(int *)(param_1 + 0x748) == 1) {
    *(undefined4 *)(param_1 + 0x760) = 2;
    *(undefined4 *)(param_1 + 0x764) = 4;
    *(undefined4 *)(param_1 + 0x768) = 8;
    *(undefined4 *)(param_1 + 0x76c) = 0x10;
    *(undefined4 *)(param_1 + 0x770) = 0x20;
    *(undefined4 *)(param_1 + 0x774) = 0x40;
    *(undefined4 *)(param_1 + 0x778) = 0x80;
    *(undefined4 *)(param_1 + 0x77c) = 0x100;
  }
  else {
    *(undefined4 *)(param_1 + 0x760) = 1;
    *(undefined4 *)(param_1 + 0x764) = 2;
    *(undefined4 *)(param_1 + 0x768) = 4;
    *(undefined4 *)(param_1 + 0x76c) = 8;
    *(undefined4 *)(param_1 + 0x770) = 0x10;
    *(undefined4 *)(param_1 + 0x774) = 0x20;
    *(undefined4 *)(param_1 + 0x778) = 0x40;
    *(undefined4 *)(param_1 + 0x77c) = 0x80;
    *(undefined4 *)(param_1 + 0x780) = 0x100;
  }
  (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))
            (*(longlong **)(param_1 + 0x718),*(undefined4 *)(param_1 + 0x7d8));
  *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_1 + 0x7d8);
  *(undefined4 *)(param_1 + 0x75c) = *(undefined4 *)(param_1 + 0x7d8);
  (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))
            (*(longlong **)(param_1 + 0x718),*(undefined4 *)(param_1 + 0x758));
  FUN_00f61040(&local_68,*(undefined4 *)(param_1 + 0x7e0));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x728),local_68);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718));
  local_40 = *(int *)(param_1 + 0x760 + (longlong)iVar3 * 4);
  (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x268))(*(longlong **)(param_1 + 0x6c8),0);
  (**(code **)(**(longlong **)(param_1 + 0x730) + 0x268))(*(longlong **)(param_1 + 0x730),0);
  *(undefined4 *)(param_1 + 0x788) = 1;
  if (*(int *)(param_1 + 0x748) == 1) {
    (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x268))
              (*(longlong **)(param_1 + 0x6c8),*(undefined1 *)(param_1 + 0x7dc));
    *(undefined4 *)(param_1 + 0x784) = 0x100;
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))(*(longlong **)(param_1 + 0x6c8))
    ;
    if (cVar2 == '\0') {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,0,&DAT_00f9e2e0);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,1,&DAT_00f9e2f4);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,2,&DAT_00f9e308);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,3,L"1:16");
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,4,L"1:32");
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,5,L"1:64");
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,6,L"1:128");
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,7,L"1:256");
      local_44 = 0x100;
      (**(code **)(**(longlong **)(param_1 + 0x718) + 0x128))(*(longlong **)(param_1 + 0x718),1);
    }
    else {
      local_40 = 1;
      local_44 = 1;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,0,&DAT_00f9e2cc);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,1,&DAT_00f9e2e0);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,2,&DAT_00f9e2f4);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,3,&DAT_00f9e308);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,4,L"1:16");
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,5,L"1:32");
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,6,L"1:64");
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,7,L"1:128");
      (**(code **)(**(longlong **)(param_1 + 0x718) + 0x128))(*(longlong **)(param_1 + 0x718),0);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x718),&DAT_00f9e2cc);
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x730) + 0x268))
              (*(longlong **)(param_1 + 0x730),*(undefined1 *)(param_1 + 0x7dc));
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730))
    ;
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x784) = 0x100;
    }
    else {
      *(undefined4 *)(param_1 + 0x784) = 0x10000;
    }
    local_44 = 0x100;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
    (**(code **)(*plVar1 + 0x40))(plVar1,0,&DAT_00f9e2cc);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
    (**(code **)(*plVar1 + 0x40))(plVar1,1,&DAT_00f9e2e0);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
    (**(code **)(*plVar1 + 0x40))(plVar1,2,&DAT_00f9e2f4);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
    (**(code **)(*plVar1 + 0x40))(plVar1,3,&DAT_00f9e308);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
    (**(code **)(*plVar1 + 0x40))(plVar1,4,L"1:16");
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
    (**(code **)(*plVar1 + 0x40))(plVar1,5,L"1:32");
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
    (**(code **)(*plVar1 + 0x40))(plVar1,6,L"1:64");
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
    (**(code **)(*plVar1 + 0x40))(plVar1,7,L"1:128");
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
    (**(code **)(*plVar1 + 0x40))(plVar1,8,L"1:256");
  }
  local_3c = *(int *)(param_1 + 0x784) - *(int *)(param_1 + 0x7e0);
  local_28 = *(double *)(param_1 + 0x740) / 4.0;
  local_30 = (1.0 / local_28) * (double)local_3c * (double)local_40;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x700),local_30);
  FUN_00414480(local_20);
  local_58 = *(undefined8 *)(param_1 + 0x740);
  FUN_00448450(local_20,local_58,PTR_DAT_02004830);
  FUN_00416ba0(&local_70,local_20[0],&DAT_00f9e394);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),local_70);
  FUN_00414480(local_20);
  local_38 = (1.0 / local_28) * (double)*(int *)(param_1 + 0x784) * (double)local_44;
  local_98 = 1;
  FUN_00b8fd60(&local_80,local_38,*PTR_DAT_02005310,0);
  FUN_00416ba0(&local_78,L"Time max: ",local_80);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),local_78);
  *(undefined4 *)(param_1 + 0x788) = 0;
  FUN_00414560(&local_80,4);
  FUN_00414480(local_20);
  return;
}

