/* Ghidra address: 0125cc80 */
/* Ghidra symbol: FUN_0125cc80 */


void FUN_0125cc80(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
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
  longlong *local_38;
  longlong *local_30;
  
  local_b8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_88 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  FUN_00414610(param_6);
  FUN_00de88c0(&local_40,0x834,param_6);
  FUN_004168b0(&local_48,local_40);
  FUN_00de88c0(&local_50,0x835,param_6);
  FUN_004168b0(&local_58,local_50);
  FUN_0124fe60(&local_30,param_2,param_3,param_5,L"static",local_48,L"bompars",0,local_58);
  (**(code **)(*param_2 + 0x148))(param_2,&local_38,L"detail");
  (**(code **)(*local_30 + 0x98))(local_30,&local_60,local_38);
  FUN_00de88c0(&local_68,0x834,param_6);
  FUN_004168b0(&local_70,local_68);
  (**(code **)(*local_38 + 0x108))(local_38,L"type",local_70);
  (**(code **)(*local_38 + 0x108))(local_38,&DAT_0125d2d0,L"bompars");
  plVar1 = *(longlong **)(param_1 + 0x3e0);
  iVar5 = 0;
  do {
    bVar2 = false;
    iVar3 = (**(code **)(*plVar1 + 0x28))();
    local_d4 = 0;
    if (-1 < iVar3 + -1) {
      do {
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_80,local_d4);
        FUN_00648720(&local_78,local_80);
        iVar4 = FUN_0043fc50(local_78,0);
        if (iVar4 == iVar5) {
          FUN_0043f750(&local_98,iVar5 + 1);
          FUN_00416ba0(&local_90,L"param",local_98);
          FUN_0043f750(&local_a0,iVar5);
          (**(code **)(**(longlong **)(param_1 + 0x3e0) + 0x18))
                    (*(longlong **)(param_1 + 0x3e0),&local_b0,local_d4);
          FUN_00648780(&local_a8,local_b0);
          FUN_01250440(&local_88,param_2,local_38,param_5,local_90,local_a0,local_a8);
          bVar2 = true;
          break;
        }
        local_d4 = local_d4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (!bVar2) {
      FUN_0043f750(&local_c8,iVar5 + 1);
      FUN_00416ba0(&local_c0,L"param",local_c8);
      FUN_0043f750(&local_d0,iVar5);
      FUN_01250440(&local_b8,param_2,local_38,param_5,local_c0,local_d0,0);
    }
    iVar5 = iVar5 + 1;
    if (iVar5 == 4) {
      FUN_00414560(&local_d0,3);
      FUN_0041b800(&local_b8);
      FUN_00414560(&local_b0,5);
      FUN_0041b800(&local_88);
      FUN_00414560(&local_80,3);
      FUN_00414520(&local_68);
      FUN_0041b800(&local_60);
      FUN_00414480(&local_58);
      FUN_00414520(&local_50);
      FUN_00414480(&local_48);
      FUN_00414520(&local_40);
      FUN_00417840(&local_38,&LAB_00b9fca0,2);
      FUN_00414480(&param_6);
      return;
    }
  } while( true );
}

