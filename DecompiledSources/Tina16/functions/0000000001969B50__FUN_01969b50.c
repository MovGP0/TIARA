/* Ghidra address: 01969b50 */
/* Ghidra symbol: FUN_01969b50 */


void FUN_01969b50(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  FUN_0195b1a0(param_1,param_2,param_3,param_4,param_5,param_6);
  (**(code **)(*(longlong *)param_2[0xe] + 0x10))
            ((longlong *)param_2[0xe],*(undefined8 *)(param_1 + 0x78));
  (**(code **)(*param_2 + 0x120))
            (param_2,*(int *)(param_1 + 0x248) + 2,*(int *)(param_1 + 0x24c) + 2,
             *(undefined8 *)(param_1 + 0x10));
  return;
}

