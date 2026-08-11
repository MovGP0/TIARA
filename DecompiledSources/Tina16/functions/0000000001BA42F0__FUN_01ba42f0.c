/* Ghidra address: 01ba42f0 */
/* Ghidra symbol: FUN_01ba42f0 */


void FUN_01ba42f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x28))(*(longlong **)(param_1 + 0x720));
  if (*(int *)(param_1 + 0x734) < iVar2) {
    (**(code **)(**(longlong **)(param_1 + 0x720) + 0x18))
              (*(longlong **)(param_1 + 0x720),local_20,*(undefined4 *)(param_1 + 0x734));
    iVar2 = FUN_004170c0(L"draw",local_20[0],1);
    if (iVar2 < 1) {
      iVar2 = FUN_004170c0(L"mates",local_20[0],1);
      if (iVar2 < 1) {
        lVar1 = *(longlong *)(param_1 + 0x710);
        FUN_00415dd0(&local_30,local_20[0],0);
        FUN_01ba2ef0(lVar1,local_30);
        FUN_01ba11e0(local_20[0],lVar1 + 0x99c,lVar1 + 0x9a4);
        *(int *)(param_1 + 0x734) = *(int *)(param_1 + 0x734) + 1;
        goto LAB_01ba43f7;
      }
    }
    *(undefined1 *)(param_1 + 0x738) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x738) = 0;
  }
LAB_01ba43f7:
  FUN_004144d0(&local_30);
  FUN_00414560(&local_28,2);
  return;
}

