/* Ghidra address: 0106d530 */
/* Ghidra symbol: FUN_0106d530 */


void FUN_0106d530(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_68 = 0;
  local_60[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  FUN_00414ad0(*(longlong *)(param_1 + 0x6c8) + 0xe0,L"ELF file (*.elf)|*.elf");
  FUN_00414ad0(*(longlong *)(param_1 + 0x6c8) + 0x100,&DAT_0106d88c);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0xa8))(*(longlong **)(param_1 + 0x6c8));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x6c8),local_60);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_60[0]);
    plVar4 = (longlong *)0x0;
    plVar5 = (longlong *)0x0;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_30);
    FUN_00450070(&local_38,local_30,&DAT_0106d8a0,0,1);
    plVar3 = (longlong *)FUN_01b21190(local_38,0x5c,0);
    iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (-1 < iVar2 + -3) {
      FUN_01604ed0(&local_40,&local_48,local_4c,local_50);
      plVar4 = (longlong *)FUN_01b21190(local_40,0x2c,0);
      plVar5 = (longlong *)FUN_01b21190(local_48,0x2c,0);
      iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_68,iVar2 + -3);
      FUN_00414ad0(param_1 + 0x708,local_68);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),*(undefined8 *)(param_1 + 0x708));
      iVar2 = FUN_004170c0(*(undefined8 *)(param_1 + 0x708),local_30,1);
      FUN_00416dc0(param_1 + 0x710,local_30,1,iVar2 + -2);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(param_1 + 0x710));
      iVar2 = (**(code **)(*plVar4 + 0xb0))(plVar4,*(undefined8 *)(param_1 + 0x710));
      if (iVar2 == -1) {
        (**(code **)(*plVar4 + 0x78))(plVar4,*(undefined8 *)(param_1 + 0x710));
      }
      iVar2 = (**(code **)(*plVar5 + 0xb0))(plVar5,*(undefined8 *)(param_1 + 0x708));
      if (iVar2 == -1) {
        (**(code **)(*plVar5 + 0x78))(plVar5,*(undefined8 *)(param_1 + 0x708));
      }
      FUN_01b21460(&local_40,plVar4);
      FUN_01b21460(&local_48,plVar5);
      FUN_01605520(local_40,local_48);
    }
    FUN_00410f20(plVar3);
    if (plVar4 != (longlong *)0x0) {
      FUN_00410f20(plVar4);
    }
    if (plVar5 != (longlong *)0x0) {
      FUN_00410f20(plVar5);
    }
  }
  FUN_00414480(&local_68);
  FUN_00414480(local_60);
  FUN_00414560(&local_48,4);
  return;
}

