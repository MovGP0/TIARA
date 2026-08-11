/* Ghidra address: 01471190 */
/* Ghidra symbol: FUN_01471190 */


void FUN_01471190(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_24 [4];
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_01471150(param_1);
  uVar2 = FUN_019a4600();
  FUN_013b73b0(uVar2,local_20,local_24);
  uVar2 = FUN_019a4600();
  FUN_0199cfa0(uVar2,FUN_01471130);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4e8);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4e8);
  (**(code **)(*plVar1 + 0x88))(plVar1,local_20);
  FUN_00410f20(local_20);
  return;
}

