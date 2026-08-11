/* Ghidra address: 015bfd70 */
/* Ghidra symbol: FUN_015bfd70 */


longlong * FUN_015bfd70(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong local_28;
  longlong *local_10;
  
  uVar1 = (**(code **)*param_1)(param_1);
  local_28 = param_1[1];
  if (local_28 != 0) {
    local_28 = *(longlong *)(local_28 + -8);
  }
  local_10 = (longlong *)(param_1[1] + (longlong)(int)(uVar1 % (uint)local_28) * 8);
  while( true ) {
    if (*local_10 == 0) {
      return local_10;
    }
    iVar2 = FUN_00416db0(*(undefined8 *)(*local_10 + 8),param_2);
    if (iVar2 == 0) break;
    local_10 = (longlong *)*local_10;
  }
  return local_10;
}

