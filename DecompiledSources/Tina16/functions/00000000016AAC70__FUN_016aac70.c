/* Ghidra address: 016aac70 */
/* Ghidra symbol: FUN_016aac70 */


undefined8
FUN_016aac70(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
            undefined1 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_3 + 0x68) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_3 + 0x68) + 0x10))
                      (*(longlong **)(param_3 + 0x68),param_1,param_2,param_4,param_5,param_6);
  }
  return uVar1;
}

