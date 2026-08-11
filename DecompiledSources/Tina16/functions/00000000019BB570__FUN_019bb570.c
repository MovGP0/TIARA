/* Ghidra address: 019bb570 */
/* Ghidra symbol: FUN_019bb570 */


void FUN_019bb570(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  if (*(char *)((longlong)param_1 + 0x499) != param_2) {
    *(char *)((longlong)param_1 + 0x499) = param_2;
    lVar1 = param_1[0x93];
    FUN_019bb4e0(param_1,0);
    (**(code **)(*param_1 + 0x268))(param_1);
    FUN_019bb4e0(param_1,(char)lVar1);
  }
  return;
}

