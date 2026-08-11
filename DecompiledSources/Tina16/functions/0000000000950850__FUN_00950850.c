/* Ghidra address: 00950850 */
/* Ghidra symbol: FUN_00950850 */


undefined8 FUN_00950850(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    uVar3 = 0;
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x18);
    cVar2 = (**(code **)(*plVar1 + 0x168))(plVar1);
    if (cVar2 == '\x01') {
      uVar3 = FUN_004113f0(plVar1,&PTR_FUN_0090a420);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

