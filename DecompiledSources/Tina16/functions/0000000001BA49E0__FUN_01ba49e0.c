/* Ghidra address: 01ba49e0 */
/* Ghidra symbol: FUN_01ba49e0 */


void FUN_01ba49e0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x710) + 0x998) != '\0') {
    uVar3 = _HTerm_Poll(*(undefined8 *)(*(longlong *)(param_1 + 0x710) + 0x970));
    FUN_00415430(&local_30,uVar3,0);
    if (local_30 != 0) {
      FUN_004155b0(param_1 + 0x728,local_30);
      iVar2 = 0;
      if (*(longlong *)(param_1 + 0x728) != 0) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x728) + -4);
      }
      cVar1 = *(char *)(*(longlong *)(param_1 + 0x728) + -1 + (longlong)iVar2);
      uVar3 = *(undefined8 *)(param_1 + 0x6e0);
      FUN_0064dd90(uVar3,local_50);
      FUN_00416880(&local_58,local_30);
      FUN_00416ad0(local_50,local_58);
      FUN_0064de00(uVar3,local_50[0]);
      if (cVar1 == '\n') {
        cVar1 = FUN_01ba0f90(*(undefined8 *)(param_1 + 0x728));
        if (cVar1 != '\0') {
          plVar4 = *(longlong **)(param_1 + 0x718);
          (**(code **)(*plVar4 + 0x38))(plVar4,&local_60);
          FUN_00416880(&local_68,*(undefined8 *)(param_1 + 0x728));
          FUN_00416ad0(&local_60,local_68);
          (**(code **)(*plVar4 + 0x60))(plVar4,local_60);
          plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
          FUN_00416880(&local_70,*(undefined8 *)(param_1 + 0x728));
          (**(code **)(*plVar4 + 0x60))(plVar4,local_70);
          iVar2 = (**(code **)(*plVar4 + 0x28))();
          iVar5 = 0;
          if (-1 < iVar2 + -1) {
            do {
              (**(code **)(*plVar4 + 0x18))(plVar4,&local_78,iVar5);
              FUN_00415dd0(&local_40,local_78,0);
              FUN_00416880(&local_80,local_40);
              FUN_01ba4480(param_1,local_80);
              iVar5 = iVar5 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          FUN_00410f20(plVar4);
        }
        FUN_004144d0(param_1 + 0x728);
      }
    }
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  }
  FUN_00414560(&local_80,6);
  FUN_00414480(local_50);
  FUN_00414590(&local_40,3);
  return;
}

