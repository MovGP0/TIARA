/* Ghidra address: 00744f90 */
/* Ghidra symbol: FUN_00744f90 */


void FUN_00744f90(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  if ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) {
    if ((*(int *)(param_2 + 0x10) == 0) ||
       (*(longlong **)(*(longlong *)(param_2 + 8) + 0x78) != param_1)) {
      FUN_00747120(param_1[0x98],*(undefined8 *)(param_2 + 8));
    }
    else {
      FUN_00654400(param_1);
      FUN_0064c1a0(*(undefined8 *)(param_2 + 8),0);
      FUN_00746ef0(param_1[0x98],*(undefined8 *)(param_2 + 8),0xffffffff,0xffffffff);
      FUN_00654410(param_1);
    }
  }
  return;
}

