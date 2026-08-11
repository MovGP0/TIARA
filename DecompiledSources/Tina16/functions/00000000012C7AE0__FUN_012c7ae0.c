/* Ghidra address: 012c7ae0 */
/* Ghidra symbol: FUN_012c7ae0 */


void FUN_012c7ae0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  if (param_2 != 0) {
    puVar1 = *(undefined1 **)(param_2 + 0x18);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x260))(*(longlong **)(param_1 + 0x7c8))
    ;
    *puVar1 = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x848) + 0x260))(*(longlong **)(param_1 + 0x848))
    ;
    puVar1[1] = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x8b8) + 0x260))(*(longlong **)(param_1 + 0x8b8))
    ;
    puVar1[2] = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x260))(*(longlong **)(param_1 + 0x7e8))
    ;
    puVar1[3] = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x868) + 0x260))(*(longlong **)(param_1 + 0x868))
    ;
    puVar1[4] = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x8d8) + 0x260))(*(longlong **)(param_1 + 0x8d8))
    ;
    puVar1[5] = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7f0) + 0x260))(*(longlong **)(param_1 + 0x7f0))
    ;
    puVar1[6] = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x870) + 0x260))(*(longlong **)(param_1 + 0x870))
    ;
    puVar1[7] = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0x260))(*(longlong **)(param_1 + 0x8e0))
    ;
    puVar1[8] = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8))
    ;
    puVar1[9] = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x858) + 0x260))(*(longlong **)(param_1 + 0x858))
    ;
    puVar1[10] = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x8c8) + 0x260))(*(longlong **)(param_1 + 0x8c8))
    ;
    puVar1[0xb] = uVar2;
    uVar5 = FUN_00b90090(*(undefined8 *)(param_1 + 0x808));
    *(undefined8 *)(puVar1 + 0x610) = uVar5;
    uVar5 = FUN_00b90090(*(undefined8 *)(param_1 + 0x890));
    *(undefined8 *)(puVar1 + 0x618) = uVar5;
    uVar5 = FUN_00b90090(*(undefined8 *)(param_1 + 0x900));
    *(undefined8 *)(puVar1 + 0x620) = uVar5;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x828),&local_20);
    uVar3 = FUN_0043fc00(local_20);
    *(undefined4 *)(puVar1 + 0x628) = uVar3;
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x260))(*(longlong **)(param_1 + 0x7f8))
    ;
    if (iVar4 < 1) {
      puVar1[0xc] = 0;
    }
    else {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x260))
                        (*(longlong **)(param_1 + 0x7f8));
      (**(code **)(**(longlong **)(param_1 + 0x960) + 0x18))
                (*(longlong **)(param_1 + 0x960),&local_28,uVar3);
      FUN_00416910(puVar1 + 0xc,local_28,0xff);
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x880) + 0x260))(*(longlong **)(param_1 + 0x880))
    ;
    if (iVar4 < 1) {
      puVar1[0x20c] = 0;
    }
    else {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x880) + 0x260))
                        (*(longlong **)(param_1 + 0x880));
      (**(code **)(**(longlong **)(param_1 + 0x968) + 0x18))
                (*(longlong **)(param_1 + 0x968),&local_30,uVar3);
      FUN_00416910(puVar1 + 0x20c,local_30,0xff);
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x8f0) + 0x260))(*(longlong **)(param_1 + 0x8f0))
    ;
    if (iVar4 < 1) {
      puVar1[0x40c] = 0;
    }
    else {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x8f0) + 0x260))
                        (*(longlong **)(param_1 + 0x8f0));
      (**(code **)(**(longlong **)(param_1 + 0x970) + 0x18))
                (*(longlong **)(param_1 + 0x970),&local_38,uVar3);
      FUN_00416910(puVar1 + 0x40c,local_38,0xff);
    }
  }
  FUN_00414560(&local_38,3);
  FUN_00414480(&local_20);
  return;
}

