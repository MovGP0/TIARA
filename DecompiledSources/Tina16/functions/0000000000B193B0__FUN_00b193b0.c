/* Ghidra address: 00b193b0 */
/* Ghidra symbol: FUN_00b193b0 */


undefined4 FUN_00b193b0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00418560(8,&DAT_00b18708);
  FUN_00414bf0(uVar1,param_2);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 8),uVar1);
  return *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x10);
}

