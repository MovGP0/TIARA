/* Ghidra address: 0112e600 */
/* Ghidra symbol: FUN_0112e600 */


void FUN_0112e600(undefined8 *param_1,undefined8 *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined2 uStack_98;
  undefined8 local_90;
  int local_84;
  int local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined2 uStack_5c;
  undefined8 local_5a;
  undefined8 uStack_52;
  undefined8 uStack_4a;
  undefined8 uStack_42;
  undefined2 uStack_3a;
  
  local_c0 = 0;
  local_90 = 0;
  cVar4 = FUN_0112d940(param_1);
  if (cVar4 == '\0') {
    cVar4 = FUN_0112d940(param_2);
    if (cVar4 == '\0') {
      bVar1 = *(byte *)((longlong)param_1 + 1);
      bVar2 = *(byte *)((longlong)param_2 + 1);
      FUN_0112db00(&local_5a,param_1,&local_80);
      FUN_0112db00(&local_7c,param_2,&local_84);
      local_80 = local_80 - (uint)(local_5a._1_1_ & 0x3f);
      local_84 = local_84 - (uint)(local_7c._1_1_ & 0x3f);
      bVar3 = (byte)local_5a;
      local_5a._0_2_ = (ushort)(byte)local_5a;
      bVar5 = (byte)local_7c;
      local_7c._0_2_ = (ushort)(byte)local_7c;
      if (bVar3 < bVar5) {
        *(undefined8 *)param_3 = local_5a;
        *(undefined8 *)(param_3 + 8) = uStack_52;
        *(undefined8 *)(param_3 + 0x10) = uStack_4a;
        *(undefined8 *)(param_3 + 0x18) = uStack_42;
        *(undefined2 *)(param_3 + 0x20) = uStack_3a;
        local_5a = local_7c;
        uStack_52 = uStack_74;
        uStack_4a = uStack_6c;
        uStack_42 = uStack_64;
        uStack_3a = uStack_5c;
        local_7c = *(undefined8 *)param_3;
        uStack_74 = *(undefined8 *)(param_3 + 8);
        uStack_6c = *(undefined8 *)(param_3 + 0x10);
        uStack_64 = *(undefined8 *)(param_3 + 0x18);
        uStack_5c = *(undefined2 *)(param_3 + 0x20);
      }
      *(undefined8 *)param_3 = DAT_01f24afa;
      *(undefined8 *)(param_3 + 8) = DAT_01f24b02;
      *(undefined8 *)(param_3 + 0x10) = DAT_01f24b0a;
      *(undefined8 *)(param_3 + 0x18) = DAT_01f24b12;
      *(undefined2 *)(param_3 + 0x20) = DAT_01f24b1a;
      uVar7 = (byte)local_7c - 1;
      if (-1 < (int)uVar7) {
        do {
          if (0x40 < (byte)local_5a) {
            FUN_0041ddd0(&local_90,PTR_PTR_02003350);
            FUN_0112d910(local_90);
          }
          if ((uVar7 & 1) == 0) {
            uVar6 = (ulonglong)*(byte *)((longlong)&local_7c + (longlong)((int)uVar7 / 2) + 2) /
                    0x10;
          }
          else {
            uVar6 = (ulonglong)
                    (*(byte *)((longlong)&local_7c + (longlong)((int)uVar7 / 2) + 2) & 0xf);
          }
          bVar5 = (byte)uVar6;
          while (bVar5 != 0) {
            FUN_0112e380(&local_b8,param_3,&local_5a);
            *(undefined8 *)param_3 = local_b8;
            *(undefined8 *)(param_3 + 8) = uStack_b0;
            *(undefined8 *)(param_3 + 0x10) = uStack_a8;
            *(undefined8 *)(param_3 + 0x18) = uStack_a0;
            *(undefined2 *)(param_3 + 0x20) = uStack_98;
            bVar5 = (char)uVar6 - 1;
            uVar6 = (ulonglong)bVar5;
          }
          uVar6 = (ulonglong)local_5a >> 8;
          local_5a = CONCAT71((int7)uVar6,(byte)local_5a + '\x01');
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0xffffffff);
      }
      local_80 = local_80 + local_84;
      if (0 < local_80) {
        if ((int)(uint)param_3[1] <= local_80) {
          local_80 = local_80 - (uint)param_3[1];
          param_3[1] = 0;
        }
        *param_3 = *param_3 + (char)local_80;
        if (0x40 < *param_3) {
          FUN_0041ddd0(&local_c0,PTR_PTR_02003350);
          FUN_0112d910(local_c0);
        }
      }
      if (local_80 < 0) {
        if ((int)((uint)*param_3 - (uint)param_3[1]) < 1 - local_80) {
          FUN_0112ebb0(param_3,param_3,1 - local_80,0);
        }
        param_3[1] = param_3[1] - (char)local_80;
      }
      if ((bVar1 & 0x80) != (bVar2 & 0x80)) {
        param_3[1] = param_3[1] | 0x80;
      }
    }
    else {
      *(undefined8 *)param_3 = *param_2;
      *(undefined8 *)(param_3 + 8) = param_2[1];
      *(undefined8 *)(param_3 + 0x10) = param_2[2];
      *(undefined8 *)(param_3 + 0x18) = param_2[3];
      *(undefined2 *)(param_3 + 0x20) = *(undefined2 *)(param_2 + 4);
    }
  }
  else {
    *(undefined8 *)param_3 = *param_1;
    *(undefined8 *)(param_3 + 8) = param_1[1];
    *(undefined8 *)(param_3 + 0x10) = param_1[2];
    *(undefined8 *)(param_3 + 0x18) = param_1[3];
    *(undefined2 *)(param_3 + 0x20) = *(undefined2 *)(param_1 + 4);
  }
  FUN_00414480(&local_c0);
  FUN_00414480(&local_90);
  return;
}

