/* Ghidra address: 01a27290 */
/* Ghidra symbol: FUN_01a27290 */


void FUN_01a27290(longlong *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  short *local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  int local_24;
  longlong *local_20;
  
  local_50 = auStack_c8;
  local_90 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = (short *)0x0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_24 = 0;
  while (iVar2 = (**(code **)(*param_1 + 0x28))(param_1), local_24 < iVar2) {
    (**(code **)(*param_1 + 0x18))(param_1,&local_30,local_24);
    iVar2 = FUN_004170c0(&PTR_DAT_01a27660,local_30,1);
    if (iVar2 < 1) {
      local_24 = local_24 + 1;
    }
    else {
      local_a8 = CONCAT71(local_a8._1_7_,1);
      FUN_00450070(&local_58,local_30,&PTR_DAT_01a27660,&DAT_01a27674);
      (**(code **)(*local_20 + 0x60))(local_20,local_58);
      (**(code **)(*local_20 + 0x18))(local_20,&local_60,0);
      (**(code **)(*param_1 + 0x40))(param_1,local_24,local_60);
      iVar2 = (**(code **)(*local_20 + 0x28))(local_20);
      iVar2 = iVar2 + -1;
      local_28 = 1;
      if (0 < iVar2) {
        do {
          (**(code **)(*local_20 + 0x18))(local_20,&local_68,local_28);
          FUN_0043ea00(&local_40,local_68);
          if (local_40 != (short *)0x0) {
            if (*local_40 == 0x2b) {
              (**(code **)(*param_1 + 0x18))(param_1,&local_78,local_24);
              FUN_00416dc0(&local_88,local_40,2,0x7fffffff);
              FUN_0043ea00(&local_80,local_88);
              local_a8 = local_80;
              FUN_00416cd0(&local_70,3,local_78,&DAT_01a27688);
              (**(code **)(*param_1 + 0x40))(param_1,local_24,local_70);
            }
            else {
              iVar1 = FUN_004170c0(&DAT_01a27698,local_40,1);
              if (iVar1 < 1) {
                FUN_00414b50(&local_38,L"TEXT 0 0 Left 20 !");
              }
              else {
                FUN_00414b50(&local_38,L"TEXT 0 0 Left 20 ;");
              }
              local_24 = local_24 + 1;
              FUN_00416ba0(&local_90,local_38,local_40);
              (**(code **)(*param_1 + 200))(param_1,local_24,local_90);
            }
          }
          local_28 = local_28 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  FUN_00410f20(local_20);
  FUN_00414560(&local_90,8);
  FUN_00414560(&local_40,3);
  return;
}

