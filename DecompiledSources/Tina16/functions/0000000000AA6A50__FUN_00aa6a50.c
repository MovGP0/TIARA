/* Ghidra address: 00aa6a50 */
/* Ghidra symbol: FUN_00aa6a50 */


undefined8 FUN_00aa6a50(longlong param_1,undefined2 *param_2,int param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x9c) < *(int *)(param_1 + 0xa0)) {
    uVar1 = FUN_00a73060(&PTR_FUN_00a698e8,
                         CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0xa0) >> 8),1),param_2,
                         param_3);
    uVar1 = FUN_00aa68c0(param_1,uVar1);
  }
  else if (param_3 < 1) {
    uVar1 = 0;
  }
  else {
    *param_2 = 0;
    uVar1 = 1;
  }
  return uVar1;
}

