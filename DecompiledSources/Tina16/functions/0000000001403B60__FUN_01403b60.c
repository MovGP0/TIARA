/* Ghidra address: 01403b60 */
/* Ghidra symbol: FUN_01403b60 */


void FUN_01403b60(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined7 uVar5;
  undefined8 uVar4;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530);
  uVar5 = (undefined7)((ulonglong)param_1 >> 8);
  if (lVar1 == *(longlong *)(param_1 + 0x6e0)) {
    iVar2 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x700));
    if ((iVar2 < 1) || (*(int *)(param_1 + 0x890) < 1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (undefined4)CONCAT71(uVar5,1);
    }
  }
  else if (lVar1 == *(longlong *)(param_1 + 0x730)) {
    uVar4 = FUN_0064dd90(*(undefined8 *)(param_1 + 0x740),local_20);
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),local_20[0] != 0);
  }
  else if (lVar1 == *(longlong *)(param_1 + 0x760)) {
    if (0 < *(int *)(param_1 + 0x894)) {
      uVar4 = FUN_0064dd90(*(undefined8 *)(param_1 + 0x770),&local_28);
      if (local_28 != 0) {
        uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
        goto LAB_01403c62;
      }
    }
    uVar3 = 0;
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))(*(longlong **)(param_1 + 0x6d8))
    ;
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),(uint)uVar4 < 0x80000000);
  }
LAB_01403c62:
  (**(code **)(**(longlong **)(param_1 + 0x848) + 0x128))(*(longlong **)(param_1 + 0x848),uVar3);
  uVar4 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x700));
  (**(code **)(**(longlong **)(param_1 + 0x718) + 0x128))
            (*(longlong **)(param_1 + 0x718),
             CONCAT71((int7)((ulonglong)uVar4 >> 8),0 < (int)uVar4) & 0xffffffff);
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x128))
            (*(longlong **)(param_1 + 0x720),CONCAT71(uVar5,0 < *(int *)(param_1 + 0x890)));
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0xf0))(*(longlong **)(param_1 + 0x720));
  (**(code **)(**(longlong **)(param_1 + 0x728) + 0x128))(*(longlong **)(param_1 + 0x728),uVar3);
  (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x128))
            (*(longlong **)(param_1 + 0x7a0),CONCAT71(uVar5,0 < *(int *)(param_1 + 0x894)));
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0xf0))(*(longlong **)(param_1 + 0x7a0));
  (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x128))(*(longlong **)(param_1 + 0x7a8),uVar3);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0xf0))(*(longlong **)(param_1 + 0x7a0));
  (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x128))(*(longlong **)(param_1 + 0x7b8),uVar3);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x740),&local_30);
  (**(code **)(**(longlong **)(param_1 + 0x758) + 0x128))
            (*(longlong **)(param_1 + 0x758),local_30 != 0);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x770),&local_38);
  (**(code **)(**(longlong **)(param_1 + 0x788) + 0x128))
            (*(longlong **)(param_1 + 0x788),local_38 != 0);
  FUN_00414560(&local_38,4);
  return;
}

