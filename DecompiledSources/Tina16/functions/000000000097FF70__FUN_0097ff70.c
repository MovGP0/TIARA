/* Ghidra address: 0097ff70 */
/* Ghidra symbol: FUN_0097ff70 */


void FUN_0097ff70(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined8 local_20;
  
  local_20 = 0;
  plVar4 = param_2;
  while( true ) {
    cVar2 = (**(code **)(*param_2 + 0x30))(param_2);
    if (cVar2 == '\x04') break;
    (**(code **)(*param_2 + 0xa8))(param_2);
    cVar2 = (**(code **)(*param_2 + 0x18))(param_2);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
      plVar4 = (longlong *)(ulonglong)uVar3;
      (**(code **)(*param_2 + 8))(param_2,&local_20);
      if (param_2 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = param_2 + 0x13;
      }
      (**(code **)(*param_1 + 0x90))(param_1,plVar4,plVar5,0,local_20);
    }
    bVar1 = (**(code **)(*param_2 + 0x30))(param_2);
    if (bVar1 < 0x10) {
      uVar3 = (int)CONCAT62((int6)((ulonglong)plVar4 >> 0x10),1) << (bVar1 & 0x1f);
      plVar4 = (longlong *)(ulonglong)uVar3;
      bVar6 = (uVar3 & 0xe6b) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      plVar4 = (longlong *)param_2[7];
      (**(code **)(*param_1 + 0xe8))(param_1,plVar4);
    }
  }
  FUN_00414520(&local_20);
  return;
}

