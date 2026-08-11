/* Ghidra address: 010ffaa0 */
/* Ghidra symbol: FUN_010ffaa0 */


undefined4 FUN_010ffaa0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
  (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_2 + 0x70));
  (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
            (*(longlong **)(param_2 + 0x70),*(undefined8 *)(param_1 + 0xa0));
  uVar1 = FUN_005fdff0(param_2,*(undefined8 *)(param_1 + 0xa8));
  (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
            (*(longlong **)(param_2 + 0x70),*(undefined8 *)(param_1 + 0xa0));
  return uVar1;
}

