/* Ghidra address: 01be7b30 */
/* Ghidra symbol: FUN_01be7b30 */


longlong FUN_01be7b30(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_01be72b0(param_1);
  *(longlong **)(lVar2 + 0x4e0) = param_1;
  *(undefined8 *)(lVar2 + 0x4d8) = *(undefined8 *)(*param_1 + 0x460);
  uVar1 = FUN_01be07e0(param_1);
  FUN_01be7180(lVar2,uVar1);
  return lVar2;
}

