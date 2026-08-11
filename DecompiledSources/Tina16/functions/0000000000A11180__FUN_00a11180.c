/* Ghidra address: 00a11180 */
/* Ghidra symbol: FUN_00a11180 */


void FUN_00a11180(longlong param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                 longlong param_5,uint *param_6)

{
  (**(code **)(*(longlong *)(param_1 + 0x260) + 0x18))
            (param_1,param_2,*param_3,(ulonglong)*param_6 * 8 + param_5);
  *param_6 = *param_6 + 1;
  *param_3 = *param_3 + 1;
  return;
}

