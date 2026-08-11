/* Ghidra address: 0074b3f0 */
/* Ghidra symbol: FUN_0074b3f0 */


void FUN_0074b3f0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  while (*(int *)(*(longlong *)(param_1 + 0x498) + 0x10) < param_2) {
    FUN_0074ab20(&PTR_FUN_0074a770,1,param_1);
  }
  while (param_2 < *(int *)(*(longlong *)(param_1 + 0x498) + 0x10)) {
    uVar1 = FUN_004aecf0(*(longlong *)(param_1 + 0x498));
    FUN_00410f20(uVar1);
  }
  return;
}

