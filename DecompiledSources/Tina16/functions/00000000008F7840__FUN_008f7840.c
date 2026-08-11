/* Ghidra address: 008f7840 */
/* Ghidra symbol: FUN_008f7840 */


undefined8 FUN_008f7840(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),param_3);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
            (*(longlong **)(param_1 + 0x10),param_2,uVar1);
  return param_2;
}

