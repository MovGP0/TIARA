/* Ghidra address: 01d31350 */
/* Ghidra symbol: FUN_01d31350 */


int FUN_01d31350(undefined8 param_1)

{
  uint uVar1;
  undefined8 local_res8 [4];
  byte local_108 [256];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00416910(local_108,local_res8[0],0xff);
  uVar1 = (uint)local_108[0];
  if (0xfd < local_108[0]) {
    uVar1 = 0xfe;
  }
  FUN_00414480(local_res8);
  return uVar1 + 2;
}

