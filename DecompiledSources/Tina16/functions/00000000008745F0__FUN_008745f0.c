/* Ghidra address: 008745f0 */
/* Ghidra symbol: FUN_008745f0 */


undefined8 FUN_008745f0(undefined8 param_1)

{
  longlong lVar1;
  longlong local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  if (DAT_01e1dfb0 == 0) {
    lVar1 = FUN_00873f60(&PTR_FUN_00872038,1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar1 + 0x20;
    }
    FUN_0041b840(&local_10,lVar1);
    FUN_00874a40(local_20,&DAT_01e1dfb0,local_10,0);
    if (local_20[0] != 0) {
      FUN_0041b800(&local_10);
    }
  }
  FUN_0041b840(param_1,DAT_01e1dfb0);
  FUN_0041b800(local_20);
  FUN_0041b800(&local_10);
  return param_1;
}

