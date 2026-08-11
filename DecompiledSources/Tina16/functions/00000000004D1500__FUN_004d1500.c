/* Ghidra address: 004d1500 */
/* Ghidra symbol: FUN_004d1500 */


void FUN_004d1500(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 *local_10;
  
  local_20 = auStack_48;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  local_10 = (undefined8 *)FUN_00418560(0x28,&DAT_00483468);
  *local_10 = param_1;
  local_10[4] = 0;
  local_10[1] = 0;
  local_10[2] = 0;
  FUN_0041b840(local_10 + 3,local_res10[0]);
  FUN_004d17e0(&PTR_FUN_00483698,local_10,1,0);
  lVar1 = FUN_004d11f0();
  if (*(int *)PTR_DAT_02005bd8 == *(int *)(lVar1 + 8)) {
    FUN_00418590(local_10,&DAT_00483468);
  }
  FUN_0041b800(local_res10);
  return;
}

