/* Ghidra address: 01306720 */
/* Ghidra symbol: FUN_01306720 */


void FUN_01306720(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  FUN_0064de00(*(undefined8 *)(param_1 + 0x898),L"Use local range");
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x260))(*(longlong **)(param_1 + 0x838));
  if (iVar2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x898);
    FUN_0064dd90(uVar1,local_20);
    FUN_00416ad0(local_20,L" [s]");
    FUN_0064de00(uVar1,local_20[0]);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x868),&DAT_013069ac);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x870),&DAT_013069ac);
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x260))(*(longlong **)(param_1 + 0x838))
    ;
    if (iVar2 == 1) {
      uVar1 = *(undefined8 *)(param_1 + 0x898);
      FUN_0064dd90(uVar1,&local_28);
      FUN_00416ad0(&local_28,L" [V|A]");
      FUN_0064de00(uVar1,local_28);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x868),L"[V|A]");
      FUN_0064de00(*(undefined8 *)(param_1 + 0x870),L"[V|A]");
    }
    else {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x260))
                        (*(longlong **)(param_1 + 0x838));
      if (iVar2 == 2) {
        uVar1 = *(undefined8 *)(param_1 + 0x898);
        FUN_0064dd90(uVar1,&local_30);
        FUN_00416ad0(&local_30,L" [Hz]");
        FUN_0064de00(uVar1,local_30);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x868),L"[Hz]");
        FUN_0064de00(*(undefined8 *)(param_1 + 0x870),L"[Hz]");
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x898) + 0x198))(*(longlong **)(param_1 + 0x898));
  (**(code **)(**(longlong **)(param_1 + 0x868) + 0x198))(*(longlong **)(param_1 + 0x868));
  (**(code **)(**(longlong **)(param_1 + 0x870) + 0x198))(*(longlong **)(param_1 + 0x870));
  FUN_00414560(&local_30,3);
  return;
}

