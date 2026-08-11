/* Ghidra address: 007ae830 */
/* Ghidra symbol: FUN_007ae830 */


undefined1 FUN_007ae830(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00417740(&local_30,&DAT_0076f818);
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                    (*(longlong **)(param_1 + 0x18),param_2,&local_30);
  FUN_00417740(&local_30,&DAT_0076f818);
  return uVar1;
}

