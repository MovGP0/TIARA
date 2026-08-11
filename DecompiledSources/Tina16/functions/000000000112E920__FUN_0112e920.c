/* Ghidra address: 0112e920 */
/* Ghidra symbol: FUN_0112e920 */


void FUN_0112e920(undefined8 *param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  undefined8 local_a0;
  undefined1 local_96;
  byte local_95;
  undefined6 uStack_94;
  undefined8 uStack_8e;
  undefined8 uStack_86;
  undefined8 uStack_7e;
  undefined2 uStack_76;
  int local_74;
  int local_70;
  undefined1 local_6c;
  byte local_6b;
  undefined8 local_4a;
  undefined8 uStack_42;
  undefined8 uStack_3a;
  undefined8 uStack_32;
  undefined2 uStack_2a;
  
  local_a0 = 0;
  cVar4 = FUN_0112d940(param_2);
  if (cVar4 != '\0') {
    FUN_0041ddd0(&local_a0,PTR_PTR_02005218);
    FUN_0112d8a0(local_a0);
  }
  cVar4 = FUN_0112d940(param_1);
  if (cVar4 == '\0') {
    bVar1 = *(byte *)((longlong)param_1 + 1);
    bVar2 = *(byte *)(param_2 + 1);
    FUN_0112db00(&local_4a,param_1,&local_70);
    FUN_0112db00(&local_6c,param_2,&local_74);
    local_4a = local_4a & 0xffffffffffff3fff;
    local_6b = local_6b | 0x80;
    *(undefined8 *)param_3 = DAT_01f24afa;
    *(undefined8 *)(param_3 + 8) = DAT_01f24b02;
    *(undefined8 *)(param_3 + 0x10) = DAT_01f24b0a;
    *(undefined8 *)(param_3 + 0x18) = DAT_01f24b12;
    *(undefined2 *)(param_3 + 0x20) = DAT_01f24b1a;
    local_70 = local_70 - local_74;
    if (local_70 < 0) {
      *param_3 = -(char)local_70;
      param_3[1] = -(char)local_70 - 1;
      local_70 = 0;
    }
    while( true ) {
      cVar4 = FUN_0112d940(&local_4a);
      if (cVar4 != '\0') break;
      bVar5 = 0;
      FUN_0112e4e0(&local_4a,&local_6c,&local_96);
      while ((local_95 & 0x80) == 0) {
        local_4a = CONCAT62(uStack_94,CONCAT11(local_95,local_96));
        uStack_42 = uStack_8e;
        uStack_3a = uStack_86;
        uStack_32 = uStack_7e;
        uStack_2a = uStack_76;
        bVar5 = bVar5 + 1;
        FUN_0112e4e0(&local_4a,&local_6c,&local_96);
      }
      *param_3 = *param_3 + 1;
      bVar3 = *param_3;
      if ((bVar3 & 1) == 0) {
        param_3[(longlong)((int)(bVar3 - 1) / 2) + 2] =
             param_3[(longlong)((int)(bVar3 - 1) / 2) + 2] | bVar5;
      }
      else {
        param_3[(ulonglong)bVar3 / 2 + 2] = bVar5 * '\x10';
      }
      if (local_70 + 1 < (int)(uint)*param_3) {
        param_3[1] = param_3[1] + 1;
      }
      if ((*param_3 == 0x40) || (local_70 + 0xb <= (int)(uint)*param_3)) break;
      if (((byte)local_4a < 0x40) && ((int)(uint)(byte)local_4a < local_70 + 0xb)) {
        local_4a = CONCAT71(local_4a._1_7_,(byte)local_4a + 1);
      }
      else if (local_4a._1_1_ != '\0') {
        cVar4 = local_4a._1_1_ + -1;
        local_4a._0_2_ = CONCAT11(cVar4,(byte)local_4a);
      }
    }
    if ((int)(uint)*param_3 <= local_70) {
      *param_3 = (char)local_70 + 1;
    }
    if ((bVar1 & 0x80) != (bVar2 & 0x80)) {
      param_3[1] = param_3[1] | 0x80;
    }
  }
  else {
    *(undefined8 *)param_3 = *param_1;
    *(undefined8 *)(param_3 + 8) = param_1[1];
    *(undefined8 *)(param_3 + 0x10) = param_1[2];
    *(undefined8 *)(param_3 + 0x18) = param_1[3];
    *(undefined2 *)(param_3 + 0x20) = *(undefined2 *)(param_1 + 4);
  }
  FUN_00414480(&local_a0);
  return;
}

