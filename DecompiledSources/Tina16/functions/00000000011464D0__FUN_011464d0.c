/* Ghidra address: 011464d0 */
/* Ghidra symbol: FUN_011464d0 */


undefined1 FUN_011464d0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00417740(&local_30,&DAT_01b008e8);
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                    (*(longlong **)(param_1 + 0x18),param_2,&local_30);
  FUN_00417740(&local_30,&DAT_01b008e8);
  return uVar1;
}

