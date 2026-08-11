/* Ghidra address: 00a20b00 */
/* Ghidra symbol: FUN_00a20b00 */


void FUN_00a20b00(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[0x38];
  if (param_2 != 0) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 4;
    (*(code *)*puVar2)(param_1);
  }
  *(undefined4 *)(lVar1 + 0x60) = *(undefined4 *)((longlong)param_1 + 0x34);
  *(undefined8 *)(lVar1 + 100) = 0;
  *(int *)(lVar1 + 0x6c) = *(int *)((longlong)param_1 + 0x13c) * 2;
  return;
}

