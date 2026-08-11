/* Ghidra address: 008f7dd0 */
/* Ghidra symbol: FUN_008f7dd0 */


void FUN_008f7dd0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))
                    (*(longlong **)(param_1 + 0x10),param_4);
  (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
            (*(longlong **)(param_1 + 8),param_2,param_3,(longlong)iVar1);
  return;
}

