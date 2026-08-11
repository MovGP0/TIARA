/* Ghidra address: 01cc26f0 */
/* Ghidra symbol: FUN_01cc26f0 */


void FUN_01cc26f0(longlong param_1,undefined8 param_2,ushort param_3)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01d34dc0(param_1,param_2,param_3);
  FUN_01d30f00(param_2,param_1 + 0x434,1);
  if (0x10 < param_3) {
    if (param_3 < 0x12) {
      FUN_01d312f0(param_2,&local_10);
    }
    else {
      FUN_01d316c0(param_2,&local_10);
    }
    FUN_01cc3760(param_1,local_10);
  }
  FUN_00414480(&local_10);
  return;
}

