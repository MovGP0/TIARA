/* Ghidra address: 00786200 */
/* Ghidra symbol: FUN_00786200 */


void FUN_00786200(longlong param_1,longlong *param_2)

{
  undefined1 local_28 [16];
  
  FUN_005fdab0(param_2[0x10],
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + 0x28));
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))(*(longlong **)(param_1 + 0x10),local_28);
  (**(code **)(*param_2 + 0xa8))(param_2,local_28);
  return;
}

