/* Ghidra address: 018b30b0 */
/* Ghidra symbol: FUN_018b30b0 */


void FUN_018b30b0(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0x508) == 1) {
    uVar5 = FUN_0188d920();
    lVar6 = FUN_0188d190(uVar5);
    FUN_00414480(lVar6 + 0x48);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718))
    ;
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0xa8))
                        (*(longlong **)(param_1 + 0x6e8));
      if (cVar2 == '\0') {
        *(undefined4 *)(param_1 + 0x508) = 2;
      }
      else {
        uVar5 = FUN_0188d920();
        lVar6 = FUN_0188d190(uVar5);
        FUN_00724270(*(undefined8 *)(param_1 + 0x6e8),&local_28);
        FUN_004414c0(local_20,local_28,L".prn");
        FUN_00414ad0(lVar6 + 0x48,local_20[0]);
      }
    }
  }
  else {
    uVar5 = FUN_0188d920();
    FUN_0188d0f0(uVar5,*(undefined4 *)(param_1 + 0x7f8));
  }
  if (*(int *)(param_1 + 0x508) == 1) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x778),&local_30);
    if (local_30 == 0) {
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 8) = 1;
    }
    else {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x778),&local_38);
      uVar3 = FUN_0043fc00(local_38);
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 8) = uVar3;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x780) + 0x260))(*(longlong **)(param_1 + 0x780))
    ;
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 0xc) = uVar1;
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730))
    ;
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))
                        (*(longlong **)(param_1 + 0x738));
      if (cVar2 == '\0') {
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x748),&local_48);
        FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 0x10,local_48);
      }
      else {
        lVar6 = FUN_0196f540(*(undefined8 *)(param_1 + 0x810));
        FUN_0043f750(&local_40,*(undefined4 *)(lVar6 + 0x10));
        FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 0x10,local_40);
      }
    }
    else {
      FUN_00414480(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 0x10);
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8))
    ;
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 0x30) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x260))(*(longlong **)(param_1 + 0x7e0))
    ;
    *(undefined1 *)(param_1 + 0x818) = uVar1;
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x7f0) + 0x260))(*(longlong **)(param_1 + 0x7f0))
    ;
    *(bool *)(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 0x31) = iVar4 == 1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x260))(*(longlong **)(param_1 + 0x7b0))
    ;
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 0x28) = uVar1;
    uVar5 = FUN_0188d920();
    uVar5 = FUN_0188d190(uVar5);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x798),&local_50);
    uVar3 = FUN_0188b960(uVar5,local_50);
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 0x2c) = uVar3;
  }
  FUN_00414560(&local_50,2);
  FUN_00414480(&local_40);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

