/* Ghidra address: 01496b50 */
/* Ghidra symbol: FUN_01496b50 */


void FUN_01496b50(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_40;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = auStack_78;
  local_20[0] = 0;
  local_28 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8b8) + 0x4e8);
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
  FUN_013b9dc0(*(undefined8 *)(param_1 + 0xc00));
  uVar3 = FUN_019a4600();
  uVar2 = FUN_019a1540(uVar3,*(longlong *)(param_1 + 0xc00) + 0xb0);
  *(undefined1 *)(*(longlong *)(param_1 + 0xc00) + 0xb8) = uVar2;
  FUN_014959c0(param_1);
  local_58 = 0;
  FUN_013bc030(*(undefined8 *)(param_1 + 0xc00),local_20,local_28,1);
  FUN_0149b690(param_1,2,local_20[0]);
  FUN_00414560(&local_28,2);
  return;
}

