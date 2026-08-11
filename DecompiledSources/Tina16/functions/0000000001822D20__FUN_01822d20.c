/* Ghidra address: 01822d20 */
/* Ghidra symbol: FUN_01822d20 */


undefined8 FUN_01822d20(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_38 = 0;
  local_28 = (undefined8 *)*param_2;
  local_20 = param_2[1];
  uVar1 = local_20 & 0xff;
  if (uVar1 < 10) {
    if (uVar1 == 9) {
      FUN_00416780(&local_38,(ulonglong)local_28 & 0xffff);
      FUN_00468a10(param_1,local_38);
      goto code_r0x01822ef7;
    }
    if (uVar1 < 4) {
      if (uVar1 == 3) {
LAB_01822e54:
        FUN_00468860(param_1,*local_28);
        goto code_r0x01822ef7;
      }
      if (uVar1 == 0) {
        FUN_00468530(param_1,(ulonglong)local_28 & 0xffffffff,0xfffffffffffffffc);
        goto code_r0x01822ef7;
      }
      if (uVar1 == 1) {
        FUN_00468820(param_1,(ulonglong)local_28 & 0xff);
        goto code_r0x01822ef7;
      }
      if (uVar1 == 2) {
        local_30 = 1;
        local_2f = local_28._0_1_;
        FUN_00468950(param_1,&local_30);
        goto code_r0x01822ef7;
      }
    }
    else {
      if (uVar1 == 4) {
        FUN_00468950(param_1,local_28);
        goto code_r0x01822ef7;
      }
      if (uVar1 == 7) {
        FUN_00468700(param_1,local_28);
        goto code_r0x01822ef7;
      }
    }
  }
  else if (uVar1 < 0x10) {
    if (uVar1 == 0xf) {
      FUN_004689d0(param_1,local_28);
      goto code_r0x01822ef7;
    }
    if (uVar1 == 0xb) {
      FUN_00468910(param_1,local_28);
      goto code_r0x01822ef7;
    }
    if (uVar1 == 0xc) goto LAB_01822e54;
    if (uVar1 == 0xd) {
      FUN_00461840(param_1,local_28);
      goto code_r0x01822ef7;
    }
  }
  else {
    if (uVar1 == 0x10) {
      FUN_00468700(param_1,*local_28);
      goto code_r0x01822ef7;
    }
    if (uVar1 == 0x11) {
      FUN_00468a10(param_1,local_28);
      goto code_r0x01822ef7;
    }
  }
  FUN_0046f180(param_1);
code_r0x01822ef7:
  FUN_00414480(&local_38);
  return param_1;
}

