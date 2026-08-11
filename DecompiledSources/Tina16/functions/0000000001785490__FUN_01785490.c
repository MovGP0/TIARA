/* Ghidra address: 01785490 */
/* Ghidra symbol: FUN_01785490 */


void FUN_01785490(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  undefined1 auStack_378 [40];
  longlong local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  longlong local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined1 local_310 [768];
  
  local_348 = 0;
  local_340 = 0;
  local_338 = 0;
  local_330 = 0;
  local_318 = 0;
  local_320 = 0;
  local_328 = 0;
  local_res10[0] = param_2;
  local_350 = param_1;
  FUN_00414610(param_2);
  FUN_0040cf10(local_310,local_res10[0],0);
  FUN_00409900();
  FUN_0040c9e0(local_310);
  FUN_00409900();
  do {
    FUN_0040e200(local_310,&local_318);
    FUN_0040e480(local_310);
    FUN_00409900();
    FUN_01785360(auStack_378,&local_330,local_318,3);
    FUN_0043e130(&local_328,local_330);
    iVar2 = FUN_00416db0(local_328,L"INPUT");
    if (iVar2 == 0) {
LAB_0178558c:
      iVar2 = FUN_00416db0(local_328,L"INPUT");
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        iVar2 = FUN_00416db0(local_328,L"INOUT");
        if (iVar2 == 0) {
          uVar3 = 2;
        }
        else {
          uVar3 = 4;
        }
      }
      FUN_01785360(auStack_378,&local_338,local_318,2);
      (**(code **)(**(longlong **)(local_350 + 0x738) + 0x80))
                (*(longlong **)(local_350 + 0x738),local_338,uVar3);
    }
    else {
      iVar2 = FUN_00416db0(local_328,L"INOUT");
      if (iVar2 == 0) goto LAB_0178558c;
      iVar2 = FUN_00416db0(local_328,L"BUFFER");
      if (iVar2 == 0) goto LAB_0178558c;
      iVar2 = FUN_00416db0(local_328,L"OUTPUT");
      if ((iVar2 == 0) || (local_328 == 0)) {
        iVar2 = FUN_00416db0(local_328,L"OUTPUT");
        if (iVar2 == 0) {
          uVar3 = 1;
        }
        else {
          uVar3 = 4;
        }
        FUN_01785360(auStack_378,&local_340,local_318,2);
        (**(code **)(**(longlong **)(local_350 + 0x740) + 0x80))
                  (*(longlong **)(local_350 + 0x740),local_340,uVar3);
      }
      else {
        iVar2 = FUN_00416db0(local_328,L"POWER");
        if (iVar2 == 0) {
          FUN_01785360(auStack_378,&local_348,local_318,2);
          FUN_00414b50(&local_320,local_348);
          iVar2 = FUN_004170c0(&DAT_0178582c,local_320,1);
          if (iVar2 < 1) {
            iVar2 = FUN_004170c0(&LAB_01785840,local_320,1);
            if (iVar2 < 1) {
              (**(code **)(**(longlong **)(local_350 + 0x748) + 0x80))
                        (*(longlong **)(local_350 + 0x748),local_320,3);
              goto LAB_0178571a;
            }
          }
          (**(code **)(**(longlong **)(local_350 + 0x750) + 0x80))
                    (*(longlong **)(local_350 + 0x750),local_320,3);
        }
      }
    }
LAB_0178571a:
    cVar1 = FUN_0040d1c0(local_310);
    FUN_00409900();
    if (cVar1 != '\0') {
      FUN_0040d150(local_310);
      FUN_00409900();
      FUN_00414560(&local_348,7);
      FUN_00414480(local_res10);
      return;
    }
  } while( true );
}

