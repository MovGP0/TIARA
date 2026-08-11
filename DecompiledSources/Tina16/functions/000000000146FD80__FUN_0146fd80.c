/* Ghidra address: 0146fd80 */
/* Ghidra symbol: FUN_0146fd80 */


void FUN_0146fd80(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4e8);
  (**(code **)(*plVar1 + 0x78))(plVar1,L">>>  ");
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4e8);
  uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_00801e40(param_1,*(undefined8 *)(param_1 + 0x750));
  FUN_0146fd40(param_1,5,uVar2);
  return;
}

