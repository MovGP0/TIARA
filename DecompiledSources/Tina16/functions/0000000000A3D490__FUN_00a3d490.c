/* Ghidra address: 00a3d490 */
/* Ghidra symbol: FUN_00a3d490 */


undefined1 FUN_00a3d490(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  FUN_00a33eb0(param_1,9);
  uVar2 = FUN_00a32f80(*(undefined4 *)(param_1 + 0x28));
  **(undefined4 **)(param_1 + 8) = uVar2;
  uVar2 = FUN_00a32f80(*(undefined4 *)(param_1 + 0x2c));
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 4) = uVar2;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 8) = *(undefined1 *)(param_1 + 0x30);
  uVar1 = FUN_00a34420(param_1,param_2);
  return uVar1;
}

