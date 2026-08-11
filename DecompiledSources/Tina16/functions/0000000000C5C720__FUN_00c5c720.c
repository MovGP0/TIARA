/* Ghidra address: 00c5c720 */
/* Ghidra symbol: FUN_00c5c720 */


void FUN_00c5c720(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  while (cVar1 = FUN_00c5c850(param_1), cVar1 != '\0') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8));
    FUN_00410f20(uVar2);
  }
  while (cVar1 = FUN_00c5c870(param_1), cVar1 != '\0') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(*(longlong **)(param_1 + 0x10));
    FUN_00c5c180(uVar2);
    FUN_00410f20(uVar2);
  }
  return;
}

