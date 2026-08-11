/* Ghidra address: 007e78a0 */
/* Ghidra symbol: FUN_007e78a0 */


void FUN_007e78a0(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_10 = FUN_00410e60(&DAT_007e7438,1);
  FUN_007e7650(&local_28,param_4,param_5);
  FUN_004194b0(local_10 + 8,local_28,&DAT_004066f0);
  FUN_007e77f0(local_10,*(undefined8 *)(param_1 + 0x80));
  *param_3 = *(undefined4 *)(local_10 + 0x10);
  *param_2 = *(undefined8 *)(local_10 + 0x28);
  FUN_00410f20(local_10);
  FUN_00419430(&local_28,&DAT_004066f0);
  return;
}

