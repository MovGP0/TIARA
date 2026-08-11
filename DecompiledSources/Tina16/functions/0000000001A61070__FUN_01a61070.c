/* Ghidra address: 01a61070 */
/* Ghidra symbol: FUN_01a61070 */


longlong * FUN_01a61070(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  
  local_50 = auStack_c8;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_28 + 0x10))(local_28,param_2);
  iVar1 = (**(code **)(*local_28 + 0x28))();
  local_8c = iVar1 + -1;
  local_3c = 0;
  if (-1 < local_8c) {
    do {
      local_8c = iVar1;
      (**(code **)(*local_28 + 0x18))(local_28,&local_58,local_3c);
      iVar1 = FUN_004170c0(L"\\l#(",local_58,1);
      if (0 < iVar1) {
        (**(code **)(*local_28 + 0x18))(local_28,&local_60,local_3c);
        local_40 = FUN_004170c0(L"\\l#(",local_60,1);
        local_40 = local_40 + 4;
        local_44 = 0;
        while ((**(code **)(*local_28 + 0x18))(local_28,&local_68,local_3c),
              *(short *)(local_68 + -2 + (longlong)(local_40 + local_44) * 2) != 0x29) {
          local_44 = local_44 + 1;
        }
        (**(code **)(*local_28 + 0x18))(local_28,&local_70,local_3c);
        FUN_00416dc0(&local_30,local_70,local_40,local_44);
        uVar2 = FUN_0043fc00(local_30);
        local_1c = FUN_01cee640(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),uVar2);
        (**(code **)(*local_28 + 0x18))(local_28,&local_38,local_3c);
        local_a8 = &DAT_01a613f8;
        FUN_00416cd0(&local_78,3,L"\\l#(",local_30);
        FUN_0043f750(&local_88,local_1c);
        local_a8 = &DAT_01a613f8;
        FUN_00416cd0(&local_80,3,&DAT_01a61408,local_88);
        FUN_019b6930(&local_38,local_78,local_80);
        (**(code **)(*local_28 + 0x40))(local_28,local_3c,local_38);
      }
      local_3c = local_3c + 1;
      local_8c = local_8c + -1;
      iVar1 = local_8c;
    } while (local_8c != 0);
  }
  FUN_00414560(&local_88,7);
  FUN_00414560(&local_38,2);
  return local_28;
}

