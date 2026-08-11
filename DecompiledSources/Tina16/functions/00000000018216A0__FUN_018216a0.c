/* Ghidra address: 018216a0 */
/* Ghidra symbol: FUN_018216a0 */


bool FUN_018216a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool local_31;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0xb0))
                      (*(longlong **)(param_1 + 0x78),param_2);
    local_31 = iVar1 != -1;
  }
  else {
    local_31 = false;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x78) + 0x18))
                  (*(longlong **)(param_1 + 0x78),local_30,iVar3);
        iVar2 = FUN_00416db0(local_30[0],param_2);
        local_31 = iVar2 == 0;
        if (local_31) break;
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00414480(local_30);
  return local_31;
}

