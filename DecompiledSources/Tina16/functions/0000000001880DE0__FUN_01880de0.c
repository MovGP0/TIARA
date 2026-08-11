/* Ghidra address: 01880de0 */
/* Ghidra symbol: FUN_01880de0 */


undefined8 FUN_01880de0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0187fde0();
  if ((short)uVar1 == 0) {
    FUN_0041ddd0(param_2,PTR_PTR_02001250);
  }
  else {
    FUN_007dc700(param_2,uVar1);
  }
  return param_2;
}

