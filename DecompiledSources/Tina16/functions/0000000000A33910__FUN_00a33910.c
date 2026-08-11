/* Ghidra address: 00a33910 */
/* Ghidra symbol: FUN_00a33910 */


void FUN_00a33910(longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((param_3 < uVar1) || (uVar1 == 0)) {
    FUN_00a339b0(param_1,uVar1 + 1);
    if (param_3 < *(uint *)(param_1 + 0x10)) {
      FUN_00409a70(*(longlong *)(param_1 + 0x18) + (ulonglong)param_3 * 8,
                   *(longlong *)(param_1 + 0x18) + (ulonglong)(param_3 + 1) * 8,
                   ((*(uint *)(param_1 + 0x10) - param_3) + -1) * 8);
    }
    FUN_00a33990(param_1,param_3,param_2);
  }
  return;
}

