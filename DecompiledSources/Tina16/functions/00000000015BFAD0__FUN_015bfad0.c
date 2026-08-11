/* Ghidra address: 015bfad0 */
/* Ghidra symbol: FUN_015bfad0 */


void FUN_015bfad0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong local_28;
  
  uVar1 = (**(code **)*param_1)(param_1);
  local_28 = param_1[1];
  if (local_28 != 0) {
    local_28 = *(longlong *)(local_28 + -8);
  }
  puVar2 = (undefined8 *)FUN_00418560(0x18,&DAT_015b9720);
  FUN_00414ad0(puVar2 + 1,param_2);
  *(undefined4 *)(puVar2 + 2) = param_3;
  *puVar2 = *(undefined8 *)(param_1[1] + (longlong)(int)(uVar1 % (uint)local_28) * 8);
  *(undefined8 **)(param_1[1] + (longlong)(int)(uVar1 % (uint)local_28) * 8) = puVar2;
  return;
}

