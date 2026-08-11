/* Ghidra address: 007ac060 */
/* Ghidra symbol: FUN_007ac060 */


undefined1 FUN_007ac060(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00417740(&local_38,&DAT_0075cb10);
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                    (*(longlong **)(param_1 + 0x18),param_2,&local_38);
  FUN_00417740(&local_38,&DAT_0075cb10);
  return uVar1;
}

