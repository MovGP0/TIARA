/* Ghidra address: 00685bd0 */
/* Ghidra symbol: FUN_00685bd0 */


void FUN_00685bd0(longlong *param_1,short *param_2,undefined2 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ushort uVar4;
  bool bVar5;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  FUN_00659710(param_1,param_2,param_3);
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,1);
  uVar4 = *param_2 - 8;
  if (uVar4 < 0xf8) {
    bVar5 = ((byte)(&DAT_00685d18)[(longlong)(ulonglong)uVar4 >> 3] >> ((ulonglong)uVar4 & 7) & 1)
            != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    if (cVar1 == '\0') {
      bVar5 = false;
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db130(&local_10,uVar3);
      cVar1 = (**(code **)(*local_10 + 0x48))(local_10);
      bVar5 = cVar1 == '\0';
    }
    if (bVar5) {
      if ((ushort)(*param_2 - 0x20U) < 0x10) {
        bVar5 = ((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) <<
                 ((byte)(*param_2 - 0x20U) & 0x1f) & 0x140U) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        *param_2 = 0;
      }
    }
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db5e0(uVar3);
  }
  FUN_0041b800(&local_10);
  return;
}

