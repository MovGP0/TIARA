/* Ghidra address: 01520770 */
/* Ghidra symbol: FUN_01520770 */


void FUN_01520770(longlong param_1,undefined8 param_2,short *param_3)

{
  short sVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  undefined8 local_40;
  undefined8 local_38;
  short *local_30 [2];
  undefined8 local_20;
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = (short *)0x0;
  local_20 = 0;
  if (*param_3 == 0xd) {
    *param_3 = 0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0xe38);
    iVar3 = (**(code **)(*plVar2 + 0x270))(plVar2);
    if (iVar3 != 1) {
      (**(code **)(*plVar2 + 0x288))(plVar2,1);
    }
    (**(code **)(*plVar2 + 0x280))(plVar2,local_30);
    sVar1 = *local_30[0];
    if ((ushort)(*param_3 - 0x60U) < 0x20) {
      bVar4 = (1 << ((byte)(*param_3 - 0x60U) & 0x1f) & 0x7fffffeU) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      *param_3 = *param_3 + -0x20;
    }
    if ((ushort)(sVar1 - 0x30U) < 0x40) {
      bVar4 = (1L << ((byte)(sVar1 - 0x30U) & 0x3f) & 0x10000000003U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      if ((ushort)(*param_3 - 0x30U) < 0x40) {
        bVar4 = (1L << ((byte)(*param_3 - 0x30U) & 0x3f) & 0x10000000003U) != 0;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        FUN_00416780(&local_38,*param_3);
        FUN_00681590(plVar2,local_38);
      }
    }
    (**(code **)(*plVar2 + 0x288))(plVar2,1);
    iVar3 = *(int *)(param_1 + 0xebc);
    if (iVar3 != -1) {
      FUN_0064dd90(plVar2,&local_40);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd70) + 0x4f0);
      (**(code **)(*plVar2 + 0x40))(plVar2,iVar3,local_40);
    }
    *param_3 = 0;
  }
  FUN_00414480(&local_40);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  return;
}

