/* Ghidra address: 005dc670 */
/* Ghidra symbol: FUN_005dc670 */


void FUN_005dc670(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 local_20;
  
  local_20 = 0;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))
                    (*(longlong **)(param_1 + 8),param_2,DAT_01de8940);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_005dbea0(param_1,&local_20,param_2);
    FUN_005e1410(lVar1,local_20,uVar2);
  }
  FUN_00414480(&local_20);
  return;
}

