/* Ghidra address: 010bb610 */
/* Ghidra symbol: FUN_010bb610 */


undefined4 * FUN_010bb610(longlong param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined4 *)FUN_004095c0(0x20);
  *puVar1 = *(undefined4 *)(param_1 + 0xc);
  puVar1[1] = *(undefined4 *)(param_1 + 0x10);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(puVar1 + 2) = plVar2;
  (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_1 + 0x30));
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(puVar1 + 4) = plVar2;
  (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_1 + 0x28));
  *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(param_1 + 0x38);
  return puVar1;
}

