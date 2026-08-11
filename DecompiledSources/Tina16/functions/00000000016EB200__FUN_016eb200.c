/* Ghidra address: 016eb200 */
/* Ghidra symbol: FUN_016eb200 */


undefined8
FUN_016eb200(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
            double param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 *puVar6;
  uint6 uVar7;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  byte local_1b;
  undefined1 local_1a;
  char local_19;
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  uVar4 = 0;
  puVar6 = &local_1a;
  pbVar2 = (byte *)FUN_01b05ad0(param_1,param_4,0,&local_19,puVar6,&local_1b);
  if (local_19 == '\x05') {
    if (param_5 < 0.0) {
      param_5 = 0.0;
    }
    bVar1 = *pbVar2;
    if (bVar1 < 8) {
      uVar3 = (int)CONCAT71((int7)(uVar4 >> 8),1) << (bVar1 & 0x1f);
      uVar4 = (ulonglong)uVar3;
      bVar5 = (uVar3 & 0xfe) != 0;
    }
    else {
      bVar5 = false;
    }
    uVar7 = (uint6)((ulonglong)puVar6 >> 0x10);
    if (!bVar5) {
      if ((byte)(bVar1 - 8) < 8) {
        uVar3 = (int)CONCAT71((int7)(uVar4 >> 8),1) << (bVar1 - 8 & 0x1f);
        uVar4 = (ulonglong)uVar3;
        bVar5 = (uVar3 & 0x70) != 0;
      }
      else {
        bVar5 = false;
      }
      if (!bVar5) {
        if (bVar1 == 9) {
          local_48 = (**(code **)(PTR_PTR_02002658 + (ulonglong)local_1b * 0x10 + -0x10))
                               (param_2,param_3,param_5,pbVar2 + 1,(ulonglong)uVar7 << 0x10);
        }
        else {
          if ((byte)(bVar1 - 8) < 8) {
            bVar5 = ((int)CONCAT71((int7)(uVar4 >> 8),1) << (bVar1 - 8 & 0x1f) & 0xcU) != 0;
          }
          else {
            bVar5 = false;
          }
          if (bVar5) {
            local_48 = (**(code **)(PTR_PTR_02002658 + (ulonglong)local_1b * 0x10 + -0x10))
                                 (param_2,param_3,param_5,pbVar2,(ulonglong)uVar7 << 0x10);
          }
          else if (bVar1 == 0xf) {
            local_48 = (**(code **)(PTR_PTR_02002658 + (ulonglong)local_1b * 0x10 + -0x10))
                                 (param_2,param_3,param_5,*(undefined8 *)(pbVar2 + 1),
                                  (ulonglong)uVar7 << 0x10);
          }
          else {
            local_48 = (**(code **)(PTR_PTR_02002658 + (ulonglong)local_1b * 0x10 + -0x10))
                                 (param_2,param_3,param_5,*(undefined8 *)(pbVar2 + 1),
                                  (ulonglong)uVar7 << 0x10);
          }
        }
        goto code_r0x016eb488;
      }
    }
    local_48 = (**(code **)(PTR_PTR_02002658 + (ulonglong)local_1b * 0x10 + -0x10))
                         (param_2,param_3,param_5,*(undefined8 *)(pbVar2 + 1),
                          CONCAT62(uVar7,*(undefined2 *)(pbVar2 + 0x11)));
  }
  else {
    FUN_01b20020(&local_38,*(undefined8 *)(param_1 + 0x128),&DAT_016eb4f0);
    FUN_0043f750(&local_40,param_4);
    FUN_00416cd0(local_30,3,local_38,&LAB_016eb500,local_40);
    FUN_01b04d70(0x213,&PTR_DAT_016eb4dc,local_30[0]);
  }
code_r0x016eb488:
  FUN_00414560(&local_40,3);
  return local_48;
}

