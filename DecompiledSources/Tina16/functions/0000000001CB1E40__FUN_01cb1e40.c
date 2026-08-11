/* Ghidra address: 01cb1e40 */
/* Ghidra symbol: FUN_01cb1e40 */


void FUN_01cb1e40(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*param_2 + 0x48))
                    (*param_2,CONCAT71((int7)((ulonglong)param_3 >> 8),1) & 0xffffffff,param_2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 8);
  (**(code **)(*plVar1 + 0x50))(plVar1,uVar2);
  return;
}

