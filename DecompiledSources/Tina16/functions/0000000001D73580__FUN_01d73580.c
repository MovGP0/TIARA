/* Ghidra address: 01d73580 */
/* Ghidra symbol: FUN_01d73580 */


void FUN_01d73580(undefined8 param_1,longlong param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined8 in_RAX;
  longlong lVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 *local_70;
  double local_68;
  double local_60 [7];
  
  if ((byte)(param_3 - 8U) < 8) {
    bVar7 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_3 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar7 = false;
  }
  if ((!bVar7) && ((*(byte *)(param_2 + 0x88) & 0x20) == 0)) {
    FUN_016ee260(param_1,&local_70,8,0);
    puVar1 = (undefined1 *)*local_70;
    cVar2 = puVar1[0x11];
    if (cVar2 == '\0') {
      lVar6 = FUN_0041f930();
      *(undefined8 *)(lVar6 + 0x280) = 0x4014000000000000;
    }
    else {
      lVar6 = FUN_0041f930();
      uVar8 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),cVar2,puVar1[0x10],0);
      *(undefined8 *)(lVar6 + 0x280) = uVar8;
    }
    FUN_00dd0a10(*puVar1,local_60,&local_68,0);
    (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0x18) + 8) + 0x10))
              (*(longlong *)(puVar1 + 0x18),param_1,param_2,param_3);
    (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0x240) + 8) + 0x10))
              (*(longlong *)(puVar1 + 0x240),param_1,param_2,param_3);
    (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0x468) + 8) + 0x10))
              (*(longlong *)(puVar1 + 0x468),param_1,param_2,param_3);
    (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0x690) + 8) + 0x10))
              (*(longlong *)(puVar1 + 0x690),param_1,param_2,param_3);
    uVar8 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                         *(undefined1 *)(*(longlong *)(puVar1 + 0x690) + 2),puVar1[0x10],0);
    uVar9 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                         *(undefined1 *)(*(longlong *)(puVar1 + 0x18) + 2),puVar1[0x10],0);
    uVar10 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                          *(undefined1 *)(*(longlong *)(puVar1 + 0x240) + 2),puVar1[0x10],0);
    FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                 *(undefined1 *)(*(longlong *)(puVar1 + 0x468) + 2),puVar1[0x10],0);
    FUN_00dd55c0(puVar1 + 0xa540,param_1,param_2,param_3);
    sVar4 = FUN_016eb820(param_1,1,3);
    if (sVar4 == 1) {
      cVar2 = FUN_00dd54e0(*(undefined8 *)(puVar1 + 0xa558),*(undefined8 *)(puVar1 + 0xa560),*puVar1
                          );
      if (cVar2 == '\0') {
        puVar1[0xa569] = puVar1[0xa568];
        puVar1[0xa56b] = puVar1[0xa568];
      }
      else if (cVar2 == '\x01') {
        uVar5 = FUN_00dd56d0(uVar8,*puVar1);
        uVar3 = FUN_01d73570(uVar5,puVar1[0xa56a]);
        puVar1[0xa569] = uVar3;
        puVar1[0xa56b] = uVar3;
      }
      else if (cVar2 == '\x02') {
        puVar1[0xa569] = puVar1[0xa568];
        puVar1[0xa56b] = puVar1[0xa568];
      }
    }
    else if (sVar4 == 2) {
      cVar2 = FUN_00dd54e0(*(undefined8 *)(puVar1 + 0xa558),*(undefined8 *)(puVar1 + 0xa560),*puVar1
                          );
      if (cVar2 == '\0') {
        puVar1[0xa569] = puVar1[0xa568];
        puVar1[0xa56b] = puVar1[0xa568];
      }
      else if (cVar2 == '\x01') {
        puVar1[0xa569] = puVar1[0xa568];
        puVar1[0xa56b] = puVar1[0xa568];
      }
      else if (cVar2 == '\x02') {
        uVar5 = FUN_00dd56d0(uVar8,*puVar1);
        uVar3 = FUN_01d73570(uVar5,puVar1[0xa56a]);
        puVar1[0xa569] = uVar3;
        puVar1[0xa56b] = uVar3;
      }
    }
    else if (sVar4 == 3) {
      cVar2 = FUN_00dd54e0(*(undefined8 *)(puVar1 + 0xa558),*(undefined8 *)(puVar1 + 0xa560),*puVar1
                          );
      if (cVar2 == '\0') {
        puVar1[0xa569] = puVar1[0xa568];
        puVar1[0xa56b] = puVar1[0xa56a];
      }
      else if (cVar2 == '\x01') {
        uVar5 = FUN_00dd56d0(uVar8,*puVar1);
        uVar3 = FUN_01d73570(uVar5,puVar1[0xa56a]);
        puVar1[0xa569] = uVar3;
        puVar1[0xa56b] = puVar1[0xa56a];
      }
      else if (cVar2 == '\x02') {
        puVar1[0xa569] = puVar1[0xa568];
        puVar1[0xa56b] = puVar1[0xa568];
      }
    }
    else if (sVar4 == 4) {
      cVar2 = FUN_00dd54e0(*(undefined8 *)(puVar1 + 0xa558),*(undefined8 *)(puVar1 + 0xa560),*puVar1
                          );
      if (cVar2 == '\0') {
        puVar1[0xa569] = puVar1[0xa568];
        puVar1[0xa56b] = puVar1[0xa56a];
      }
      else if (cVar2 == '\x01') {
        puVar1[0xa569] = puVar1[0xa568];
        puVar1[0xa56b] = puVar1[0xa568];
      }
      else if (cVar2 == '\x02') {
        uVar5 = FUN_00dd56d0(uVar8,*puVar1);
        uVar3 = FUN_01d73570(uVar5,puVar1[0xa56a]);
        puVar1[0xa569] = uVar3;
        puVar1[0xa56b] = puVar1[0xa56a];
      }
    }
    cVar2 = FUN_00dd56d0(uVar9,*puVar1);
    if (cVar2 == '\0') {
      puVar1[0xa569] = 1;
      puVar1[0xa56b] = 1;
    }
    cVar2 = FUN_00dd56d0(uVar10,*puVar1);
    if (cVar2 == '\0') {
      puVar1[0xa569] = 0;
      puVar1[0xa56b] = 0;
    }
    dVar11 = local_68;
    if (puVar1[0xa56b] == '\x01') {
      dVar11 = local_60[0];
    }
    dVar11 = (double)(**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0x8b8) + 8) + 0x18))
                               (*(longlong *)(puVar1 + 0x8b8),param_1,param_2,dVar11,param_3);
    if (dVar11 == local_60[0]) {
      local_60[0] = local_68;
    }
    (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0xa578) + 8) + 0x10))
              (*(longlong *)(puVar1 + 0xa578),param_1,param_2,dVar11,0,param_3,2,2);
    (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0xa870) + 8) + 0x10))
              (*(longlong *)(puVar1 + 0xa870),param_1,param_2,local_60[0],0,param_3,2,2);
  }
  return;
}

