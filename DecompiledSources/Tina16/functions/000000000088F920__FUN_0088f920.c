/* Ghidra address: 0088f920 */
/* Ghidra symbol: FUN_0088f920 */


undefined8 FUN_0088f920(undefined4 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  while ((param_2 != 0 &&
         (lVar1 = FUN_0088f5b0(2,*(undefined4 *)(param_2 + 0xc),param_1,
                               *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 4)), lVar1 != 0))) {
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(longlong *)(param_2 + 0x28) = lVar1;
    param_2 = *(longlong *)(lVar1 + 0x28);
  }
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 8;
  }
  return uVar2;
}

