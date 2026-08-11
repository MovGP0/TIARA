/* Ghidra address: 010b90c0 */
/* Ghidra symbol: FUN_010b90c0 */


void FUN_010b90c0(longlong *param_1,undefined8 param_2)

{
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_01cf0e90(param_1,param_2);
  if (-1 < *(int *)((longlong)param_1 + 0x1c)) {
    param_1[9] = param_1[0xb];
    param_1[10] = param_1[0xc];
    (**(code **)(*param_1 + 0x50))(param_1,param_2,local_28);
    *(undefined4 *)(param_1 + 8) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x44) = local_1c;
  }
  return;
}

