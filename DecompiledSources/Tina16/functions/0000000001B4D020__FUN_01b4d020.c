/* Ghidra address: 01b4d020 */
/* Ghidra symbol: FUN_01b4d020 */


undefined4 FUN_01b4d020(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x14b8) + 0xb0))
                    (*(longlong **)(param_1 + 0x14b8),local_res10[0]);
  uVar1 = *(undefined4 *)(param_1 + 0x68 + (longlong)iVar2 * 0x20);
  FUN_00414480(local_res10);
  return uVar1;
}

