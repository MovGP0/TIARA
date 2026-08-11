/* Ghidra address: 01bd7910 */
/* Ghidra symbol: FUN_01bd7910 */


void FUN_01bd7910(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  undefined8 *local_18;
  longlong *local_10;
  
  local_30 = auStack_58;
  FUN_01bd6560(param_1);
  if (*(longlong *)(param_1 + 0x580) != 0) {
    while (iVar1 = FUN_00611650(*(undefined8 *)(param_1 + 0x580)), 0 < iVar1) {
      local_10 = *(longlong **)(param_1 + 0x580);
      uVar2 = (**(code **)(*local_10 + 8))(local_10);
      FUN_0064dbe0(uVar2,1);
    }
    local_18 = (undefined8 *)(param_1 + 0x580);
    local_20 = *local_18;
    *local_18 = 0;
    FUN_00410f20(local_20);
  }
  FUN_01c02a80(param_1);
  FUN_01bd7110(param_1);
  return;
}

