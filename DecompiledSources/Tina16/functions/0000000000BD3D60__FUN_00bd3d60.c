/* Ghidra address: 00bd3d60 */
/* Ghidra symbol: FUN_00bd3d60 */


void FUN_00bd3d60(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_005fc8c0(param_2);
  thunk_FUN_03d2c01a(uVar1,0x5c,param_3);
  *(undefined1 *)(param_3 + 0x14) = 0;
  *(undefined1 *)(param_3 + 0x15) = 0;
  *(undefined1 *)(param_3 + 0x16) = 0;
  lVar2 = FUN_00442440(param_3 + 0x1c);
  FUN_0040d200(lVar2 + 2,((param_3 + 0x5a) - lVar2) / 2,0);
  return;
}

