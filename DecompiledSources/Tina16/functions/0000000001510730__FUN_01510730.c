/* Ghidra address: 01510730 */
/* Ghidra symbol: FUN_01510730 */


void FUN_01510730(longlong param_1,undefined8 param_2,short *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong local_38;
  undefined8 local_30;
  short *local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = (short *)0x0;
  local_20 = 0;
  if (*param_3 == 0xd) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0xd68),&local_20);
    FUN_00414ad0(*(longlong *)(param_1 + 0xed8) + 0x30,local_20);
    *param_3 = 0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0xd68);
    iVar2 = (**(code **)(*plVar1 + 0x270))(plVar1);
    if (iVar2 != 1) {
      (**(code **)(*plVar1 + 0x288))(plVar1,1);
    }
    (**(code **)(*plVar1 + 0x280))(plVar1,&local_28);
    if ((ushort)(*local_28 - 0x28U) < 0x58) {
      uVar4 = ((ulonglong)(ushort)(*local_28 - 0x28U) & 0x7f) + 0x20;
      bVar5 = (*(byte *)(((longlong)uVar4 >> 3) + 0x1510990) >> (uVar4 & 7) & 1) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      if ((ushort)(*param_3 - 0x28U) < 0x58) {
        uVar4 = ((ulonglong)(ushort)(*param_3 - 0x28U) & 0x7f) + 0x20;
        bVar5 = (*(byte *)(((longlong)uVar4 >> 3) + 0x1510990) >> (uVar4 & 7) & 1) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        if ((ushort)(*param_3 - 0x60U) < 0x20) {
          bVar5 = (1 << ((byte)(*param_3 - 0x60U) & 0x1f) & 0x7fffffeU) != 0;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          *param_3 = *param_3 + -0x20;
        }
        FUN_00416780(&local_30,*param_3);
        FUN_00681590(plVar1,local_30);
        iVar3 = (**(code **)(*plVar1 + 0x278))(plVar1);
        FUN_0064dd90(plVar1,&local_38);
        iVar2 = 0;
        if (local_38 != 0) {
          iVar2 = *(int *)(local_38 + -4);
        }
        if (iVar2 + -1 <= iVar3) {
          iVar2 = (**(code **)(*plVar1 + 0x278))(plVar1);
          (**(code **)(*plVar1 + 0x290))(plVar1,iVar2 + -1);
        }
      }
    }
    (**(code **)(*plVar1 + 0x288))(plVar1,1);
    *param_3 = 0;
  }
  FUN_00414480(&local_38);
  FUN_00414560(&local_30,2);
  FUN_00414480(&local_20);
  return;
}

