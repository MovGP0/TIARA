/* Ghidra address: 01d31ea0 */
/* Ghidra symbol: FUN_01d31ea0 */


void FUN_01d31ea0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_005fd4d0(param_2);
  FUN_01d31740(param_1,uVar2);
  uVar1 = FUN_005fd660(param_2);
  FUN_01d31740(param_1,uVar1);
  FUN_01d31740(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x2c));
  return;
}

