/* Ghidra address: 01433ba0 */
/* Ghidra symbol: FUN_01433ba0 */


void FUN_01433ba0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))(*(longlong **)(param_1 + 8));
  uVar1 = FUN_0140de60(&PTR_FUN_0140cf88,1,*(undefined8 *)PTR_DAT_02004030,
                       *(undefined8 *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}

