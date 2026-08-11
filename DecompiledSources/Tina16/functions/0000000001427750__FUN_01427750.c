/* Ghidra address: 01427750 */
/* Ghidra symbol: FUN_01427750 */


void FUN_01427750(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *local_18;
  undefined4 *local_10;
  
  local_18 = (undefined1 *)0x0;
  FUN_016ee260(param_1,&local_10,0x18,0);
  *local_10 = 7;
  FUN_00419430(&local_18,&DAT_01425f80);
  FUN_00419260(&local_18,&DAT_01425f80,1,0xe);
  *local_18 = 1;
  local_18[1] = 0;
  local_18[2] = 2;
  local_18[3] = 0;
  local_18[4] = 3;
  local_18[5] = 0;
  local_18[6] = 4;
  local_18[7] = 0;
  local_18[8] = 5;
  local_18[9] = 0;
  local_18[10] = 6;
  local_18[0xb] = 0;
  local_18[0xc] = 7;
  local_18[0xd] = 0;
  FUN_01425fb0(param_1,param_2,local_10,local_18);
  uVar1 = FUN_00409570(0x310);
  *(undefined8 *)(local_10 + 2) = uVar1;
  uVar1 = FUN_00409570(0x70);
  *(undefined8 *)(local_10 + 4) = uVar1;
  FUN_016e9f40(param_1,FUN_01425c40);
  FUN_016e9f50(param_1,FUN_014262a0);
  FUN_00419430(&local_18,&DAT_01425f80);
  return;
}

