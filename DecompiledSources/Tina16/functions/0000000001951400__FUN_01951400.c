/* Ghidra address: 01951400 */
/* Ghidra symbol: FUN_01951400 */


undefined8 FUN_01951400(longlong param_1)

{
  undefined1 auStack_38 [40];
  
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))(*(longlong **)(param_1 + 0x88));
  FUN_01951370(auStack_38,param_1);
  return *(undefined8 *)(param_1 + 0x88);
}

