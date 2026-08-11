/* Ghidra address: 01531f80 */
/* Ghidra symbol: FUN_01531f80 */


void FUN_01531f80(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_0152fa50(param_1,param_2);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1c30) + 0xa8))
                      (*(longlong **)(param_1 + 0x1c30));
    if (cVar1 != '\0') {
      FUN_00724270(*(undefined8 *)(param_1 + 0x1c30),&local_10);
      FUN_01530bb0(param_1,local_10);
    }
  }
  FUN_00414480(&local_10);
  return;
}

