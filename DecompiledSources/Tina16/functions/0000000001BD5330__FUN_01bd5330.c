/* Ghidra address: 01bd5330 */
/* Ghidra symbol: FUN_01bd5330 */


void FUN_01bd5330(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_01c06460(param_1,param_2);
  if (param_2 != 0) {
    lVar1 = FUN_01bfd980(param_2);
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x360) + 0xd0))(*(longlong **)(param_1 + 0x360));
    if (lVar1 != lVar2) {
      uVar3 = FUN_01bfd980(param_2);
      FUN_0064c270(*(undefined8 *)(param_1 + 0x360),uVar3);
    }
  }
  return;
}

