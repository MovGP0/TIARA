/* Ghidra address: 0140a720 */
/* Ghidra symbol: FUN_0140a720 */


void FUN_0140a720(longlong *param_1,undefined4 param_2)

{
  longlong local_20;
  
  (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
  *(undefined4 *)(*(longlong *)(local_20 + 8) + 0x20) = param_2;
  *(undefined4 *)(local_20 + 0x18) = param_2;
  return;
}

