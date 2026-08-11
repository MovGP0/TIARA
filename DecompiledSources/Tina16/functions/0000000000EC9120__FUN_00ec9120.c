/* Ghidra address: 00ec9120 */
/* Ghidra symbol: FUN_00ec9120 */


undefined8
FUN_00ec9120(undefined8 param_1,longlong param_2,undefined8 param_3,char param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong local_res10 [3];
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_80;
  char local_71;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  local_80 = param_1;
  local_71 = param_4;
  local_70 = param_3;
  FUN_00414610(param_2);
  FUN_0064cf60(DAT_0202eac8,0x484);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_30 + 0x10))(local_30,local_70);
  (**(code **)(*plVar3 + 0x78))(plVar3,&PTR_DAT_00ec94ac);
  do {
    FUN_00ea9ab0(&local_40,local_res10);
    FUN_00ea9ef0(&local_38,local_40);
    if (local_38 != 0) {
      if (local_71 == '\0') {
LAB_00ec9232:
        (**(code **)(*plVar3 + 0x78))(plVar3,local_38);
      }
      else {
        cVar1 = FUN_00ec8f80(auStack_b8,local_38);
        if (cVar1 == '\0') goto LAB_00ec9232;
      }
      iVar4 = 2;
      if (1 < param_5) {
        iVar5 = param_5 + -1;
        do {
          if (local_71 == '\0') {
LAB_00ec92a5:
            FUN_0043f750(&local_60,iVar4);
            local_98 = local_60;
            FUN_00416cd0(&local_58,3,local_38,&DAT_00ec94c0);
            (**(code **)(*plVar3 + 0x78))(plVar3,local_58);
          }
          else {
            FUN_0043f750(&local_50,iVar4);
            local_98 = local_50;
            FUN_00416cd0(&local_48,3,local_38,&DAT_00ec94c0);
            cVar1 = FUN_00ec8f80(auStack_b8,local_48);
            if (cVar1 == '\0') goto LAB_00ec92a5;
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    if (local_res10[0] == 0) {
      (**(code **)(*plVar3 + 0x150))(plVar3,FUN_01b1fc70);
      (**(code **)(**(longlong **)(DAT_0202eac8[0xd6] + 0x4a0) + 0x10))
                (*(longlong **)(DAT_0202eac8[0xd6] + 0x4a0),plVar3);
      FUN_00410f20(local_30);
      FUN_00410f20(plVar3);
      (**(code **)(*(longlong *)DAT_0202eac8[0xd6] + 0x268))((longlong *)DAT_0202eac8[0xd6],0);
      iVar4 = (**(code **)(*DAT_0202eac8 + 0x2d0))(DAT_0202eac8);
      if (iVar4 == 1) {
        plVar3 = (longlong *)DAT_0202eac8[0xd6];
        uVar2 = (**(code **)(*plVar3 + 0x260))(plVar3);
        (**(code **)(*(longlong *)plVar3[0x94] + 0x18))((longlong *)plVar3[0x94],local_80,uVar2);
        if (local_71 != '\0') {
          plVar3 = (longlong *)DAT_0202eac8[0xd6];
          uVar2 = (**(code **)(*plVar3 + 0x260))(plVar3);
          (**(code **)(*(longlong *)plVar3[0x94] + 0x18))((longlong *)plVar3[0x94],&local_68,uVar2);
          iVar4 = FUN_00416db0(local_68,&PTR_DAT_00ec94ac);
          if (iVar4 != 0) {
            plVar3 = (longlong *)DAT_0202eac8[0xd6];
            uVar2 = (**(code **)(*plVar3 + 0x260))(plVar3);
            (**(code **)(*(longlong *)plVar3[0x94] + 0x98))((longlong *)plVar3[0x94],uVar2);
          }
        }
      }
      FUN_00414560(&local_68,7);
      FUN_00414480(local_res10);
      return local_80;
    }
  } while( true );
}

