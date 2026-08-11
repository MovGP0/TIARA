/* Ghidra address: 00cd3740 */
/* Ghidra symbol: FUN_00cd3740 */


undefined8 FUN_00cd3740(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_419 [1033];
  
  uVar1 = (**(code **)PTR_DAT_02002f38)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18));
  uVar1 = (**(code **)PTR_DAT_02003080)(uVar1,local_419,0x400);
  FUN_004167a0(param_2,uVar1);
  return param_2;
}

