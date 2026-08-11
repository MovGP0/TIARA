/* Ghidra address: 01d857b0 */
/* Ghidra symbol: FUN_01d857b0 */


void FUN_01d857b0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_01d849e0(local_20);
    FUN_01d84b00(&local_10,local_20[0]);
    LOCK();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = local_10;
    UNLOCK();
    local_10 = uVar1;
  }
  FUN_00414480(local_20);
  FUN_0041b800(&local_10);
  return;
}

