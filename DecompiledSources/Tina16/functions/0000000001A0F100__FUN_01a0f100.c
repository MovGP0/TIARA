/* Ghidra address: 01a0f100 */
/* Ghidra symbol: FUN_01a0f100 */


void FUN_01a0f100(longlong param_1,char param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auStack_408 [32];
  char *local_3e8;
  longlong local_3d0;
  char local_3c1;
  longlong local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  wchar_t *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  wchar_t *local_280;
  undefined8 local_278;
  undefined1 local_270 [256];
  undefined8 local_170;
  undefined1 local_168 [264];
  undefined1 local_60 [40];
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_3b8 = 0;
  local_398 = 0;
  local_3b0 = 0;
  local_3a8 = 0;
  local_3a0 = 0;
  local_390 = 0;
  local_388 = 0;
  local_380 = 0;
  local_338 = 0;
  local_340 = 0;
  local_358 = 0;
  local_360 = 0;
  local_378 = 0;
  local_370 = 0;
  local_368 = 0;
  local_350 = 0;
  local_348 = 0;
  local_2f0 = 0;
  local_2f8 = 0;
  local_310 = 0;
  local_318 = 0;
  local_330 = 0;
  local_328 = 0;
  local_320 = 0;
  local_308 = 0;
  local_300 = 0;
  local_2e0 = 0;
  local_2e8 = 0;
  local_2d8 = 0;
  local_2c8 = 0;
  local_2d0 = 0;
  local_2c0 = 0;
  local_2b8 = (wchar_t *)0x0;
  local_2a8 = 0;
  local_2b0 = 0;
  local_2a0 = 0;
  local_290 = 0;
  local_298 = 0;
  local_288 = 0;
  local_280 = (wchar_t *)0x0;
  local_278 = 0;
  local_170 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_3d0 = param_1;
  local_3c1 = param_2;
  FUN_00417580(local_60,&DAT_00ea5f80);
  iVar5 = 0;
  do {
    if ((*(char *)(local_3d0 + 0xc2) != '\0') ||
       (iVar3 = (**(code **)(**(longlong **)(local_3d0 + 0x90) + 0x28))
                          (*(longlong **)(local_3d0 + 0x90)), iVar3 <= iVar5)) {
      FUN_00414560(&local_3b8,2);
      FUN_004144d0(&local_3a8);
      FUN_00414480(&local_3a0);
      FUN_004144d0(&local_398);
      FUN_00414560(&local_390,4);
      FUN_004144d0(&local_370);
      FUN_00414480(&local_368);
      FUN_004144d0(&local_360);
      FUN_00414480(&local_358);
      FUN_004144d0(&local_350);
      FUN_00414480(&local_348);
      FUN_004144d0(&local_340);
      FUN_00414560(&local_338,2);
      FUN_004144d0(&local_328);
      FUN_00414480(&local_320);
      FUN_004144d0(&local_318);
      FUN_00414480(&local_310);
      FUN_004144d0(&local_308);
      FUN_00414480(&local_300);
      FUN_004144d0(&local_2f8);
      FUN_00414560(&local_2f0,2);
      FUN_004144d0(&local_2e0);
      FUN_00414560(&local_2d8,2);
      FUN_004144d0(&local_2c8);
      FUN_00414560(&local_2c0,3);
      FUN_004144d0(&local_2a8);
      FUN_00414560(&local_2a0,2);
      FUN_004144d0(&local_290);
      FUN_00414560(&local_288,2);
      FUN_004144d0(&local_278);
      FUN_00414480(&local_170);
      FUN_00417740(local_60,&DAT_00ea5f80);
      FUN_00414560(&local_38,2);
      return;
    }
    if (*(char *)(local_3d0 + 0x88) == '\0') {
      (**(code **)(**(longlong **)(local_3d0 + 0x20) + 200))
                (*(longlong **)(local_3d0 + 0x20),L".ENDS");
      *(undefined1 *)(local_3d0 + 0x88) = 1;
    }
    (**(code **)(**(longlong **)(local_3d0 + 0x20) + 200))(*(longlong **)(local_3d0 + 0x20),0);
    lVar4 = (**(code **)(**(longlong **)(local_3d0 + 0x90) + 0x30))
                      (*(longlong **)(local_3d0 + 0x90),iVar5);
    local_3c0 = *(longlong *)(lVar4 + 0x1a8);
    cVar1 = FUN_00440a20(*(undefined8 *)(local_3c0 + 0xf8));
    if (cVar1 == '\0') {
LAB_01a0f409:
      bVar7 = false;
    }
    else {
      (**(code **)(**(longlong **)(local_3d0 + 0x90) + 0x18))
                (*(longlong **)(local_3d0 + 0x90),&local_170,iVar5);
      FUN_00416910(local_270,local_170,0xff);
      FUN_01a0cb50(local_3d0,local_168,local_270);
      FUN_004154b0(&local_278,local_168,0);
      cVar2 = FUN_019ecd90(local_3d0,local_278,*(undefined8 *)(local_3c0 + 0xf8));
      if (cVar2 == '\0') goto LAB_01a0f409;
      bVar7 = true;
    }
    if ((*(longlong *)(local_3c0 + 0xf8) != 0) && (*(char *)(local_3d0 + 0xc0) != '\x04')) {
      if (*(char *)(local_3d0 + 0xc0) == '\0') {
        FUN_00414b50(local_30,*(undefined8 *)(local_3c0 + 0x100));
      }
      else {
        FUN_00414b50(local_30,*(undefined8 *)(local_3c0 + 0xf8));
      }
      iVar3 = (**(code **)(**(longlong **)(local_3d0 + 0xb0) + 0xb0))
                        (*(longlong **)(local_3d0 + 0xb0));
      if (iVar3 == -1) {
        (**(code **)(**(longlong **)(local_3d0 + 0xb0) + 0x78))(*(longlong **)(local_3d0 + 0xb0));
      }
    }
    if (*(byte *)(local_3d0 + 0xc0) < 8) {
      bVar6 = ((int)CONCAT71((int7)((ulonglong)local_3d0 >> 8),1) <<
               (*(byte *)(local_3d0 + 0xc0) & 0x1f) & 0x30U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      cVar1 = *(char *)(local_3d0 + 0x8b);
    }
    else if (((*(char *)(local_3d0 + 0x8b) == '\0') && (cVar1 != '\0')) && (bVar7)) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    if (cVar1 != '\0') {
      if (((*(char *)(local_3c0 + 0x115) == '\0') && (local_3c1 == '\0')) &&
         (*(char *)(local_3c0 + 0x62) == '\0')) {
        if (*(char *)(local_3d0 + 0xc0) == '\x02') {
          FUN_00441920(&local_280,*(undefined8 *)(local_3c0 + 0xf8));
          if (local_280 == L"TINA_SMPS.LIB") {
            bVar7 = true;
          }
          else if (local_280 == (wchar_t *)0x0) {
            bVar7 = false;
          }
          else {
            iVar3 = FUN_0043e420(local_280,L"TINA_SMPS.LIB");
            bVar7 = iVar3 == 0;
          }
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          (**(code **)(**(longlong **)(local_3d0 + 0x90) + 0x18))
                    (*(longlong **)(local_3d0 + 0x90),&local_288,iVar5);
          FUN_00416910(local_270,local_288,0xff);
          FUN_01a0cb50(local_3d0,local_168,local_270);
          FUN_004154b0(&local_290,local_168,0);
          FUN_00416ba0(&local_298,*(undefined8 *)PTR_DAT_020049a0,
                       L"\\EXAMPLES\\SPICE\\TINA_SMPS_LT.LIB");
          cVar1 = FUN_019ecd90(local_3d0,local_290,local_298);
          if (cVar1 == '\0') goto LAB_01a0f6e4;
          (**(code **)(**(longlong **)(local_3d0 + 0x90) + 0x18))
                    (*(longlong **)(local_3d0 + 0x90),&local_2a0,iVar5);
          FUN_00416910(local_270,local_2a0,0xff);
          FUN_01a0cb50(local_3d0,local_168,local_270);
          FUN_004154b0(&local_2a8,local_168,0);
          FUN_00416ba0(&local_2b0,*(undefined8 *)PTR_DAT_020049a0,
                       L"\\EXAMPLES\\SPICE\\TINA_SMPS_LT.LIB");
          FUN_019ecfc0(local_3d0,&local_38,local_2a8,local_2b0);
        }
        else {
LAB_01a0f6e4:
          if (*(char *)(local_3d0 + 0xc0) == '\x03') {
            FUN_00441920(&local_2b8,*(undefined8 *)(local_3c0 + 0xf8));
            if (local_2b8 == L"TINA_SMPS.LIB") {
              bVar7 = true;
            }
            else if (local_2b8 == (wchar_t *)0x0) {
              bVar7 = false;
            }
            else {
              iVar3 = FUN_0043e420(local_2b8,L"TINA_SMPS.LIB");
              bVar7 = iVar3 == 0;
            }
          }
          else {
            bVar7 = false;
          }
          if (bVar7) {
            (**(code **)(**(longlong **)(local_3d0 + 0x90) + 0x18))
                      (*(longlong **)(local_3d0 + 0x90),&local_2c0,iVar5);
            FUN_00416910(local_270,local_2c0,0xff);
            FUN_01a0cb50(local_3d0,local_168,local_270);
            FUN_004154b0(&local_2c8,local_168,0);
            FUN_00416ba0(&local_2d0,*(undefined8 *)PTR_DAT_020049a0,
                         L"\\EXAMPLES\\SPICE\\TINA_SMPS_SIM.LIB");
            cVar1 = FUN_019ecd90(local_3d0,local_2c8,local_2d0);
            if (cVar1 != '\0') {
              (**(code **)(**(longlong **)(local_3d0 + 0x90) + 0x18))
                        (*(longlong **)(local_3d0 + 0x90),&local_2d8,iVar5);
              FUN_00416910(local_270,local_2d8,0xff);
              FUN_01a0cb50(local_3d0,local_168,local_270);
              FUN_004154b0(&local_2e0,local_168,0);
              FUN_00416ba0(&local_2e8,*(undefined8 *)PTR_DAT_020049a0,
                           L"\\EXAMPLES\\SPICE\\TINA_SMPS_SIM.LIB");
              FUN_019ecfc0(local_3d0,&local_38,local_2e0,local_2e8);
              goto LAB_01a0f8b1;
            }
          }
          (**(code **)(**(longlong **)(local_3c0 + 0xb0) + 0x38))
                    (*(longlong **)(local_3c0 + 0xb0),&local_38);
        }
LAB_01a0f8b1:
        (**(code **)(**(longlong **)(local_3d0 + 0x90) + 0x18))
                  (*(longlong **)(local_3d0 + 0x90),&local_300,iVar5);
        FUN_00416910(local_270,local_300,0xff);
        FUN_01a0cb50(local_3d0,local_168,local_270);
        FUN_004154b0(&local_308,local_168,0);
        local_3e8 = "[\\t\\v ]+";
        FUN_00415980(&local_2f8,3,"\\.subckt[\\t\\v ]+",local_308);
        FUN_00416880(&local_310,local_2f8);
        (**(code **)(**(longlong **)(local_3d0 + 0x90) + 0x18))
                  (*(longlong **)(local_3d0 + 0x90),&local_320,iVar5);
        FUN_00416910(local_270,local_320,0xff);
        FUN_01a0cc10(local_3d0,local_168,local_270);
        FUN_004154b0(&local_328,local_168,0);
        local_3e8 = " ";
        FUN_00415980(&local_318,3,".SUBCKT ",local_328);
        FUN_00416880(&local_330,local_318);
        local_3e8._0_1_ = 2;
        FUN_00ea9000(&local_2f0,local_38,local_310,local_330);
        FUN_00414b50(&local_38,local_2f0);
        (**(code **)(**(longlong **)(local_3d0 + 0x90) + 0x18))
                  (*(longlong **)(local_3d0 + 0x90),&local_348,iVar5);
        FUN_00416910(local_270,local_348,0xff);
        FUN_01a0cb50(local_3d0,local_168,local_270);
        FUN_004154b0(&local_350,local_168,0);
        FUN_004156b0(&local_340,"\\.ends[\\t\\v ]+",local_350);
        FUN_00416880(&local_358,local_340);
        (**(code **)(**(longlong **)(local_3d0 + 0x90) + 0x18))
                  (*(longlong **)(local_3d0 + 0x90),&local_368,iVar5);
        FUN_00416910(local_270,local_368,0xff);
        FUN_01a0cc10(local_3d0,local_168,local_270);
        FUN_004154b0(&local_370,local_168,0);
        FUN_004156b0(&local_360,".ENDS ",local_370);
        FUN_00416880(&local_378,local_360);
        local_3e8 = (char *)CONCAT71(local_3e8._1_7_,2);
        FUN_00ea9000(&local_338,local_38,local_358,local_378);
        FUN_00414b50(&local_38,local_338);
        cVar1 = FUN_01a0ee80(auStack_408,local_38);
        if ((cVar1 != '\0') && (*(char *)(local_3d0 + 0x8c) == '\0')) {
          *(undefined1 *)(local_3d0 + 0x8c) = 1;
        }
        if (*(char *)(local_3d0 + 0xc0) == '\x04') {
          iVar3 = (*(int *)(local_3d0 + 0x50) / 1000 + 2) * 1000;
          *(int *)(local_3d0 + 0x54) = iVar3;
          FUN_019e6210(&local_380,local_38,iVar3);
          FUN_00414b50(&local_38,local_380);
        }
        if (*(char *)(local_3d0 + 0xc0) == '\x05') {
          FUN_019ebfb0(&local_388,local_38);
          FUN_00414b50(&local_38,local_388);
        }
        (**(code **)(**(longlong **)(local_3d0 + 0x20) + 200))(*(longlong **)(local_3d0 + 0x20));
        (**(code **)(**(longlong **)(local_3d0 + 0x20) + 200))(*(longlong **)(local_3d0 + 0x20));
      }
      else {
        (**(code **)(**(longlong **)(local_3c0 + 0xb0) + 0x38))
                  (*(longlong **)(local_3c0 + 0xb0),&local_390);
        cVar1 = FUN_01a0ee80(auStack_408,local_390);
        if ((cVar1 != '\0') && (*(char *)(local_3d0 + 0x8c) == '\0')) {
          *(undefined1 *)(local_3d0 + 0x8c) = 1;
        }
        if (*(char *)(local_3c0 + 0x115) == '\0') {
          (**(code **)(**(longlong **)(local_3c0 + 0xb0) + 0x38))
                    (*(longlong **)(local_3c0 + 0xb0),&local_38);
          if (*(char *)(local_3d0 + 0xc0) == '\x04') {
            iVar3 = (*(int *)(local_3d0 + 0x50) / 1000 + 2) * 1000;
            *(int *)(local_3d0 + 0x54) = iVar3;
            FUN_019e6210(&local_3b8,local_38,iVar3);
            FUN_00414b50(&local_38,local_3b8);
          }
          (**(code **)(**(longlong **)(local_3d0 + 0x20) + 200))(*(longlong **)(local_3d0 + 0x20));
          (**(code **)(**(longlong **)(local_3d0 + 0x20) + 200))(*(longlong **)(local_3d0 + 0x20));
        }
        else {
          (**(code **)(**(longlong **)(local_3d0 + 0x90) + 0x18))
                    (*(longlong **)(local_3d0 + 0x90),&local_3a0,iVar5);
          FUN_00416910(local_270,local_3a0,0xff);
          FUN_01a0cc10(local_3d0,local_168,local_270);
          FUN_004154b0(&local_3a8,local_168,0);
          local_3e8 = " encrypted macro, content not displayed";
          FUN_00415980(&local_398,3,"* SUBCKT: ",local_3a8);
          FUN_00416880(&local_3b0,local_398);
          (**(code **)(**(longlong **)(local_3d0 + 0x20) + 200))(*(longlong **)(local_3d0 + 0x20));
          (**(code **)(**(longlong **)(local_3d0 + 0x20) + 200))(*(longlong **)(local_3d0 + 0x20));
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

