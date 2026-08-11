/* Ghidra address: 01433d30 */
/* Ghidra symbol: FUN_01433d30 */


void FUN_01433d30(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))(*(longlong **)(param_1 + 8));
  uVar1 = FUN_01410880(&PTR_FUN_0140f8c8,1,*(undefined8 *)PTR_DAT_02004030,
                       *(undefined8 *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}

