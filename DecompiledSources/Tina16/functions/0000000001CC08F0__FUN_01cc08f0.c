/* Ghidra address: 01cc08f0 */
/* Ghidra symbol: FUN_01cc08f0 */


void FUN_01cc08f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d311c0(param_2,param_1 + 8,1);
    FUN_01cc0ae0(param_1,&local_10);
    FUN_01d31630(param_2,local_10);
    FUN_01d311c0(param_2,param_1 + 0x18,1);
    FUN_01d311c0(param_2,param_1 + 0x1a,0x11);
    FUN_01d311c0(param_2,param_1 + 0x2b,1);
    FUN_01d311c0(param_2,param_1 + 0x2c,4);
    FUN_01d311c0(param_2,param_1 + 0x30,2);
  }
  FUN_00414480(&local_10);
  return;
}

