/* Ghidra address: 00856190 */
/* Ghidra symbol: FUN_00856190 */


undefined1 FUN_00856190(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = 0;
  uStack_20 = 0;
  FUN_00417740(&local_28,&DAT_00850be8);
  local_28 = 0;
  uStack_20 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                    (*(longlong **)(param_1 + 0x18),param_2,&local_28);
  FUN_00417740(&local_28,&DAT_00850be8);
  return uVar1;
}

