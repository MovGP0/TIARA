/* Ghidra address: 004b1830 */
/* Ghidra symbol: FUN_004b1830 */


void FUN_004b1830(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if ((plVar1 != (longlong *)0x0) && ((int)plVar1[3] == 0)) {
    if (param_2 != '\0') {
      param_1 = 0;
    }
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  }
  return;
}

