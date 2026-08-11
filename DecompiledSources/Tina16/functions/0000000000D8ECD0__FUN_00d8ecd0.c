/* Ghidra address: 00d8ecd0 */
/* Ghidra symbol: FUN_00d8ecd0 */


longlong FUN_00d8ecd0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_74 [92];
  
  lVar1 = FUN_0060f770(&DAT_005faf70,1,param_1,6);
  uVar2 = FUN_005fc8c0(*(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x70));
  uVar2 = thunk_FUN_041a19a1(param_1,uVar2);
  FUN_0040d200(local_74,0x5c,0);
  thunk_FUN_03d2c01a(uVar2,0x5c,local_74);
  uVar2 = thunk_FUN_041a15ee(local_74);
  FUN_005fcc40(*(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x70),uVar2);
  return lVar1;
}

