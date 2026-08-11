/* Ghidra address: 0185a730 */
/* Ghidra symbol: FUN_0185a730 */


undefined1 * FUN_0185a730(longlong param_1,undefined1 *param_2,longlong *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar1 = (**(code **)(param_1 + 0xb0))(param_1,param_3);
  *param_2 = uVar1;
  uVar1 = (**(code **)(*param_3 + 0x58))(param_3);
  param_2[1] = uVar1;
  uVar2 = FUN_00a3c5c0(param_3);
  *(undefined4 *)(param_2 + 2) = uVar2;
  *(undefined4 *)(param_2 + 6) = 100;
  lVar3 = FUN_00a39e90(param_3);
  uVar1 = FUN_0185a7a0(param_1,*(undefined1 *)(lVar3 + 0x491));
  param_2[10] = uVar1;
  return param_2;
}

