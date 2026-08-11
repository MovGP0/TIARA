/* Ghidra address: 00d80a80 */
/* Ghidra symbol: FUN_00d80a80 */


undefined8 *
FUN_00d80a80(longlong *param_1,undefined8 *param_2,undefined1 param_3,undefined8 *param_4,
            byte param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_70;
  int local_6c;
  int local_68;
  undefined8 local_60 [2];
  ushort local_4f;
  
  puVar3 = local_60;
  for (lVar2 = 7; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_4;
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004179d0(local_60,&DAT_00d627e8);
  *param_2 = DAT_01ecf394;
  param_2[1] = DAT_01ecf39c;
  uVar4 = 0;
  (**(code **)(*param_1 + 0x98))(param_1,&local_70,param_3,local_60,L"default");
  FUN_004238d0(&local_80,local_68 + -0x17,4,local_68 + -1,CONCAT44(uVar4,local_6c + -1));
  *param_2 = local_80;
  param_2[1] = uStack_78;
  uVar1 = (ulonglong)param_5;
  if (uVar1 < 3) {
    if (uVar1 == 0) {
      if ((local_4f & 1) != 0) {
        FUN_004238d0(param_2,local_70,4,local_70 + 0x16,local_6c + -1);
      }
    }
    else if (uVar1 == 1) {
      if ((local_4f & 2) != 0) {
        *param_2 = local_80;
        param_2[1] = uStack_78;
      }
    }
    else if ((uVar1 == 2) && ((local_4f & 4) != 0)) {
      *param_2 = local_80;
      param_2[1] = uStack_78;
      if ((local_4f & 2) != 0) {
        FUN_00423b50(param_2,0xffffffea,0);
      }
      if (((local_4f & 0x20) != 0) || ((local_4f & 0x40) != 0)) {
        FUN_00423b50(param_2,0xffffffea,0);
      }
      if (((local_4f & 8) != 0) || ((local_4f & 0x10) != 0)) {
        FUN_00423b50(param_2,0xffffffea,0);
      }
      if (((local_4f & 0x80) != 0) || ((local_4f & 0x100) != 0)) {
        FUN_00423b50(param_2,0xffffffea,0);
      }
      if ((local_4f & 0x200) != 0) {
        FUN_00423b50(param_2,0xffffffea,0);
      }
    }
  }
  else if (uVar1 - 3 < 2) {
    if (((local_4f & 8) != 0) || ((local_4f & 0x10) != 0)) {
      *param_2 = local_80;
      param_2[1] = uStack_78;
      if ((local_4f & 2) != 0) {
        FUN_00423b50(param_2,0xffffffea,0);
      }
      if (((local_4f & 0x20) != 0) || ((local_4f & 0x40) != 0)) {
        FUN_00423b50(param_2,0xffffffea,0);
      }
    }
  }
  else if (uVar1 - 5 < 2) {
    if (((local_4f & 0x20) != 0) || ((local_4f & 0x40) != 0)) {
      *param_2 = local_80;
      param_2[1] = uStack_78;
      if ((local_4f & 2) != 0) {
        FUN_00423b50(param_2,0xffffffea,0);
      }
    }
  }
  else if (uVar1 - 7 < 2) {
    if (((local_4f & 0x80) != 0) || ((local_4f & 0x100) != 0)) {
      *param_2 = local_80;
      param_2[1] = uStack_78;
      if ((local_4f & 2) != 0) {
        FUN_00423b50(param_2,0xffffffea,0);
      }
      if (((local_4f & 0x20) != 0) || ((local_4f & 0x40) != 0)) {
        FUN_00423b50(param_2,0xffffffea,0);
      }
      if (((local_4f & 8) != 0) || ((local_4f & 0x10) != 0)) {
        FUN_00423b50(param_2,0xffffffea,0);
      }
    }
  }
  else if ((uVar1 - 7 == 2) && ((local_4f & 0x200) != 0)) {
    *param_2 = local_80;
    param_2[1] = uStack_78;
    if ((local_4f & 2) != 0) {
      FUN_00423b50(param_2,0xffffffea,0);
    }
    if (((local_4f & 0x20) != 0) || ((local_4f & 0x40) != 0)) {
      FUN_00423b50(param_2,0xffffffea,0);
    }
    if (((local_4f & 8) != 0) || ((local_4f & 0x10) != 0)) {
      FUN_00423b50(param_2,0xffffffea,0);
    }
    if (((local_4f & 0x80) != 0) || ((local_4f & 0x100) != 0)) {
      FUN_00423b50(param_2,0xffffffea,0);
    }
  }
  FUN_00417740(local_60,&DAT_00d627e8);
  return param_2;
}

