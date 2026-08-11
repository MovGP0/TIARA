/* Ghidra address: 014ec510 */
/* Ghidra symbol: FUN_014ec510 */


void FUN_014ec510(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40 [2];
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  FUN_014ebd10(param_1,&local_50);
  if (local_50 == 0) {
    FUN_0041ddd0(&local_90,PTR_PTR_02005b58);
    FUN_016fd940(local_90);
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x6c0);
    *(undefined4 *)(plVar1 + 0x1d) = *(undefined4 *)(param_1 + 0x2380);
    cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
    if (cVar2 != '\0') {
      FUN_00724270(plVar1,&local_70);
      FUN_00441a10(&local_68,local_70);
      FUN_0043e1a0(&local_60,local_68);
      iVar3 = FUN_00416db0(local_60,&LAB_014ec794);
      if (iVar3 == 0) {
        FUN_00724270(plVar1,&local_78);
        FUN_00441640(&local_58,local_78);
        plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
        FUN_00724270(plVar1,&local_80);
        (**(code **)(*plVar5 + 0xd8))(plVar5,local_80);
        iVar3 = (**(code **)(*plVar5 + 0x28))();
        iVar6 = 0;
        if (-1 < iVar3 + -1) {
          do {
            (**(code **)(*plVar5 + 0x18))(plVar5,&local_48,iVar6);
            if (local_48 != 0) {
              FUN_00416ba0(local_40,local_58,local_48);
              cVar2 = FUN_014ec1f0(param_1,local_40[0],local_50,local_48);
              if (cVar2 == '\0') break;
            }
            iVar6 = iVar6 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        FUN_00410f20(plVar5);
      }
      else {
        FUN_00724270(plVar1,&local_88);
        FUN_014ec1f0(param_1,local_88,local_50,0);
      }
    }
    uVar4 = FUN_00724300(plVar1);
    *(undefined4 *)(param_1 + 0x2380) = uVar4;
  }
  FUN_00414480(&local_90);
  FUN_00414560(&local_88,4);
  FUN_00414560(&local_68,6);
  return;
}

