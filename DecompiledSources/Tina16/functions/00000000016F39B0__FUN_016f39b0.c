/* Ghidra address: 016f39b0 */
/* Ghidra symbol: FUN_016f39b0 */


void FUN_016f39b0(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  double dVar6;
  char local_69;
  undefined8 local_60;
  double local_58;
  undefined1 local_50 [7];
  char local_49 [25];
  
  local_60 = 0;
  local_69 = '\x01';
  bVar1 = 1;
  cVar2 = '\x01';
  bVar4 = false;
  iVar3 = 0;
  uVar5 = FUN_00b92140(0);
  FUN_014c8d50(param_1,param_2,0,1);
  dVar6 = (double)FUN_00b92140(uVar5);
  *(double *)PTR_DAT_02005838 = dVar6 + *(double *)PTR_DAT_02005838;
  while (((bVar1 & *(char *)(param_1 + 0x49c) == '\0') != 0 && (cVar2 != '\0'))) {
    uVar5 = FUN_00b92140(0);
    bVar1 = FUN_014c9390(param_1,&local_58,local_49,local_50);
    bVar4 = bVar1 == 0;
    if (bVar4) break;
    dVar6 = (double)FUN_00b92140(uVar5);
    cVar2 = local_49[0];
    *(double *)PTR_DAT_020045e8 = dVar6 + *(double *)PTR_DAT_020045e8;
    uVar5 = FUN_00b92140(0);
    FUN_014c8a30(param_1);
    dVar6 = (double)FUN_00b92140(uVar5);
    *(double *)PTR_DAT_02005830 = dVar6 + *(double *)PTR_DAT_02005830;
    if ((bVar1 != 0) && (cVar2 != '\0' || local_69 != '\0')) {
      if (local_69 == '\0') {
        *(undefined1 *)(param_1 + 0x326) = 1;
        FUN_016f5430(param_1,param_2,param_3);
        bVar1 = *(char *)(param_1 + 0x324) == '\0';
        if (!(bool)bVar1) {
          *(undefined1 *)(param_1 + 0x326) = 0;
          FUN_016f5430(param_1,param_2,param_3);
          bVar1 = *(char *)(param_1 + 0x324) == '\0';
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x326) = 0;
        FUN_016f5430(param_1,param_2,param_3);
        bVar1 = *(char *)(param_1 + 0x324) == '\0';
      }
      uVar5 = FUN_00b92140(0);
      FUN_014c8d50(param_1,param_2,local_58 * 1.00000000000001,local_69);
      dVar6 = (double)FUN_00b92140(uVar5);
      *(double *)PTR_DAT_02005838 = dVar6 + *(double *)PTR_DAT_02005838;
      if (local_69 != '\0') {
        local_69 = '\0';
      }
      cVar2 = '\x01';
    }
    iVar3 = iVar3 + 1;
    if (*(double *)(param_1 + 0x6f0) <= (double)iVar3) {
      *(undefined1 *)(param_1 + 0x324) = 1;
      bVar1 = 0;
    }
  }
  if (bVar4) {
    uVar5 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
    FUN_015f9120(uVar5,0);
    FUN_01b05000(L"HDL: Internal error!",0);
  }
  else if (*(char *)(param_1 + 0x49c) == '\0') {
    cVar2 = FUN_01b07dd0(param_1);
    if (cVar2 != '\0') {
      uVar5 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
      _ResetDigitalValues(uVar5,0);
    }
  }
  FUN_00414480(&local_60);
  return;
}

