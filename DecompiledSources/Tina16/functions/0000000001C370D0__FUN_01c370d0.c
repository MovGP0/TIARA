/* Ghidra address: 01c370d0 */
/* Ghidra symbol: FUN_01c370d0 */


void FUN_01c370d0(longlong *param_1,undefined1 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  *(undefined1 *)(param_1 + 0x92) = 1;
  (**(code **)(*param_1 + 0x268))(param_1,param_2);
  *(undefined1 *)(param_1 + 0x92) = 0;
  return;
}

