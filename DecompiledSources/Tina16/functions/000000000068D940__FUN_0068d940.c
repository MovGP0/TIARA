/* Ghidra address: 0068d940 */
/* Ghidra symbol: FUN_0068d940 */


void FUN_0068d940(longlong *param_1,short *param_2,undefined2 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  FUN_00659710(param_1,param_2,param_3);
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  uVar3 = 0;
  cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,1);
  if ((ushort)(*param_2 - 0x20U) < 0x10) {
    bVar4 = ((int)CONCAT62((int6)((ulonglong)uVar3 >> 0x10),1) << ((byte)(*param_2 - 0x20U) & 0x1f)
            & 0x1feU) != 0;
  }
  else {
    bVar4 = false;
  }
  if ((bVar4) && (cVar1 != '\0')) {
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db130(&local_10,uVar3);
    cVar1 = (**(code **)(*local_10 + 0x48))(local_10);
    if (cVar1 == '\0') {
      *param_2 = 0;
    }
  }
  FUN_0041b800(&local_10);
  return;
}

