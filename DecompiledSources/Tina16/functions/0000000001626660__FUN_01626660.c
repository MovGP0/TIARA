/* Ghidra address: 01626660 */
/* Ghidra symbol: FUN_01626660 */


void FUN_01626660(longlong *param_1,longlong param_2)

{
  longlong local_20;
  
  (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
  *(undefined8 *)(local_20 + 0x38) = *(undefined8 *)(param_2 + 0x20);
  return;
}

