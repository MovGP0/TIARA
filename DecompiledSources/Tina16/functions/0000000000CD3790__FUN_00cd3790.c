/* Ghidra address: 00cd3790 */
/* Ghidra symbol: FUN_00cd3790 */


undefined8 FUN_00cd3790(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)PTR_DAT_02002f38)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18));
  uVar1 = (**(code **)PTR_DAT_02002080)(uVar1);
  FUN_004167a0(param_2,uVar1);
  return param_2;
}

