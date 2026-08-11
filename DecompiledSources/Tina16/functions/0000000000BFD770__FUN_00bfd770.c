/* Ghidra address: 00bfd770 */
/* Ghidra symbol: FUN_00bfd770 */


void FUN_00bfd770(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  int iStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [4];
  undefined4 local_2c;
  
  local_40 = 0;
  local_48 = 0;
  if (*(char *)(param_1 + 0x4e1) == '\x01') {
    bVar4 = false;
    if (*(longlong *)(param_1 + 0x790) != 0) {
      cVar2 = FUN_00c0f8e0(param_1,local_30);
      bVar4 = false;
      if (cVar2 != '\0') {
        cVar2 = FUN_00c0e260(param_1,local_30,&local_40,&local_4c,&local_50,&local_58);
        if (cVar2 != '\0') {
          local_38 = local_50;
          local_34 = local_2c;
          (**(code **)(param_1 + 0x790))
                    (*(undefined8 *)(param_1 + 0x798),param_1,&local_38,local_40,local_4c,local_58,
                     &local_48);
          bVar4 = local_48 != 0;
        }
      }
    }
    if (bVar4) {
      local_60 = FUN_00c0ec90(param_1,&local_38);
      local_80 = FUN_00bf1a10(param_1,&local_60);
      iVar3 = 0;
      if (local_40 != 0) {
        iVar3 = *(int *)(local_40 + -4);
      }
      local_68._0_4_ = (int)local_80;
      local_70 = (int)local_68 + iVar3 * *(int *)(param_1 + 0x4d4);
      local_68._4_4_ = (int)((ulonglong)local_80 >> 0x20);
      iStack_6c = local_68._4_4_ + *(int *)(param_1 + 0x52c);
      local_78 = CONCAT44(iStack_6c,local_70);
      local_68 = local_80;
      FUN_00423b10(&local_80,2,2);
      lVar1 = *(longlong *)(param_2 + 0x10);
      FUN_00414ad0(lVar1 + 0x40,local_48);
      *(undefined8 *)(lVar1 + 0x20) = local_80;
      *(undefined8 *)(lVar1 + 0x28) = local_78;
      *(undefined8 *)(lVar1 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
    }
    else {
      *(undefined8 *)(param_2 + 0x18) = 1;
    }
  }
  else {
    FUN_00652140(param_1,param_2);
  }
  FUN_00414560(&local_48,2);
  return;
}

