/* Ghidra address: 0089c720 */
/* Ghidra symbol: FUN_0089c720 */


undefined4
FUN_0089c720(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined8 param_5,undefined2 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xf0))
                    (param_1,param_2,param_3,param_4,0xffffffff,param_5,param_6,param_7);
  return uVar1;
}

