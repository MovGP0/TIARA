/* Ghidra address: 01648740 */
/* Ghidra symbol: FUN_01648740 */


undefined8 FUN_01648740(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_res18 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (*(int *)(param_2 + 0x10) == 0) {
    iVar2 = FUN_00416db0(local_res18[0],*(undefined8 *)(param_1 + 0x18));
    if (iVar2 == 0) {
      uVar3 = FUN_00b89270();
      FUN_0041ddd0(&local_30,PTR_PTR_020013c0);
      FUN_00b8e650(uVar3,&local_28,L"HDLStrings.Msg_NotAssigned",local_30);
      FUN_00416cd0(&local_20,3,*(undefined8 *)(param_1 + 0x18),&DAT_01648a4c,local_28);
      FUN_01613110(local_20);
    }
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    local_60 = 0;
  }
  else {
    cVar1 = FUN_01648550(param_1,param_2);
    if (cVar1 == '\0') {
      if (*(int *)(param_2 + 0x10) == 2) {
        uVar3 = FUN_004aeac0(param_2,0);
        uVar5 = FUN_004aeac0(param_2,1);
        uVar3 = FUN_01645100(uVar3);
        uVar5 = FUN_01645100(uVar5);
        cVar1 = FUN_01648720(uVar3,uVar5);
        if (cVar1 == '\0') {
          FUN_00416ba0(&local_48,*(undefined8 *)(param_1 + 0x18),
                       L": this if statement not supported");
          FUN_01613110(local_48);
        }
        else {
          lVar6 = FUN_004aeac0(param_2,0);
          lVar7 = FUN_004aeac0(param_2,1);
          lVar4 = lVar6;
          if (*(char *)(*(longlong *)(lVar6 + 0x88) + 0x90) == -0x37) {
            lVar4 = lVar7;
            lVar7 = lVar6;
          }
          if (*(char *)(*(longlong *)(lVar4 + 0x88) + 0x90) != -0x38) {
            FUN_00416ba0(&local_38,*(undefined8 *)(param_1 + 0x18),
                         L": this if statement not supported");
            FUN_01613110(local_38);
          }
          if (*(char *)(*(longlong *)(lVar7 + 0x88) + 0x90) != -0x37) {
            FUN_00416ba0(&local_40,*(undefined8 *)(param_1 + 0x18),
                         L": this if statement not supported");
            FUN_01613110(local_40);
          }
          lVar6 = FUN_01645100(lVar4);
          if (lVar7 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined8 *)(lVar7 + 8);
          }
          local_58 = FUN_0161df70(*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar4 + 8),uVar3);
        }
      }
      else {
        FUN_00416ba0(&local_50,*(undefined8 *)(param_1 + 0x18),L": this if statement not supported")
        ;
        FUN_01613110(local_50);
      }
    }
    else {
      lVar4 = FUN_004aeac0(param_2,0);
      local_58 = *(undefined8 *)(lVar4 + 8);
    }
    local_60 = local_58;
  }
  FUN_00414560(&local_50,7);
  FUN_00414480(local_res18);
  return local_60;
}

