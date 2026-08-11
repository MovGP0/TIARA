/* Ghidra address: 00d839a0 */
/* Ghidra symbol: FUN_00d839a0 */


undefined8 FUN_00d839a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xd8);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x10));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 200);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 8));
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  pcVar3 = (code *)FUN_00411550(uVar2,0xffee);
  (*pcVar3)(uVar2,param_2);
  return 1;
}

