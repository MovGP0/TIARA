/* Ghidra address: 014e06a0 */
/* Ghidra symbol: FUN_014e06a0 */


longlong *
FUN_014e06a0(longlong *param_1,short *param_2,char param_3,undefined8 param_4,undefined8 param_5,
            longlong param_6,undefined8 param_7,char param_8,undefined1 *param_9,undefined8 param_10
            )

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  bool bVar9;
  short local_52;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  byte *local_30 [2];
  
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  if (param_6 == 0) {
    if (param_3 == 'I') {
      local_52 = 0xd;
    }
    else if (param_3 == 'V') {
      local_52 = 0xe;
    }
  }
  else {
    if (param_3 == 'I') {
      local_52 = 0xf;
    }
    else if (param_3 == 'V') {
      local_52 = 0x10;
    }
    FUN_004169a0(local_40,param_6);
    iVar2 = FUN_004170c0(&PTR_DAT_014e0a58,local_40[0],1);
    bVar8 = 0 < iVar2;
    FUN_004169a0(&local_48,param_6);
    iVar2 = FUN_004170c0(&PTR_DAT_014e0a6c,local_48,1);
    if (0 < iVar2) {
      bVar8 = bVar8 | 2;
      *param_9 = 1;
    }
    FUN_004169a0(&local_50,param_6);
    iVar2 = FUN_004170c0(&DAT_014e0a80,local_50,1);
    if (0 < iVar2) {
      bVar8 = bVar8 | 4;
      *param_9 = 1;
    }
    if ((local_52 == 0x10) && (bVar8 == 1)) {
      local_52 = 0xe;
    }
    if ((local_52 == 0xf) && (bVar8 == 1)) {
      local_52 = 0xd;
    }
  }
  plVar4 = (longlong *)FUN_014db750(local_52);
  FUN_017bf050(plVar4,0,param_2);
  *(bool *)((longlong)plVar4 + 0x531) = *param_2 == 0x58;
  uVar5 = FUN_01d347d0(param_4,0);
  FUN_014dbb80(plVar4,0,uVar5,param_10);
  uVar5 = FUN_01d347d0(param_4,1);
  FUN_014dbb80(plVar4,1,uVar5,param_10);
  uVar1 = (**(code **)(*plVar4 + 0x2c8))(plVar4);
  lVar6 = FUN_00409570(uVar1);
  plVar4[0x18] = lVar6;
  uVar5 = FUN_01d38290(plVar4,1);
  if ((ushort)(local_52 - 8U) < 0x10) {
    uVar3 = (int)CONCAT62((int6)((ulonglong)uVar5 >> 0x10),1) << ((byte)(local_52 - 8U) & 0x1f);
    bVar9 = (uVar3 & 0x180) != 0;
    uVar7 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar9);
  }
  else {
    uVar7 = 0;
    bVar9 = false;
  }
  if (bVar9) {
    if ((byte)(param_8 - 8U) < 8) {
      bVar9 = ((int)CONCAT71((int7)(uVar7 >> 8),1) << (param_8 - 8U & 0x1f) & 0x11U) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      (**(code **)(*plVar4 + 0x2d0))(plVar4,1,local_30);
      FUN_004095f0(*(undefined8 *)(local_30[0] + 1));
      if (*(longlong *)(local_30[0] + 9) != 0) {
        uVar3 = (uint)(byte)PTR_DAT_02001408[(ulonglong)*local_30[0] - 1];
        iVar2 = 0;
        if (-1 < (int)(uVar3 - 1)) {
          do {
            FUN_004095f0(*(undefined8 *)(*(longlong *)(local_30[0] + 9) + (longlong)iVar2 * 8));
            iVar2 = iVar2 + 1;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
      FUN_004095f0(*(undefined8 *)(local_30[0] + 9));
      *local_30[0] = 4;
      bVar8 = PTR_DAT_02001408[3];
      *(ushort *)(local_30[0] + 0x11) = (ushort)bVar8 * 8;
      uVar5 = FUN_00409570((ushort)bVar8 * 8);
      *(undefined8 *)(local_30[0] + 1) = uVar5;
      uVar5 = FUN_00409570((ulonglong)(byte)PTR_DAT_02001408[(ulonglong)*local_30[0] - 1] << 3);
      *(undefined8 *)(local_30[0] + 9) = uVar5;
    }
  }
  FUN_014e00d0(plVar4,param_5,param_6,param_7,param_8,param_10);
  (**(code **)(*param_1 + 0x20))(param_1,plVar4);
  FUN_00414560(&local_50,3);
  return plVar4;
}

