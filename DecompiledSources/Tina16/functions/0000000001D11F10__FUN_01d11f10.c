/* Ghidra address: 01d11f10 */
/* Ghidra symbol: FUN_01d11f10 */


void FUN_01d11f10(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_01d12280(param_2);
  FUN_01d12290(param_1,uVar2);
  uVar2 = FUN_01d122a0(param_2);
  FUN_01d122b0(param_1,uVar2);
  uVar2 = FUN_01d122c0(param_2);
  FUN_01d122d0(param_1,uVar2);
  uVar2 = FUN_01d122e0(param_2);
  FUN_01d122f0(param_1,uVar2);
  uVar2 = FUN_01d12300(param_2);
  FUN_01d12310(param_1,uVar2);
  uVar2 = FUN_01d12320(param_2);
  FUN_01d12330(param_1,uVar2);
  uVar1 = FUN_01d12340(param_2);
  FUN_01d12350(param_1,uVar1);
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))
            (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_2 + 0x80));
  FUN_00414ad0(param_1 + 0x90,*(undefined8 *)(param_2 + 0x90));
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  return;
}

