/* Ghidra address: 008f7a80 */
/* Ghidra symbol: FUN_008f7a80 */


void FUN_008f7a80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))
                    (*(longlong **)(param_1 + 0x10),param_3,param_4);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x70))
            (*(longlong **)(param_1 + 8),param_2,(longlong)iVar1);
  return;
}

