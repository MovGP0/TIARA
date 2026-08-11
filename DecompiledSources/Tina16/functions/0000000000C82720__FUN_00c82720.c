/* Ghidra address: 00c82720 */
/* Ghidra symbol: FUN_00c82720 */


void FUN_00c82720(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 local_res18 [2];
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined4 local_64;
  longlong local_60;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_70 = auStack_c8;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_28 = (longlong *)0x0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_54 = 0;
  while( true ) {
    cVar2 = FUN_00c82300(param_1,param_2,&local_54);
    if (cVar2 == '\0') break;
    if (**(short **)(param_1 + 0x98) == 0x25) {
      local_20[0] = 0;
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))
                (*(longlong **)(param_1 + 0x88),&local_78,*(undefined4 *)(param_1 + 0x84));
      FUN_00441640(local_20,local_78);
      local_60 = *(longlong *)(param_1 + 0x98);
      local_64 = 0;
      if (local_60 != 0) {
        local_64 = *(undefined4 *)(local_60 + -4);
      }
      FUN_00416dc0(&local_88,*(undefined8 *)(param_1 + 0x98),2,local_64);
      FUN_0043ea00(&local_80,local_88);
      FUN_00416ba0(&local_40,local_20[0],local_80);
      FUN_00414480(local_20);
      FUN_004414c0(&local_48,local_40,L".bmp");
      cVar2 = FUN_00440a20(local_48,1);
      if (cVar2 != '\0') {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x28);
        iVar3 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_48);
        if (iVar3 == -1) {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x28);
          (**(code **)(*plVar1 + 0x78))(plVar1,local_48);
        }
      }
      FUN_004414c0(&local_50,local_40,L".xml");
      cVar2 = FUN_00440a20(local_50,1);
      if (cVar2 != '\0') {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x30);
        iVar3 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_50);
        if (iVar3 == -1) {
          FUN_00bac3d0(&local_28);
          FUN_00c821a0(param_1,local_50,local_28);
          (**(code **)(*local_28 + 8))(local_28);
          FUN_00441920(&local_98,local_40);
          FUN_004414c0(&local_90,local_98,0);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x30);
          (**(code **)(*plVar1 + 0x80))(plVar1,local_90,local_28);
        }
      }
      cVar2 = FUN_00440a20(local_40,1);
      if (cVar2 != '\0') {
        local_58 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0xb0))
                             (*(longlong **)(param_1 + 0x88),local_40);
        if (-1 < local_58) {
          (**(code **)(**(longlong **)(param_1 + 0x88) + 0x98))
                    (*(longlong **)(param_1 + 0x88),local_58);
        }
        local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
        (**(code **)(*local_30 + 0xd8))(local_30,local_40);
        FUN_00441920(&local_a8,local_40);
        FUN_004414c0(&local_a0,local_a8,0);
        FUN_00c82720(param_1,local_30,local_a0);
        FUN_00410f20(local_30);
      }
    }
    else if (**(short **)(param_1 + 0x98) == 0x5b) {
      FUN_00c82440(param_1,&local_38);
    }
    else {
      FUN_00c82640(param_1,local_38,local_res18[0]);
    }
  }
  FUN_00414560(&local_a8,7);
  FUN_00414560(&local_50,4);
  FUN_0041b800(&local_28);
  FUN_00414480(local_res18);
  return;
}

