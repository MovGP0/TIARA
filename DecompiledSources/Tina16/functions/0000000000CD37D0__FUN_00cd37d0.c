/* Ghidra address: 00cd37d0 */
/* Ghidra symbol: FUN_00cd37d0 */


undefined4 FUN_00cd37d0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 local_c;
  
  uVar1 = (**(code **)PTR_DAT_02002f38)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18));
  (**(code **)PTR_DAT_020046e0)(uVar1,&local_c);
  return local_c;
}

