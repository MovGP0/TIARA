/* Ghidra address: 012d74a0 */
/* Ghidra symbol: FUN_012d74a0 */


void FUN_012d74a0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  wchar_t *pwVar7;
  int local_374;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  longlong *local_330;
  longlong *local_328;
  longlong *local_320;
  undefined8 local_318;
  longlong *local_310;
  longlong *local_308;
  longlong *local_300;
  longlong *local_2f8;
  longlong *local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8 [24];
  undefined8 local_2b0;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  
  local_370 = 0;
  local_368 = 0;
  local_358 = 0;
  local_360 = 0;
  local_348 = 0;
  local_350 = 0;
  local_340 = 0;
  local_338 = 0;
  local_328 = (longlong *)0x0;
  local_330 = (longlong *)0x0;
  local_318 = 0;
  local_320 = (longlong *)0x0;
  local_300 = (longlong *)0x0;
  local_308 = (longlong *)0x0;
  local_310 = (longlong *)0x0;
  local_2f0 = (longlong *)0x0;
  local_2f8 = (longlong *)0x0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d0 = 0;
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = 0;
  local_48 = 0;
  FUN_00417580(local_2c8,&DAT_00432b90);
  cVar1 = FUN_00440b00(*(undefined8 *)(param_1 + 0x58),1);
  if (cVar1 != '\0') {
    plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    pwVar7 = L"_*.xml";
    FUN_00416cd0(&local_2d0,4,*(undefined8 *)(param_1 + 0x58),L"\\report_",
                 *(undefined8 *)(param_1 + 0x40),L"_*.xml");
    iVar3 = FUN_00441230(local_2d0,0x20,local_2c8);
    while (iVar3 == 0) {
      FUN_00416cd0(&local_2d8,3,*(undefined8 *)(param_1 + 0x58),&DAT_012d7cf4,local_2b0,pwVar7);
      (**(code **)(*plVar5 + 0x78))(plVar5,local_2d8);
      iVar3 = FUN_00441290(local_2c8);
    }
    FUN_004412c0(local_2c8);
    (**(code **)(*plVar5 + 0x150))(plVar5,FUN_01b1fc70);
    FUN_00bac3d0(&local_30);
    iVar3 = (**(code **)(*plVar5 + 0x28))();
    local_374 = 0;
    if (-1 < iVar3 + -1) {
      do {
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_2e0,local_374);
        cVar1 = (**(code **)(*local_30 + 0x170))(local_30,local_2e0);
        if ((cVar1 != '\0') &&
           ((**(code **)(*local_30 + 0x100))(local_30,&local_2e8), local_2e8 != 0)) {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x148))
                    (*(longlong **)(param_1 + 8),&local_38,L"testcase");
          (**(code **)(*local_30 + 0x100))(local_30,&local_2f8);
          (**(code **)(*local_2f8 + 0x18))(local_2f8,&local_2f0);
          iVar4 = (**(code **)(*local_2f0 + 0x18))();
          iVar6 = 0;
          if (-1 < iVar4 + -1) {
            do {
              (**(code **)(*local_30 + 0x100))(local_30,&local_310);
              (**(code **)(*local_310 + 0x18))(local_310,&local_308);
              (**(code **)(*local_308 + 0x20))(local_308,&local_300,iVar6);
              (**(code **)(*local_300 + 0x40))(local_300,&local_48);
              (**(code **)(*local_30 + 0x100))(local_30,&local_320);
              (**(code **)(*local_320 + 0x100))(local_320,&local_318,local_48);
              (**(code **)(*local_38 + 0x108))(local_38,local_48,local_318);
              iVar6 = iVar6 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          (**(code **)(*local_30 + 0x100))(local_30,&local_330);
          (**(code **)(*local_330 + 0x18))(local_330,&local_328);
          iVar4 = (**(code **)(*local_328 + 0x18))(local_328);
          if (0 < iVar4) {
            (**(code **)(**(longlong **)(param_1 + 0x18) + 0x98))
                      (*(longlong **)(param_1 + 0x18),&local_338,local_38);
          }
          (**(code **)(*local_38 + 0x100))(local_38,&local_340,L"success");
          cVar1 = FUN_0043fed0(local_340,1);
          if (cVar1 == '\0') {
            FUN_0044f850(&local_348,*(undefined8 *)(param_1 + 0x48));
            (**(code **)(*local_38 + 0x100))(local_38,&local_350,L"circuit");
            FUN_00441d00(&local_40,local_348,local_350);
            (**(code **)(*local_38 + 0x100))(local_38,&local_360,L"status");
            FUN_00416cd0(&local_358,3,local_40,&DAT_012d7d5c,local_360);
            (**(code **)(**(longlong **)(param_1 + 0x28) + 0x78))
                      (*(longlong **)(param_1 + 0x28),local_358);
          }
          if (*(char *)(param_1 + 99) == '\0') {
LAB_012d7a52:
            uVar2 = 0;
          }
          else {
            (**(code **)(*local_38 + 0x100))(local_38,&local_368,L"success");
            cVar1 = FUN_0043fed0(local_368,1);
            if (cVar1 == '\0') goto LAB_012d7a52;
            uVar2 = 1;
          }
          *(undefined1 *)(param_1 + 99) = uVar2;
        }
        local_374 = local_374 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00410f20(plVar5);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xa0))(*(longlong **)(param_1 + 0x18));
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))
                (*(longlong **)(param_1 + 0x10),&local_370,*(undefined8 *)(param_1 + 0x18));
    }
  }
  FUN_0041b800(&local_370);
  FUN_00414560(&local_368,6);
  FUN_0041b800(&local_338);
  FUN_0041b800(&local_330);
  FUN_0041b800(&local_328);
  FUN_0041b800(&local_320);
  FUN_00414480(&local_318);
  FUN_0041b800(&local_310);
  FUN_0041b800(&local_308);
  FUN_0041b800(&local_300);
  FUN_0041b800(&local_2f8);
  FUN_0041b800(&local_2f0);
  FUN_0041b800(&local_2e8);
  FUN_00414560(&local_2e0,3);
  FUN_00417740(local_2c8,&DAT_00432b90);
  FUN_00414560(&local_48,2);
  FUN_0041b800(&local_38);
  FUN_0041b800(&local_30);
  return;
}

