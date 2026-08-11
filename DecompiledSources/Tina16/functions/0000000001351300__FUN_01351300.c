/* Ghidra address: 01351300 */
/* Ghidra symbol: FUN_01351300 */


void FUN_01351300(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  byte *local_20;
  
  (**(code **)(*param_1 + 0x2d0))(param_1,param_2,&local_20);
  uVar1 = FUN_01350fa0(param_3);
  if (*local_20 != uVar1) {
    *local_20 = (byte)uVar1;
  }
  return;
}

