/* Ghidra address: 019604f0 */
/* Ghidra symbol: FUN_019604f0 */


void FUN_019604f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 local_28 [16];
  
  (**(code **)(*param_1 + 0x2b0))(param_1);
  if (param_1[0x54] == 0) {
    (**(code **)(*param_1 + 0x2b8))(param_1);
    FUN_0195ace0(param_1);
    (**(code **)(*param_1 + 0x2c0))(param_1);
  }
  FUN_019601b0(param_1);
  lVar1 = param_1[0x28];
  if (lVar1 != 0) {
    FUN_00498350(local_28,(int)param_1[0x49],*(undefined4 *)((longlong)param_1 + 0x24c),
                 (int)param_1[0x4a],
                 CONCAT44(in_stack_00000028._4_4_,*(undefined4 *)((longlong)param_1 + 0x254)),
                 in_stack_00000030);
    FUN_0197deb0(lVar1,param_1[0x51],local_28);
  }
  return;
}

