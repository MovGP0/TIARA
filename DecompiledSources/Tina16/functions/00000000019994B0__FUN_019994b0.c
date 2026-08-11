/* Ghidra address: 019994b0 */
/* Ghidra symbol: FUN_019994b0 */


void FUN_019994b0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  
  iVar6 = -1;
  bVar1 = false;
LAB_019994ce:
  do {
    iVar6 = iVar6 + 1;
    if (iVar6 < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10)) {
      uVar4 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar6);
      cVar2 = FUN_0198a580(uVar4);
      if (cVar2 != '\x04') goto LAB_019994ce;
    }
    if (iVar6 < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10)) {
      uVar4 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar6);
      cVar2 = FUN_0198a580(uVar4);
      if (cVar2 == '\x04') {
        plVar5 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar6);
        sVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        if (sVar3 == 0x2900) {
          FUN_01cfff60(plVar5);
        }
      }
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return;
    }
  } while( true );
}

