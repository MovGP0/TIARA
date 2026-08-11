/* Ghidra address: 008f4d50 */
/* Ghidra symbol: FUN_008f4d50 */


void FUN_008f4d50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 8))
                    (*(longlong **)(param_1 + 0x48),param_3,param_4);
  *param_5 = uVar1;
  return;
}

