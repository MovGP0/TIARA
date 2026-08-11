/* Ghidra address: 00eb34e0 */
/* Ghidra symbol: FUN_00eb34e0 */


undefined1 FUN_00eb34e0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = 0;
  uStack_20 = 0;
  FUN_00417740(&local_28,&DAT_00eab588);
  local_28 = 0;
  uStack_20 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                    (*(longlong **)(param_1 + 0x18),param_2,&local_28);
  FUN_00417740(&local_28,&DAT_00eab588);
  return uVar1;
}

