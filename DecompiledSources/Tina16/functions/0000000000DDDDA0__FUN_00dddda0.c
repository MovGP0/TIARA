/* Ghidra address: 00dddda0 */
/* Ghidra symbol: FUN_00dddda0 */


void FUN_00dddda0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20 [2];
  
  local_30 = auStack_58;
  local_20[0] = 0;
  FUN_00ddd3d0(param_1);
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x68) = uVar1;
  uVar1 = FUN_0041b800(local_20);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x20))
                    (*(longlong **)(param_1 + 0x4c8),0,0,uVar1);
  FUN_006245b0(uVar2);
  FUN_00ddd9a0(auStack_58,local_20[0]);
  FUN_0041b800(local_20);
  return;
}

