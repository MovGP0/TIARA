/* Ghidra address: 008f7880 */
/* Ghidra symbol: FUN_008f7880 */


void FUN_008f7880(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8));
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
            (*(longlong **)(param_1 + 0x10),uVar1,param_3);
  return;
}

