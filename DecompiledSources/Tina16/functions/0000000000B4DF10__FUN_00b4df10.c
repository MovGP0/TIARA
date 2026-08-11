/* Ghidra address: 00b4df10 */
/* Ghidra symbol: FUN_00b4df10 */


undefined1 FUN_00b4df10(longlong param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  uVar1 = FUN_00b4dab0(param_1);
  puVar2 = (undefined1 *)FUN_00b23d20(**(undefined8 **)(param_1 + 0x18),uVar1);
  return *puVar2;
}

