/* Ghidra address: 00f34560 */
/* Ghidra symbol: FUN_00f34560 */


undefined1 FUN_00f34560(longlong *param_1,byte *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 local_89;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_88 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  local_89 = 1;
  uVar1 = (ulonglong)*param_2;
  if (uVar1 < 6) {
    if (uVar1 != 5) {
      if (uVar1 != 1) {
        if (uVar1 == 3) {
          (**(code **)(*param_1 + 0x18))(param_1,&local_20);
          local_89 = FUN_00f2bd20(local_20,param_2,param_3);
          goto code_r0x00f346f1;
        }
        if (uVar1 != 4) goto LAB_00f346dc;
      }
LAB_00f34652:
      if ((char)param_1[2] == '\0') {
        FUN_00536490(&local_60,0);
        FUN_00417c40(param_3,&local_60,&DAT_00527bf8);
      }
      else {
        FUN_00536490(&local_40,1);
        FUN_00417c40(param_3,&local_40,&DAT_00527bf8);
      }
      goto code_r0x00f346f1;
    }
  }
  else if (1 < uVar1 - 10) {
    if (uVar1 == 0x10) goto LAB_00f34652;
    if (uVar1 != 0x12) {
LAB_00f346dc:
      local_89 = FUN_00f2e820(param_1,param_2,param_3);
      goto code_r0x00f346f1;
    }
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_88);
  FUN_00536420(&local_80,local_88);
  FUN_00417c40(param_3,&local_80,&DAT_00527bf8);
code_r0x00f346f1:
  FUN_00414480(&local_88);
  FUN_00417840(&local_80,&DAT_00527bf8,3);
  FUN_00414480(&local_20);
  return local_89;
}

