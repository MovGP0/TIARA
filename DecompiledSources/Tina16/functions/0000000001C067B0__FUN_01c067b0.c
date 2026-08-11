/* Ghidra address: 01c067b0 */
/* Ghidra symbol: FUN_01c067b0 */


void FUN_01c067b0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_38 = (int)uVar1;
  if ((((local_38 != *(int *)((longlong)param_1 + 0x334)) ||
       (local_34 = (int)((ulonglong)uVar1 >> 0x20), local_34 != (int)param_1[0x68])) ||
      (local_30 = (int)uVar2, local_30 != *(int *)((longlong)param_1 + 0x33c))) ||
     (local_2c = (int)((ulonglong)uVar2 >> 0x20), local_2c != (int)param_1[0x68])) {
    *(undefined8 *)((longlong)param_1 + 0x334) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x33c) = uVar2;
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  return;
}

