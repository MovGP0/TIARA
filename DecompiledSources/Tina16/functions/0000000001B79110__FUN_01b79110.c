/* Ghidra address: 01b79110 */
/* Ghidra symbol: FUN_01b79110 */


void FUN_01b79110(longlong param_1,longlong param_2,int param_3,int param_4)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  plVar5 = (longlong *)FUN_01b79750(param_1,param_2,L"Hotkey");
  uVar3 = FUN_006ecd50(plVar5);
  FUN_007dc700(&local_20,uVar3);
  if (0 < *(int *)(param_1 + 0x6f0)) {
    sVar2 = FUN_006ecd50(plVar5);
    if (*(short *)(param_1 + 0x700) != sVar2) {
      cVar1 = FUN_01b795f0(param_1,local_20);
      if (cVar1 != '\0') {
        FUN_0084e3e0(param_2,1,*(undefined4 *)(param_1 + 0x6f0),local_20);
        puVar6 = (undefined8 *)FUN_0084e390(param_2,1,*(undefined4 *)(param_1 + 0x6f0));
        FUN_00414b50(&local_28,*puVar6);
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0xb8))
                          (*(longlong **)(param_1 + 0x6e8),local_28);
        if (-1 < iVar4) {
          FUN_004b5450(*(undefined8 *)(param_1 + 0x6e8),iVar4,local_20);
        }
      }
    }
  }
  if ((param_4 < *(int *)(param_2 + 0x4c0)) || (param_3 != 1)) {
    FUN_0064dbe0(plVar5,0);
    FUN_00848990(param_2,*(uint *)(param_2 + 0x4d4) | 0x400);
  }
  else {
    FUN_0084e320(param_2,&local_20,1,param_4);
    uVar3 = FUN_007dca30(local_20);
    FUN_006ecd90(plVar5,uVar3);
    FUN_00848990(param_2,*(uint *)(param_2 + 0x4d4) & 0xfffffbff);
    FUN_00849e90(param_2,&local_38,1,param_4);
    FUN_0064cb30(plVar5,local_38);
    FUN_0064cb90(plVar5,local_34);
    iVar4 = FUN_004230a0(&local_38);
    FUN_0064cbf0(plVar5,iVar4 + 1);
    iVar4 = FUN_004230c0(&local_38);
    FUN_0064cc50(plVar5,iVar4 + 1);
    FUN_0064dbe0(plVar5,1);
    (**(code **)(*plVar5 + 600))(plVar5);
  }
  *(int *)(param_1 + 0x6f0) = param_4;
  FUN_00414560(&local_28,2);
  return;
}

