/* Ghidra address: 01125630 */
/* Ghidra symbol: FUN_01125630 */


void FUN_01125630(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_30[0] = 0;
  sVar3 = 6;
  if (*(int *)(param_1 + 0xb48) == 8) {
    FUN_00414b50(local_30,*(undefined8 *)(param_1 + 0xb58));
  }
  else {
    FUN_00414b50(local_30,*(undefined8 *)(param_1 + 0xb60));
  }
  if (*(char *)(*(longlong *)(param_1 + 0x808) + 0x5e0) != '\0') {
    FUN_00f08d50(&local_48,8);
    FUN_0043e130(&local_50,local_30[0]);
    FUN_00416cd0(local_40,3,local_48,local_50,&DAT_011259e8);
    sVar3 = FUN_0072d440(local_40[0],3,0xb,0);
    if (sVar3 == 6) {
      FUN_01125cd0(param_1);
    }
  }
  if (sVar3 != 2) {
    if (*(int *)(param_1 + 0xb48) == 8) {
      FUN_010c2250(&local_58,0);
      FUN_00414ad0(param_1 + 0xb68,local_58);
      if (*(longlong *)(param_1 + 0xde0) != 0) {
        *(undefined8 *)(param_1 + 0xb74) = *(undefined8 *)(*(longlong *)(param_1 + 0xde0) + 0x628);
        lVar4 = *(longlong *)(param_1 + 0xde0);
        *(undefined8 *)(param_1 + 0xb80) = *(undefined8 *)(lVar4 + 0x630);
        *(undefined8 *)(param_1 + 0xb88) = *(undefined8 *)(lVar4 + 0x638);
        *(undefined8 *)(param_1 + 0xb90) = *(undefined8 *)(lVar4 + 0x640);
        *(undefined8 *)(param_1 + 0xb98) = *(undefined8 *)(lVar4 + 0x648);
        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0xde0) + 0x650);
        puVar7 = (undefined8 *)(param_1 + 0xba0);
        for (lVar4 = 0x48; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_00410f20(*(undefined8 *)(param_1 + 0xde0));
      }
      lVar4 = FUN_017e1bd0(&DAT_017df868,1,0,0,0,0,0);
      *(longlong *)(param_1 + 0xde0) = lVar4;
      *(undefined8 *)(lVar4 + 0x628) = *(undefined8 *)(param_1 + 0xb74);
      *(undefined8 *)(lVar4 + 0x630) = *(undefined8 *)(param_1 + 0xb80);
      *(undefined8 *)(lVar4 + 0x638) = *(undefined8 *)(param_1 + 0xb88);
      *(undefined8 *)(lVar4 + 0x640) = *(undefined8 *)(param_1 + 0xb90);
      *(undefined8 *)(lVar4 + 0x648) = *(undefined8 *)(param_1 + 0xb98);
      puVar6 = (undefined8 *)(param_1 + 0xba0);
      puVar7 = (undefined8 *)(lVar4 + 0x650);
      for (lVar5 = 0x48; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      (**(code **)(**(longlong **)(lVar4 + 0x890) + 0x90))(*(longlong **)(lVar4 + 0x890));
      FUN_00414ad0(param_1 + 0xb58,L"noname.exc");
      FUN_00416ba0(local_30,*(undefined8 *)PTR_DAT_020049a0,L"\\DEFAULT.EXC");
      cVar2 = FUN_00440a20(local_30[0],1);
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x9f8) + 0xd8))
                  (*(longlong **)(param_1 + 0x9f8),local_30[0]);
        FUN_00414ad0(param_1 + 0xb58,local_30[0]);
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4e8);
      (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x9f8));
      FUN_01126b30(param_1);
    }
    else {
      FUN_00414ad0(param_1 + 0xb60,L"noname.pwl");
      (**(code **)(**(longlong **)(param_1 + 0xa21) + 0x90))(*(longlong **)(param_1 + 0xa21));
      *(undefined1 *)(param_1 + 0xa29) = 0;
      (**(code **)(**(longlong **)(param_1 + 0xa21) + 0x38))
                (*(longlong **)(param_1 + 0xa21),&local_60);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4e8);
      (**(code **)(*plVar1 + 0x60))(plVar1,local_60);
      FUN_01127350(param_1);
    }
    FUN_00c0dad0(*(undefined8 *)(param_1 + 0x808),0);
    FUN_01126110(param_1);
  }
  FUN_00414560(&local_60,5);
  FUN_00414480(local_30);
  return;
}

