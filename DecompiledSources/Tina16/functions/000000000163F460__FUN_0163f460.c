/* Ghidra address: 0163f460 */
/* Ghidra symbol: FUN_0163f460 */


void FUN_0163f460(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  int local_20;
  int local_1c;
  
  FUN_004b84c0(param_2,&local_1c,4);
  if (local_1c != 0) {
    FUN_016292a0(param_2,param_3);
  }
  FUN_004b84c0(param_2,param_3 + 0x28,1);
  FUN_004b84c0(param_2,param_3 + 0x14,4);
  FUN_004b84c0(param_2,param_3 + 0x18,4);
  FUN_004b84c0(param_2,param_3 + 0x1c,4);
  FUN_004b84c0(param_2,param_3 + 0x20,4);
  FUN_004b84c0(param_2,param_3 + 0x24,4);
  FUN_004b84c0(param_2,param_3 + 0x10,4);
  FUN_004b84c0(param_2,&local_20,4);
  uVar1 = FUN_00409570((longlong)local_20);
  *(undefined8 *)(param_3 + 8) = uVar1;
  FUN_004b84c0(param_2,uVar1,(longlong)local_20);
  return;
}

