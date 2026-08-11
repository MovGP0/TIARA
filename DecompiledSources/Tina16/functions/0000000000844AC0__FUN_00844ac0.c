/* Ghidra address: 00844ac0 */
/* Ghidra symbol: FUN_00844ac0 */


void FUN_00844ac0(longlong *param_1,longlong *param_2)

{
  undefined1 local_28 [16];
  
  if ((*(uint *)((longlong)param_1 + 0x4d4) & 0x410) == 0x10) {
    FUN_008482c0(param_1,local_28);
    param_1[0x93] = *param_2;
    if ((*(uint *)((longlong)param_1 + 0x4d4) & 0x1000) != 0) {
      *(int *)(param_1 + 0x93) = *(int *)((longlong)param_1 + 0x4a4) + -1;
    }
    FUN_00842a20(param_1,param_2);
    (**(code **)(*param_1 + 0x288))(param_1,local_28);
  }
  else {
    FUN_00844b60(param_1,(int)*param_2,*(undefined4 *)((longlong)param_2 + 4),1,1);
  }
  return;
}

