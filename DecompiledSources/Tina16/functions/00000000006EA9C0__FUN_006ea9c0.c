/* Ghidra address: 006ea9c0 */
/* Ghidra symbol: FUN_006ea9c0 */


undefined8 FUN_006ea9c0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  undefined4 uStack_1c;
  
  uVar2 = FUN_0065b870(param_1);
  FUN_004701b0(uVar2,0x434,0,local_28,0);
  local_20 = local_24;
  uVar2 = FUN_0065b870(param_1);
  uStack_1c = thunk_FUN_041b2403(uVar2,0x436,0,(longlong)local_24);
  uVar2 = FUN_0065b870(param_1);
  iVar1 = thunk_FUN_041b2403(uVar2,0xbb,0xffffffffffffffff,0);
  return CONCAT44(uStack_1c,local_20 - iVar1);
}

