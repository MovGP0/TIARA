/* Ghidra address: 0197c460 */
/* Ghidra symbol: FUN_0197c460 */


void FUN_0197c460(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  
  if (param_4 != '\0') {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x278))(param_1);
    (**(code **)(*plVar1 + 0x110))(plVar1,param_2);
  }
  return;
}

