/* Ghidra address: 014c4a00 */
/* Ghidra symbol: FUN_014c4a00 */


longlong * FUN_014c4a00(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*plVar2 + 0x10))(plVar2,DAT_0210eb90);
    (**(code **)(*DAT_0210eb90 + 0x90))(DAT_0210eb90);
    (**(code **)(**(longlong **)(param_1 + 0x40) + 8))(*(longlong **)(param_1 + 0x40));
  }
  return plVar2;
}

