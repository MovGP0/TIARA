/* Ghidra address: 00874930 */
/* Ghidra symbol: FUN_00874930 */


undefined8 FUN_00874930(undefined8 param_1)

{
  longlong lVar1;
  longlong local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  if (DAT_01e1dfd0 == 0) {
    lVar1 = FUN_00873bd0(&PTR_FUN_008715a8,1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar1 + 0x20;
    }
    FUN_0041b840(&local_10,lVar1);
    FUN_00874a40(local_20,&DAT_01e1dfd0,local_10,0);
    if (local_20[0] != 0) {
      FUN_0041b800(&local_10);
    }
  }
  FUN_0041b840(param_1,DAT_01e1dfd0);
  FUN_0041b800(local_20);
  FUN_0041b800(&local_10);
  return param_1;
}

