/* Ghidra address: 0197c280 */
/* Ghidra symbol: FUN_0197c280 */


undefined8 FUN_0197c280(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_00410ae0(*param_2,local_20);
  iVar1 = (**(code **)(*param_1 + 0xb0))(param_1,local_20[0]);
  if (iVar1 != -1) {
    lVar2 = FUN_0197e870(param_1,iVar1);
    if (0 < *(int *)(*(longlong *)(lVar2 + 0x20) + 0x10)) {
      local_28 = FUN_0197e870(param_1,iVar1);
    }
  }
  FUN_00414480(local_20);
  return local_28;
}

