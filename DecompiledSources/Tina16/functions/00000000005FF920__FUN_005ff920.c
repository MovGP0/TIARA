/* Ghidra address: 005ff920 */
/* Ghidra symbol: FUN_005ff920 */


void FUN_005ff920(longlong *param_1,ulonglong *param_2)

{
  undefined4 uStack_1c;
  
  uStack_1c = (undefined4)(*param_2 >> 0x20);
  (**(code **)(*param_1 + 200))(param_1,*param_2 & 0xffffffff,uStack_1c);
  return;
}

