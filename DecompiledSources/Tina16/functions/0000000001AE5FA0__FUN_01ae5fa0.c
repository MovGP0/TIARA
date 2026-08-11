/* Ghidra address: 01ae5fa0 */
/* Ghidra symbol: FUN_01ae5fa0 */


void FUN_01ae5fa0(longlong param_1,undefined8 param_2,ushort param_3)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d30f00(param_2,param_1 + 0x40,4);
    FUN_01d312f0(param_2,param_1 + 0x68);
    FUN_01d30f00(param_2,&local_18,8);
    FUN_01ae5df0(param_1,local_18);
    FUN_01d30f00(param_2,&local_18,8);
    FUN_01ae5e00(param_1,local_18);
    FUN_01d30f00(param_2,&local_18,8);
    FUN_01ae5e30(param_1,local_18);
    FUN_01d30f00(param_2,&local_18,8);
    FUN_01ae5e40(param_1,local_18);
    FUN_01d30f00(param_2,param_1 + 0x108,1);
    if (0x1f < param_3) {
      FUN_01d30f00(param_2,param_1 + 0x10d,1);
    }
    if (0x2f < param_3) {
      FUN_01d30f00(param_2,param_1 + 0x10b,1);
      FUN_01d30f00(param_2,param_1 + 0x10c,1);
    }
  }
  FUN_00414480(&local_10);
  return;
}

