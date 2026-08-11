/* Ghidra address: 01beb5a0 */
/* Ghidra symbol: FUN_01beb5a0 */


void FUN_01beb5a0(longlong param_1,undefined4 param_2,undefined2 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  longlong *plVar1;
  
  *(undefined1 *)(param_1 + 0x369) = 0;
  FUN_01bd3820(param_1,param_2,param_3,param_4,param_5);
  if (((char)param_2 == '\0') && (*(char *)(param_1 + 0x368) != '\0')) {
    plVar1 = (longlong *)FUN_01beb450(param_1);
    (**(code **)(*plVar1 + 0x408))(plVar1);
  }
  return;
}

