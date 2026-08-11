/* Ghidra address: 00ddf130 */
/* Ghidra symbol: FUN_00ddf130 */


undefined8 FUN_00ddf130(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00ddd3d0(param_1);
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    uVar2 = FUN_00414520(local_20);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4d0) + 0x18))
                      (*(longlong **)(param_1 + 0x4d0),param_3,uVar2);
    if (iVar1 == 0) {
      FUN_004168b0(param_2,local_20[0]);
      goto code_r0x00ddf1b4;
    }
  }
  FUN_00ddf4a0(param_1,param_2,param_3);
code_r0x00ddf1b4:
  FUN_00414520(local_20);
  return param_2;
}

