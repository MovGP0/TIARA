/* Ghidra address: 00d9d830 */
/* Ghidra symbol: FUN_00d9d830 */


undefined1
FUN_00d9d830(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,byte param_5)

{
  ulonglong uVar1;
  undefined8 *in_stack_00000048;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_60 = auStack_88;
  local_48 = *in_stack_00000048;
  uStack_40 = in_stack_00000048[1];
  uStack_38 = in_stack_00000048[2];
  uStack_30 = in_stack_00000048[3];
  local_49 = 1;
  local_20 = *(undefined8 *)(param_2 + 0x180);
  local_28 = FUN_0060f770(&DAT_005faf70,1,param_3,6);
  uVar1 = (ulonglong)param_5;
  if (uVar1 < 0xf) {
    if (uVar1 == 0xc) {
      FUN_00d9d690(auStack_88,0,0,0);
      goto code_r0x00d9d9b5;
    }
    if (uVar1 == 0xd) {
      FUN_00d9d690(auStack_88,0,0,1);
      goto code_r0x00d9d9b5;
    }
    if (uVar1 == 0xe) {
      FUN_00d9d690(auStack_88,0,0,2);
      goto code_r0x00d9d9b5;
    }
  }
  else {
    if (uVar1 - 0xf < 3) {
      FUN_00d9d690(auStack_88,0,0,3);
      goto code_r0x00d9d9b5;
    }
    if (uVar1 == 0x1c) {
      FUN_00d9d690(auStack_88,1,0,0);
      goto code_r0x00d9d9b5;
    }
    if (uVar1 == 0x1d) {
      FUN_00d9d690(auStack_88,1,0,1);
      goto code_r0x00d9d9b5;
    }
    if (uVar1 - 0x1e < 2) {
      FUN_00d9d690(auStack_88,1,0,3);
      goto code_r0x00d9d9b5;
    }
  }
  local_49 = 0;
code_r0x00d9d9b5:
  FUN_00410f20(local_28);
  return local_49;
}

