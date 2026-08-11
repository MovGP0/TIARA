/* Ghidra address: 00978620 */
/* Ghidra symbol: FUN_00978620 */


undefined1 FUN_00978620(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined1 local_9;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_9 = 1;
  local_30 = *(longlong *)(param_1 + 0xa8);
  puVar1 = auStack_58;
  if (local_30 != 0) {
    iVar2 = FUN_00416420(param_2,0);
    if (iVar2 == 0) {
      FUN_0096dca0(local_30,L"UTF-8");
      puVar1 = local_20;
    }
    else {
      FUN_004168b0(&local_28,param_2);
      FUN_0096dca0(local_30,local_28);
      puVar1 = local_20;
    }
  }
  local_20 = puVar1;
  FUN_00414480(&local_28);
  return local_9;
}

