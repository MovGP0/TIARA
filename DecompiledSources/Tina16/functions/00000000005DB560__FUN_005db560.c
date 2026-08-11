/* Ghidra address: 005db560 */
/* Ghidra symbol: FUN_005db560 */


void FUN_005db560(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 local_28 [8];
  undefined4 local_20;
  
  FUN_00417580(local_28,&DAT_005d3e40);
  uVar1 = (**(code **)*param_1)(param_1,param_2);
  uVar2 = 0;
  if (param_1[1] != 0) {
    uVar2 = *(ulonglong *)(param_1[1] + -8);
  }
  FUN_00414b50(local_28,param_2);
  local_20 = param_3;
  FUN_00597ec0(*(longlong *)
                (param_1[1] + (longlong)(int)((ulonglong)uVar1 % (uVar2 & 0xffffffff)) * 8) + 8,
               local_28);
  FUN_00417740(local_28,&DAT_005d3e40);
  return;
}

