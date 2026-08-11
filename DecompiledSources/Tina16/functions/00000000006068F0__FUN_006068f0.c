/* Ghidra address: 006068f0 */
/* Ghidra symbol: FUN_006068f0 */


void FUN_006068f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined1 local_9;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_30 = 0;
  local_9 = *(undefined1 *)(param_1 + 0x50);
  FUN_00441a10(&local_30,param_2);
  FUN_0043e600(&local_28,local_30);
  iVar1 = FUN_00416db0(local_28,L".wmf");
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  FUN_006022b0(param_1,param_2);
  *(undefined1 *)(param_1 + 0x50) = local_9;
  FUN_00414560(&local_30,2);
  return;
}

