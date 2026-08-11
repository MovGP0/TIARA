/* Ghidra address: 015106a0 */
/* Ghidra symbol: FUN_015106a0 */


void FUN_015106a0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc00) + 0x4f0);
  iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (0 < iVar2) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0xc00) + 0x260))(*(longlong **)(param_1 + 0xc00))
    ;
    if (-1 < iVar2) {
      plVar1 = *(longlong **)(param_1 + 0xc00);
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      uVar4 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
      uVar4 = FUN_004113f0(uVar4,&PTR_FUN_01106460);
      *(undefined8 *)(*(longlong *)(param_1 + 0xed8) + 0x40) = uVar4;
      FUN_01512450(param_1,6);
    }
  }
  return;
}

