/* Ghidra address: 01bfc800 */
/* Ghidra symbol: FUN_01bfc800 */


void FUN_01bfc800(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x29) != param_2) {
    *(char *)(param_1 + 0x29) = param_2;
    lVar1 = FUN_01bfc680(param_1);
    if (lVar1 != 0) {
      uVar2 = FUN_01bfc680(param_1);
      plVar3 = (longlong *)FUN_01c07120(uVar2);
      (**(code **)(*plVar3 + 0x358))(plVar3);
    }
  }
  return;
}

