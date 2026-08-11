/* Ghidra address: 014a2080 */
/* Ghidra symbol: FUN_014a2080 */


void FUN_014a2080(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  undefined1 local_9de [3];
  undefined1 local_9db;
  undefined1 local_9da;
  undefined8 local_921;
  undefined1 local_919;
  undefined1 local_918;
  undefined1 local_917;
  undefined1 local_486 [620];
  undefined1 local_21a;
  undefined1 local_219;
  undefined1 local_218;
  undefined8 local_1fe;
  undefined8 local_1f6;
  undefined8 local_1ee;
  undefined1 local_1cb;
  undefined1 local_1ca;
  undefined1 local_1c9;
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined1 local_1c6;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined8 local_a4;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99 [11];
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined8 local_8b;
  undefined8 local_83;
  undefined8 local_7b;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined8 local_6c;
  undefined1 local_64 [11];
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_56;
  undefined8 local_4e;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined8 local_3f;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34 [11];
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_26;
  undefined8 local_1e;
  undefined8 local_16;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  
  FUN_00417580(local_9de,&DAT_01d0d0b8);
  if (*(char *)(*(longlong *)(*param_1 + 0x48) + 0x490) == '\0') {
    puVar3 = PTR_DAT_02004010;
    FUN_00417c40(local_9de,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    puVar3 = (undefined *)(*(longlong *)(*param_1 + 0x48) + 0x492);
    FUN_00417c40(local_9de,puVar3,&DAT_01d0d0b8);
  }
  bVar1 = *(byte *)(*param_1 + 0x78);
  if (bVar1 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)puVar3 >> 8),1) << (bVar1 & 0x1f) & 0x21U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    FUN_01d31180(*param_1,0xf280,0x19,0x39);
    local_41 = local_9db;
    local_40 = local_9da;
    local_3f = local_921;
    local_37 = local_919;
    local_36 = local_918;
    local_35 = local_917;
    FUN_00415020(local_34,local_486,10);
    local_29 = local_21a;
    local_28 = local_219;
    local_27 = local_218;
    local_26 = local_1fe;
    local_1e = local_1f6;
    local_16 = local_1ee;
    local_e = local_1cb;
    local_d = local_1ca;
    local_c = local_1c9;
    local_b = local_1c8;
    local_a = local_1c7;
    local_9 = local_1c6;
    FUN_01d311c0(*param_1,&local_41,0x39);
  }
  else if (bVar1 < 8 && (1 << (bVar1 & 0x1f) & 0x1cU) != 0) {
    FUN_01d31180(*param_1,0xf280,0x18,0x38);
    local_a6 = local_9db;
    local_a5 = local_9da;
    local_a4 = local_921;
    local_9c = local_919;
    local_9b = local_918;
    local_9a = local_917;
    FUN_00415020(local_99,local_486,10);
    local_8e = local_21a;
    local_8d = local_219;
    local_8c = local_218;
    local_8b = local_1fe;
    local_83 = local_1f6;
    local_7b = local_1ee;
    local_73 = local_1cb;
    local_72 = local_1ca;
    local_71 = local_1c9;
    local_70 = local_1c8;
    local_6f = local_1c7;
    FUN_01d311c0(*param_1,&local_a6,0x38);
  }
  else {
    FUN_01d31180(*param_1,0xf280,0x16,0x2d);
    local_6e = local_9db;
    local_6d = local_9da;
    local_6c = local_921;
    FUN_00415020(local_64,local_486,10);
    local_59 = local_21a;
    local_58 = local_219;
    local_57 = local_218;
    local_56 = local_1fe;
    local_4e = local_1f6;
    local_46 = local_1cb;
    local_45 = local_1ca;
    local_44 = local_1c9;
    local_43 = local_1c8;
    local_42 = local_1c7;
    FUN_01d311c0(*param_1,&local_6e,0x2d);
  }
  iVar2 = FUN_01d31a40(*param_1);
  if (iVar2 != 0) {
    FUN_00b047e0(0xfffffff3);
  }
  FUN_00417740(local_9de,&DAT_01d0d0b8);
  return;
}

