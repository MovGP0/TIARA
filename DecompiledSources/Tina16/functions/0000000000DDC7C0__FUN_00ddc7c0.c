/* Ghidra address: 00ddc7c0 */
/* Ghidra symbol: FUN_00ddc7c0 */


undefined8 FUN_00ddc7c0(longlong param_1,int param_2)

{
  undefined8 in_stack_00000030;
  
  if ((param_2 < -0x25f) || (-600 < param_2)) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x268))
              (*(longlong **)(param_1 + 8),param_2,in_stack_00000030);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x260))
              (*(longlong **)(param_1 + 8),param_2,in_stack_00000030);
  }
  return 0;
}

