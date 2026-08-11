/* Ghidra address: 013b3ec0 */
/* Ghidra symbol: FUN_013b3ec0 */


void FUN_013b3ec0(longlong param_1,undefined8 *param_2,double *param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  double *pdVar8;
  longlong lVar9;
  bool bVar10;
  undefined8 *puVar11;
  char *pcVar12;
  double *pdVar13;
  double dVar14;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined1 local_313;
  undefined1 local_312;
  undefined1 local_311;
  undefined1 local_310 [32];
  double *local_2f0;
  char local_2e8;
  char local_2e7 [263];
  longlong *local_1e0;
  int local_1d0;
  char local_1cc;
  char local_1cb;
  int local_1c8;
  longlong *local_80;
  longlong local_70;
  int local_60;
  double local_58 [7];
  
  local_348 = 0;
  local_340 = 0;
  local_338 = 0;
  local_320 = 0;
  local_328 = 0;
  local_330 = 0;
  pdVar8 = local_58;
  for (lVar9 = 6; lVar9 != 0; lVar9 = lVar9 + -1) {
    *pdVar8 = *param_3;
    param_3 = param_3 + 1;
    pdVar8 = pdVar8 + 1;
  }
  FUN_00417580(local_310,&DAT_01984be0);
  pcVar12 = &local_2e8;
  puVar11 = param_2;
  for (lVar9 = 0x52; puVar11 = puVar11 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined8 *)pcVar12 = *puVar11;
    pcVar12 = pcVar12 + 8;
  }
  if ((local_2e8 == '\x01') ||
     ((((local_2e8 == '\a' && (param_4 == '\0')) && (cVar2 = FUN_013b2e60(param_1,1), cVar2 == '\0')
       ) && (cVar2 = FUN_013b2e60(param_1,2), cVar2 == '\0')))) {
    FUN_004154b0(&local_320,local_2e7,0);
    FUN_004155b0(&local_320,&DAT_013b461c);
    FUN_00416880(&local_328,local_320);
    FUN_010c2250(&local_330,0x201);
    FUN_00416ad0(&local_328,local_330);
    FUN_0072d440(local_328,0,4,0);
  }
  else {
    plVar1 = local_1e0;
    pdVar8 = local_58;
    pdVar13 = (double *)(param_2 + 0x46);
    for (lVar9 = 6; lVar9 != 0; lVar9 = lVar9 + -1) {
      *pdVar13 = *pdVar8;
      pdVar8 = pdVar8 + 1;
      pdVar13 = pdVar13 + 1;
    }
    if ((local_2e8 == '\a') && (local_1cb != '\0')) {
      if (local_1cc == '\x03') {
        (**(code **)(*local_1e0 + 0x2d0))(local_1e0,local_1d0,&local_2f0);
        if (local_58[1] == 0.0) {
          bVar10 = *local_2f0 != local_58[1];
        }
        else {
          dVar14 = (double)FUN_0040c850((*local_2f0 - local_58[1]) / local_58[1]);
          bVar10 = 0.01 < dVar14;
        }
        cVar2 = FUN_013b2e60(param_1,0);
        if (cVar2 != '\0') {
          FUN_01d3a010(local_2f0,3,local_58[1]);
        }
        uVar7 = FUN_013b2e80(param_1);
        if (((char)uVar7 == '\0') && (bVar10 == false)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
        }
        FUN_013b2e90(param_1,uVar5);
        cVar2 = FUN_013b2e60(param_1,2);
        if (cVar2 != '\0') {
          FUN_01d3a010(local_2f0,3,local_58[1]);
          bVar3 = FUN_01d0a350(local_1e0);
          FUN_01d0a340(local_1e0,bVar3 | bVar10);
        }
      }
      else if (local_1cc == '\x02') {
        local_2f0 = (double *)FUN_01cfde70(local_1e0,local_1d0,0,&local_311,&local_312,&local_313);
        uVar4 = FUN_0040c840(local_58[1]);
        *(undefined2 *)local_2f0 = uVar4;
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
      else if (local_1cc == '\x06') {
        (**(code **)(*local_1e0 + 0x2d0))(local_1e0,local_1d0,&local_2f0);
        if (local_58[1] == 0.0) {
          bVar10 = *local_2f0 != local_58[1];
        }
        else {
          dVar14 = (double)FUN_0040c850((*local_2f0 - local_58[1]) / local_58[1]);
          bVar10 = 0.01 < dVar14;
        }
        cVar2 = FUN_013b2e60(param_1,0);
        if (cVar2 != '\0') {
          FUN_01d3a010(local_2f0,6,local_58[1]);
        }
        uVar7 = FUN_013b2e80(param_1);
        if (((char)uVar7 == '\0') && (bVar10 == false)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
        }
        FUN_013b2e90(param_1,uVar5);
        cVar2 = FUN_013b2e60(param_1,2);
        if (cVar2 != '\0') {
          FUN_01d3a010(local_2f0,6,local_58[1]);
          bVar3 = FUN_01d0a350(local_1e0);
          FUN_01d0a340(local_1e0,bVar3 | bVar10);
        }
      }
      else if (local_1cc == '\a') {
        (**(code **)(*local_1e0 + 0x2d0))(local_1e0,local_1d0,&local_2f0);
        pdVar8 = (double *)
                 FUN_01cfde70(local_1e0,local_1d0,local_1c8,&local_311,&local_312,&local_313);
        *pdVar8 = local_58[1];
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
      else if (local_1cc == '\x05') {
        (**(code **)(*local_1e0 + 0x2d0))(local_1e0,local_1d0,&local_2f0);
        iVar6 = local_1c8;
        pdVar8 = (double *)
                 FUN_01cfde70(plVar1,local_1d0 + 1,local_1c8,&local_311,&local_312,&local_313);
        if (local_58[1] == 0.0) {
          bVar10 = *pdVar8 != local_58[1];
        }
        else {
          dVar14 = (double)FUN_0040c850((*pdVar8 - local_58[1]) / local_58[1]);
          bVar10 = 0.01 < dVar14;
        }
        cVar2 = FUN_013b2e60(param_1,0);
        if (cVar2 != '\0') {
          *pdVar8 = local_58[1];
          FUN_01d3a230(*(undefined8 *)((longlong)local_2f0 + 1),
                       *(undefined8 *)((longlong)local_2f0 + 9),iVar6 + -1,local_58[1]);
        }
        uVar7 = FUN_013b2e80(param_1);
        if (((char)uVar7 == '\0') && (bVar10 == false)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
        }
        FUN_013b2e90(param_1,uVar5);
        cVar2 = FUN_013b2e60(param_1,2);
        if (cVar2 != '\0') {
          *pdVar8 = local_58[1];
          FUN_01d3a230(*(undefined8 *)((longlong)local_2f0 + 1),
                       *(undefined8 *)((longlong)local_2f0 + 9),local_1c8 + -1,local_58[1]);
          bVar3 = FUN_01d0a350(local_1e0);
          FUN_01d0a340(local_1e0,bVar3 | bVar10);
        }
      }
    }
    if ((local_2e8 == '\t') && (local_80 != (longlong *)0x0)) {
      FUN_004169a0(&local_338,local_2e7);
      iVar6 = (**(code **)(*local_80 + 0xb8))(local_80,local_338);
      if (-1 < iVar6) {
        FUN_00b8fe00(&local_340,local_58[1],*PTR_DAT_02005310,0);
        FUN_004b5450(local_80,iVar6,local_340);
        *(undefined1 *)(param_1 + 0x25) = 1;
        FUN_004169a0(&local_348,local_2e7);
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                  (*(longlong **)(param_1 + 0x30),local_348);
      }
    }
    if ((local_2e8 == '\n') && (local_60 == 1)) {
      *(double *)(local_70 + 200) = local_58[1];
      *(undefined1 *)(param_1 + 0x26) = 1;
    }
  }
  FUN_00414560(&local_348,5);
  FUN_004144d0(&local_320);
  FUN_00417740(local_310,&DAT_01984be0);
  return;
}

