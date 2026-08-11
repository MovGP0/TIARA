/* Ghidra address: 01858060 */
/* Ghidra symbol: FUN_01858060 */


undefined1 * FUN_01858060(undefined8 param_1,undefined1 *param_2,longlong *param_3)

{
  undefined1 uVar1;
  
  *param_2 = 0;
  uVar1 = (**(code **)(*param_3 + 0x58))(param_3);
  param_2[1] = uVar1;
  *(undefined4 *)(param_2 + 2) = 0x1fffffff;
  *(uint *)(param_2 + 6) = (uint)*(byte *)(param_3 + 0xe);
  uVar1 = FUN_01857f30(param_1,*(undefined4 *)((longlong)param_3 + 0x6c));
  param_2[10] = uVar1;
  return param_2;
}

