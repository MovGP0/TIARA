/* Ghidra address: 0041b800 */
/* Ghidra symbol: FUN_0041b800 */


longlong * FUN_0041b800(longlong *param_1)

{
  longlong *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (longlong *)*param_1;
    *param_1 = 0;
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return param_1;
}

