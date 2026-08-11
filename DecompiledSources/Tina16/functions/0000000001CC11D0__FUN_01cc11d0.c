/* Ghidra address: 01cc11d0 */
/* Ghidra symbol: FUN_01cc11d0 */


void FUN_01cc11d0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01cc08f0(param_1,param_2);
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d311c0(param_2,param_1 + 0x38,1);
    FUN_01d311c0(param_2,param_1 + 0x3a,1);
    FUN_01d311c0(param_2,param_1 + 0x3b,1);
    FUN_01cc1600(param_1,&local_10);
    FUN_01d313e0(param_2,local_10);
    FUN_01d311c0(param_2,param_1 + 0x48,0x88);
    FUN_01d311c0(param_2,param_1 + 0xd0,0x80);
    FUN_01d311c0(param_2,param_1 + 0x160,8);
    FUN_01d311c0(param_2,param_1 + 0x150,4);
    FUN_01d311c0(param_2,param_1 + 0x154,4);
    FUN_01d311c0(param_2,param_1 + 0x158,4);
    FUN_01d311c0(param_2,param_1 + 0x39,1);
  }
  FUN_00414480(&local_10);
  return;
}

