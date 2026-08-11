/* Ghidra address: 00a063d0 */
/* Ghidra symbol: FUN_00a063d0 */


undefined4 FUN_00a063d0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  lVar1 = FUN_00a061c0(param_1);
  puVar2 = (undefined4 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(lVar1 + 0x1c))
  ;
  return *puVar2;
}

