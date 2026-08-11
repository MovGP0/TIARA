/* Ghidra address: 0185f4f0 */
/* Ghidra symbol: FUN_0185f4f0 */


undefined4 FUN_0185f4f0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  lVar1 = FUN_0185f2e0(param_1);
  puVar2 = (undefined4 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(lVar1 + 0x1c))
  ;
  return *puVar2;
}

