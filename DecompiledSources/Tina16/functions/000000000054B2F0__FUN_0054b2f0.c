/* Ghidra address: 0054b2f0 */
/* Ghidra symbol: FUN_0054b2f0 */


undefined8 FUN_0054b2f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_18 = 0;
  local_20 = 0;
  local_48 = param_2;
  lVar1 = FUN_0054a100(param_1);
  local_10 = *(longlong *)(lVar1 + -0xa0);
  if (local_10 == 0) {
    FUN_00419430(local_48,&DAT_0052f6a0);
  }
  else {
    FUN_0054afb0(auStack_68,local_30);
    FUN_004194b0(&local_18,local_30[0],&DAT_0052f6a0);
    FUN_0054b060(auStack_68,&local_38);
    FUN_004194b0(&local_20,local_38,&DAT_0052f6a0);
    FUN_0054b1a0(auStack_68,&local_40,local_18,local_20);
    FUN_004194b0(local_48,local_40,&DAT_0052f6a0);
  }
  FUN_00417840(&local_40,&DAT_0052f6a0,3);
  FUN_00417840(&local_20,&DAT_0052f6a0,2);
  return local_48;
}

