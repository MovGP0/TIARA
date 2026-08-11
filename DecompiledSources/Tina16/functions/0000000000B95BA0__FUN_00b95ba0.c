/* Ghidra address: 00b95ba0 */
/* Ghidra symbol: FUN_00b95ba0 */


void FUN_00b95ba0(int *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  short local_10;
  short sStack_e;
  short sStack_c;
  short sStack_a;
  
  uVar1 = *param_2;
  local_10 = (short)uVar1;
  *param_1 = (int)local_10;
  sStack_e = (short)((ulonglong)uVar1 >> 0x10);
  param_1[1] = (int)sStack_e;
  sStack_c = (short)((ulonglong)uVar1 >> 0x20);
  param_1[2] = (int)sStack_c;
  sStack_a = (short)((ulonglong)uVar1 >> 0x30);
  param_1[3] = (int)sStack_a;
  return;
}

