/* Ghidra address: 017171d0 */
/* Ghidra symbol: FUN_017171d0 */


undefined4 FUN_017171d0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0xb8))
                    (*(longlong **)(param_1 + 0x98),local_res10[0]);
  FUN_00414480(local_res10);
  return uVar1;
}

