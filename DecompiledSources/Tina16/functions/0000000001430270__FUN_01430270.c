/* Ghidra address: 01430270 */
/* Ghidra symbol: FUN_01430270 */


void FUN_01430270(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)param_1[4] + 0xb0))((longlong *)param_1[4]);
  (**(code **)(*param_1 + 0x40))(param_1,uVar1);
  return;
}

