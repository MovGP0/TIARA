/* Ghidra address: 01402730 */
/* Ghidra symbol: FUN_01402730 */


void FUN_01402730(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340 [2];
  undefined1 local_330 [760];
  undefined8 local_38;
  undefined8 local_30;
  
  local_360 = 0;
  local_368 = 0;
  local_350 = 0;
  local_358 = 0;
  local_348 = 0;
  local_340[0] = 0;
  local_30 = 0;
  local_38 = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x868) + 0xa8))(*(longlong **)(param_1 + 0x868));
  if (cVar2 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x868),local_340);
    FUN_0040cf10(local_330,local_340[0],0);
    FUN_00409900();
    FUN_0040c9e0(local_330);
    FUN_00409900();
    uVar1 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
    *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
    FUN_01402700(param_1,param_2);
    while( true ) {
      cVar2 = FUN_0040d1c0(local_330);
      FUN_00409900();
      if (cVar2 != '\0') break;
      FUN_0040e200(local_330,&local_30);
      FUN_0040e480(local_330);
      FUN_00409900();
      iVar6 = FUN_004170c0(&DAT_01402b88,local_30,1);
      if (0 < iVar6) {
        lVar4 = FUN_00414de0(&local_30);
        iVar6 = FUN_004170c0(&DAT_01402b88,local_30,1);
        *(undefined2 *)(lVar4 + -2 + (longlong)iVar6 * 2) = 0x20;
      }
      uVar3 = FUN_004170c0(&DAT_01402b98,local_30,1);
      FUN_00416dc0(&local_348,local_30,1,uVar3);
      FUN_0043ea00(&local_38,local_348);
      if (*(int *)(param_1 + 0x89c) < *(int *)(param_1 + 0x894) * 8) {
        *(int *)(param_1 + 0x89c) = *(int *)(param_1 + 0x89c) + 800;
        FUN_00409620(param_1 + 0x8b8,(longlong)*(int *)(param_1 + 0x89c));
      }
      uVar5 = FUN_00b8f030(local_38);
      *(undefined8 *)(*(longlong *)(param_1 + 0x8b8) + (longlong)*(int *)(param_1 + 0x894) * 8) =
           uVar5;
      *(int *)(param_1 + 0x894) = *(int *)(param_1 + 0x894) + 1;
      uVar3 = FUN_004170c0(&DAT_01402b98,local_30,1);
      FUN_00416e20(&local_30,1,uVar3);
      FUN_0043ea00(&local_38,local_30);
      uVar5 = FUN_00b8f030(local_38);
      *(undefined8 *)(*(longlong *)(param_1 + 0x8b8) + (longlong)*(int *)(param_1 + 0x894) * 8) =
           uVar5;
      *(int *)(param_1 + 0x894) = *(int *)(param_1 + 0x894) + 1;
    }
    *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = uVar1;
    FUN_0040d150();
    FUN_00409900();
    iVar7 = *(int *)(param_1 + 0x894) / 2;
    iVar6 = 0;
    if (-1 < iVar7 + -1) {
      do {
        FUN_0043f750(&local_358,iVar6 + 1);
        FUN_00416ba0(&local_350,L"Input #",local_358);
        uVar5 = FUN_014313c0(&PTR_FUN_0142bf08,1,
                             *(longlong *)(param_1 + 0x8b8) + (longlong)(iVar6 * 2) * 8,0);
        FUN_00b0ab70(*(undefined8 *)(param_1 + 0x790),local_350,uVar5);
        FUN_0043f750(&local_368,iVar6 + 1);
        FUN_00416ba0(&local_360,L"Output #",local_368);
        uVar5 = FUN_014313c0(&PTR_FUN_0142bf08,1,
                             *(longlong *)(param_1 + 0x8b8) + (longlong)(iVar6 * 2 + 1) * 8);
        FUN_00b0ab70(*(undefined8 *)(param_1 + 0x790),local_360,uVar5);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    FUN_00848a70(*(undefined8 *)(param_1 + 0x790),*(undefined4 *)(param_1 + 0x894));
  }
  FUN_00414560(&local_368,5);
  FUN_00414480(local_340);
  FUN_00414560(&local_38,2);
  return;
}

