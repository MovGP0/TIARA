/* Ghidra address: 00d8d960 */
/* Ghidra symbol: FUN_00d8d960 */


void FUN_00d8d960(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  
  plVar1 = param_2;
  FUN_00d7f630(param_1,param_2,param_3,param_4);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    if ((byte)param_3 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)plVar1 >> 8),1) << ((byte)param_3 & 0x1f) & 0xf0U) !=
              0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      plVar1 = (longlong *)FUN_00d74650(*(longlong *)(param_1 + 0x48),param_4);
      if (plVar1 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar1 + 0x88))(plVar1);
        (**(code **)(*param_2 + 0x10))(param_2,uVar2);
      }
    }
  }
  return;
}

