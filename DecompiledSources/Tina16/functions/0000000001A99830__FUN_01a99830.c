/* Ghidra address: 01a99830 */
/* Ghidra symbol: FUN_01a99830 */


void FUN_01a99830(longlong *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(char *)((longlong)param_1 + 299) == '\0') {
    uVar1 = FUN_01a99930(param_1);
    uVar2 = FUN_01a99940(param_1);
    (**(code **)(*param_1 + 0x58))(param_1,param_2 + -1,param_3 + -1,param_2 + 2,param_3 + 2);
    (**(code **)(*param_1 + 0x40))(param_1,uVar1,uVar2);
  }
  return;
}

