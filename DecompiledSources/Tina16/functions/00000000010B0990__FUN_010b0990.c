/* Ghidra address: 010b0990 */
/* Ghidra symbol: FUN_010b0990 */


void FUN_010b0990(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                 undefined1 param_5,char param_6,char param_7)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_res18;
  longlong local_res20;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  
  uVar1 = param_5;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
  if (iVar3 == 0) {
    FUN_010b0330(param_1);
  }
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar7 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar7);
      FUN_010af640(uVar6,&local_50,0);
      FUN_0043e1a0(&local_38,local_50);
      FUN_00441a10(&local_58,local_38);
      iVar4 = FUN_00416db0(local_58,L".ino");
      if (iVar4 == 0) {
        FUN_00441920(&local_60,local_38);
        (**(code **)(*plVar5 + 0x78))(plVar5,local_60);
      }
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (param_6 != '\0') {
    FUN_01b202f0(*(undefined8 *)(param_1 + 0x18));
  }
  iVar3 = (**(code **)(*param_2 + 0x28))();
  iVar7 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,&local_38,iVar7);
      FUN_00414b50(&local_40,local_38);
      FUN_0043e1a0(&local_68,L"{$PRJ}");
      iVar4 = FUN_004170c0(local_68,local_38,1);
      if (iVar4 < 1) {
        if (local_res20 != 0) {
          FUN_0043e1a0(&local_78,L"{$SHARED}");
          iVar4 = FUN_004170c0(local_78,local_38,1);
          if (0 < iVar4) {
            FUN_00450070(&local_80,local_38,L"{$SHARED}",local_res20,2);
            FUN_00414b50(&local_38,local_80);
            goto LAB_010b0c8d;
          }
        }
        FUN_00441920(&local_40,local_38);
      }
      else {
        FUN_00450070(&local_70,local_38,L"{$PRJ}",local_res18,2);
        FUN_00414b50(&local_38,local_70);
      }
LAB_010b0c8d:
      FUN_0043e1a0(&local_88,local_38);
      FUN_00414b50(&local_38,local_88);
      FUN_0043e1a0(&local_90,local_40);
      FUN_00414b50(&local_40,local_90);
      FUN_004414c0(&local_48,local_40,L".ino");
      FUN_00441920(&local_98,local_48);
      iVar4 = (**(code **)(*plVar5 + 0xb0))(plVar5,local_98);
      if (-1 < iVar4) {
        FUN_00414b50(&local_40,local_48);
      }
      if (param_7 == '\0') {
        iVar4 = FUN_010b0750(param_1,local_40);
      }
      else {
        iVar4 = 1;
      }
      param_5 = uVar1;
      if (iVar4 == 0) {
        FUN_0160f060(&local_a0,&local_40);
        iVar4 = FUN_010b0750(param_1,local_a0);
        if (iVar4 == 1) {
          param_5 = 1;
        }
      }
      FUN_010b2be0(param_1,local_38,local_40,param_5,iVar4);
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_010b0330(param_1);
  FUN_010b2830(param_1,1);
  FUN_010b2840(param_1,0);
  cVar2 = FUN_0160ee50(*(undefined8 *)(param_1 + 0x18),&local_2c);
  if (cVar2 != '\0') {
    FUN_004aea00(*(undefined8 *)(param_1 + 0x18),0,local_2c);
  }
  FUN_00410f20(plVar5);
  FUN_00414560(&local_a0,0xe);
  FUN_00414560(&local_res18,2);
  return;
}

