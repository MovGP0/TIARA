/* Ghidra address: 0060e280 */
/* Ghidra symbol: FUN_0060e280 */


void FUN_0060e280(longlong param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  FUN_0041b800(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_00608c80(&PTR_FUN_005f92e8,1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0xd0))
            (*(longlong **)(param_1 + 0x50),param_2,param_3,param_4);
  FUN_0060da90(param_1);
  return;
}

