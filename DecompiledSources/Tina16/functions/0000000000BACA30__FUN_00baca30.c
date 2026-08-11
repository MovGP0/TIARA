/* Ghidra address: 00baca30 */
/* Ghidra symbol: FUN_00baca30 */


undefined2 FUN_00baca30(longlong *param_1)

{
  undefined2 uVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ushort local_1c;
  undefined2 local_1a;
  
  local_40 = 0;
  local_28 = 0;
  uVar4 = 0;
  uVar5 = 0;
  local_1a = 0x20;
  while( true ) {
    cVar2 = (**(code **)(*param_1 + 0x60))(param_1,&local_1c);
    uVar1 = local_1a;
    if (cVar2 == '\0') break;
    if (uVar4 < 3) {
      if (uVar4 == 2) {
        cVar2 = FUN_00bac6b0(local_1c);
        if (cVar2 == '\0') {
          if ((ushort)(local_1c - 0x30) < 10) {
            uVar5 = local_1c - 0x30;
            uVar4 = 3;
          }
          else if (local_1c == 0x78) {
            uVar4 = 4;
          }
          else {
            uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,0x13,&local_28,0xffffffff);
            FUN_004134c0(uVar3);
          }
        }
        else {
          uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,0x18,&local_28,0xffffffff);
          FUN_004134c0(uVar3);
        }
      }
      else if (uVar4 == 0) {
        cVar2 = FUN_00bac6b0(local_1c);
        if (cVar2 == '\0') {
          if (local_1c == 0x23) {
            uVar4 = 2;
          }
          else {
            cVar2 = FUN_00bac710(local_1c,1);
            if (cVar2 == '\0') {
              uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,9,&local_28,0xffffffff);
              FUN_004134c0(uVar3);
            }
            else {
              uVar4 = 1;
              FUN_00416780(&local_28,local_1c);
            }
          }
        }
        else {
          uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,0x18,&local_28,0xffffffff);
          FUN_004134c0(uVar3);
        }
      }
      else if (uVar4 == 1) {
        if (local_1c == 0x3b) {
          cVar2 = FUN_00bac620(local_28,&local_1a);
          uVar1 = local_1a;
          if (cVar2 != '\0') break;
          local_38 = local_28;
          local_30 = 0x11;
          uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,0x5c,&local_38,0);
          FUN_004134c0(uVar3);
        }
        else {
          cVar2 = FUN_00bac6f0(local_1c);
          if (cVar2 == '\0') {
            uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,0x12,&local_28,0xffffffff);
            FUN_004134c0(uVar3);
          }
          else {
            FUN_00416780(&local_40,local_1c);
            FUN_00416ad0(&local_28,local_40);
          }
        }
      }
    }
    else {
      uVar1 = (short)uVar5;
      if (uVar4 == 3) {
        cVar2 = FUN_00bac6b0(local_1c);
        if (cVar2 == '\0') {
          if ((ushort)(local_1c - 0x30) < 10) {
            uVar5 = (uVar5 * 10 + (uint)local_1c) - 0x30;
          }
          else {
            if (local_1c == 0x3b) break;
            uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,0x22,&local_28,0xffffffff);
            FUN_004134c0(uVar3);
          }
        }
        else {
          uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,0x18,&local_28,0xffffffff);
          FUN_004134c0(uVar3);
        }
      }
      else if (uVar4 == 4) {
        cVar2 = FUN_00bac6b0(local_1c);
        if (cVar2 == '\0') {
          if ((ushort)(local_1c - 0x30) < 10) {
            uVar5 = (uVar5 * 0x10 + (uint)local_1c) - 0x30;
          }
          else if (local_1c == 0x3b) {
            cVar2 = FUN_00bac6d0(uVar5);
            if (cVar2 != '\0') break;
            uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,0x24,&local_28,0xffffffff);
            FUN_004134c0(uVar3);
          }
          else if ((ushort)(local_1c - 0x41) < 6) {
            uVar5 = (uVar5 * 0x10 + (uint)local_1c) - 0x37;
          }
          else if ((ushort)(local_1c - 0x61) < 6) {
            uVar5 = (uVar5 * 0x10 + (uint)local_1c) - 0x57;
          }
          else {
            uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,0x23,&local_28,0xffffffff);
            FUN_004134c0(uVar3);
          }
          if (0x10ffff < uVar5) {
            uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,0x24,&local_28,0xffffffff);
            FUN_004134c0(uVar3);
          }
        }
        else {
          uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,0x18,&local_28,0xffffffff);
          FUN_004134c0(uVar3);
        }
      }
    }
  }
  local_1a = uVar1;
  FUN_00414480(&local_40);
  FUN_00414480(&local_28);
  return local_1a;
}

