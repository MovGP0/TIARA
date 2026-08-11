/* Ghidra address: 00eb9040 */
/* Ghidra symbol: FUN_00eb9040 */


undefined8 * FUN_00eb9040(undefined8 *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong local_res10 [3];
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  char local_41;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  
  local_40 = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  local_58 = param_1;
  local_50 = param_3;
  local_41 = param_4;
  FUN_00414610(param_2);
  plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_0064cf60(DAT_0202ea80,0x484);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_30 + 0x10))(local_30,local_50);
  (**(code **)(*(longlong *)DAT_0202ea80[0xd6] + 0x278))((longlong *)DAT_0202ea80[0xd6]);
  (**(code **)(*plVar6 + 0x90))(plVar6);
  (**(code **)(**(longlong **)(DAT_0202ea80[0xd6] + 0x4a0) + 0x78))
            (*(longlong **)(DAT_0202ea80[0xd6] + 0x4a0),&PTR_DAT_00eb93ac);
  (**(code **)(*plVar6 + 0x78))(plVar6,L"0@NC");
  do {
    FUN_00ea9ab0(&local_38,local_res10);
    if (local_38 != 0) {
      if (local_41 != '\0') {
        cVar2 = FUN_00eb8db0(auStack_78,local_38);
        if (cVar2 != '\0') goto LAB_00eb91ba;
      }
      (**(code **)(*plVar6 + 0x78))(plVar6,local_38);
      uVar3 = FUN_004170c0(&LAB_00eb93d8,local_38,1);
      FUN_00416e20(&local_38,1,uVar3);
      iVar4 = FUN_00416db0(local_38,&PTR_DAT_00eb93ac);
      if (iVar4 != 0) {
        (**(code **)(**(longlong **)(DAT_0202ea80[0xd6] + 0x4a0) + 0x78))
                  (*(longlong **)(DAT_0202ea80[0xd6] + 0x4a0),local_38);
      }
    }
LAB_00eb91ba:
    if (local_res10[0] == 0) {
      FUN_00410f20(local_30);
      (**(code **)(*(longlong *)DAT_0202ea80[0xd6] + 0x268))((longlong *)DAT_0202ea80[0xd6],0);
      (**(code **)(*plVar6 + 0x148))(plVar6);
      iVar4 = (**(code **)(*DAT_0202ea80 + 0x2d0))(DAT_0202ea80);
      if (iVar4 == 1) {
        plVar1 = (longlong *)DAT_0202ea80[0xd6];
        uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
        (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],local_58,uVar3);
        if (local_41 != '\0') {
          plVar1 = (longlong *)DAT_0202ea80[0xd6];
          uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
          (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_40,uVar3);
          iVar4 = FUN_00416db0(local_40,&PTR_DAT_00eb93ac);
          if (iVar4 != 0) {
            plVar1 = (longlong *)DAT_0202ea80[0xd6];
            uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
            (**(code **)(*(longlong *)plVar1[0x94] + 0x98))((longlong *)plVar1[0x94],uVar3);
          }
        }
        iVar4 = -1;
        do {
          iVar4 = iVar4 + 1;
          (**(code **)(*plVar6 + 0x18))(plVar6,&local_38,iVar4);
          uVar3 = FUN_004170c0(&LAB_00eb93d8,local_38,1);
          FUN_00416e20(&local_38,1,uVar3);
          iVar5 = FUN_00416db0(local_38,*local_58);
        } while (iVar5 != 0);
        (**(code **)(*plVar6 + 0x18))(plVar6,local_58,iVar4);
      }
      FUN_00410f20(plVar6);
      FUN_00414560(&local_40,2);
      FUN_00414480(local_res10);
      return local_58;
    }
  } while( true );
}

