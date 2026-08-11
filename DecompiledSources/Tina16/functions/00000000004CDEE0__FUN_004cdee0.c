/* Ghidra address: 004cdee0 */
/* Ghidra symbol: FUN_004cdee0 */


void FUN_004cdee0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 *local_1c0;
  undefined1 local_1b8 [378];
  undefined2 local_3e;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_1c0 = auStack_208;
  local_20[0] = 0;
  FUN_00417580(local_1b8,&DAT_00437810);
  FUN_00417c40(local_1b8,PTR_DAT_02004830,&DAT_00437810);
  local_3e = 0x2e;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1e8 = &local_1d0;
  local_28 = FUN_004c8850(&DAT_00482800,1,param_1,local_1b8);
  local_30 = FUN_004baeb0(&PTR_FUN_004812f0,1,param_2,0x1000);
  FUN_004c80b0(local_30);
  FUN_004cdd30(auStack_208);
  FUN_00410f20(local_30);
  FUN_00410f20(local_28);
  FUN_00417740(local_1b8,&DAT_00437810);
  FUN_00414480(local_20);
  return;
}

