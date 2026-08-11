/* Ghidra address: 00d805c0 */
/* Ghidra symbol: FUN_00d805c0 */


undefined1
FUN_00d805c0(longlong *param_1,byte param_2,undefined8 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 local_d9;
  undefined1 local_d8 [24];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  
  puVar4 = &local_60;
  for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_004179d0(&local_60,&DAT_00d627e8);
  local_d9 = 0;
  uStack_bc = param_5;
  local_68 = CONCAT44(param_5,param_4);
  local_c0 = param_4;
  if ((param_2 < 3) || (param_2 == 6)) {
    uVar5 = 0;
    (**(code **)(*param_1 + 0x98))(param_1,&local_78,param_2,&local_60,L"default");
    FUN_004238d0(local_88,(undefined4)local_60,local_60._4_4_,local_78,CONCAT44(uVar5,local_54));
    FUN_004238d0(local_98,(undefined4)local_60,local_60._4_4_,local_58,local_74);
    FUN_004238d0(local_a8,local_70,local_60._4_4_,local_58,local_54);
    FUN_004238d0(local_b8,(undefined4)local_60,local_6c,local_58,local_54);
    cVar1 = FUN_004231e0(local_88,&local_68);
    if (cVar1 != '\0') {
      local_d9 = 2;
    }
    cVar1 = FUN_004231e0(local_98,&local_68);
    if (cVar1 != '\0') {
      local_d9 = 3;
    }
    cVar1 = FUN_004231e0(local_a8,&local_68);
    if (cVar1 != '\0') {
      local_d9 = 4;
    }
    cVar1 = FUN_004231e0(local_b8,&local_68);
    if (cVar1 != '\0') {
      local_d9 = 5;
    }
    cVar1 = FUN_004231e0(local_88,&local_68);
    if (cVar1 != '\0') {
      cVar1 = FUN_004231e0(local_98,&local_68);
      if (cVar1 != '\0') {
        local_d9 = 7;
      }
    }
    cVar1 = FUN_004231e0(local_a8,&local_68);
    if (cVar1 != '\0') {
      cVar1 = FUN_004231e0(local_98,&local_68);
      if (cVar1 != '\0') {
        local_d9 = 8;
      }
    }
    cVar1 = FUN_004231e0(local_88,&local_68);
    if (cVar1 != '\0') {
      cVar1 = FUN_004231e0(local_b8,&local_68);
      if (cVar1 != '\0') {
        local_d9 = 9;
      }
    }
    cVar1 = FUN_004231e0(local_a8,&local_68);
    if (cVar1 != '\0') {
      cVar1 = FUN_004231e0(local_b8,&local_68);
      if (cVar1 != '\0') {
        local_d9 = 10;
      }
    }
    (**(code **)(*param_1 + 0xa0))(param_1,local_d8,param_2,&local_60,L"default");
    cVar1 = FUN_004231e0(local_d8,&local_68);
    if (cVar1 != '\0') {
      local_d9 = 1;
    }
    cVar1 = '\0';
    do {
      (**(code **)(*param_1 + 0xa8))(param_1,local_d8,param_2,&local_60,cVar1,L"default");
      cVar2 = FUN_004231e0(local_d8,&local_68);
      if (cVar2 != '\0') {
        local_d9 = FUN_00d835d0(cVar1);
        break;
      }
      cVar1 = cVar1 + '\x01';
    } while (cVar1 != '\r');
  }
  FUN_00417740(&local_60,&DAT_00d627e8);
  return local_d9;
}

