/* Ghidra address: 017706b0 */
/* Ghidra symbol: FUN_017706b0 */


char FUN_017706b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  char local_29;
  longlong local_28;
  longlong local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_29 = FUN_0176a500(param_1,param_2);
  if (local_29 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x38))(*(longlong **)(param_1 + 0xb0),&local_20);
    lVar1 = local_20;
    (**(code **)(**(longlong **)(param_2 + 0xb0) + 0x38))(*(longlong **)(param_2 + 0xb0),&local_28);
    if (((lVar1 != local_28) && (lVar1 != 0)) && (local_28 != 0)) {
      FUN_0043e420(lVar1,local_28);
    }
    iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_2 + 0x108));
    local_29 = iVar2 == 0;
  }
  FUN_00414560(&local_28,2);
  return local_29;
}

