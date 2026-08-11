/* Ghidra address: 01cc1f80 */
/* Ghidra symbol: FUN_01cc1f80 */


void FUN_01cc1f80(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x48))
                    (*param_2,CONCAT71((int7)((ulonglong)param_3 >> 8),1) & 0xffffffff,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x50))(*(longlong **)(param_1 + 0x70),uVar1);
  return;
}

