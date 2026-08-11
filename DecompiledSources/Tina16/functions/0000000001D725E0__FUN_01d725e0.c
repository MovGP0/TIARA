/* Ghidra address: 01d725e0 */
/* Ghidra symbol: FUN_01d725e0 */


void FUN_01d725e0(undefined8 param_1,longlong param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 in_RAX;
  longlong lVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM9_Qa;
  undefined8 *local_80;
  double local_78;
  double local_70 [9];
  
  if ((byte)(param_3 - 8U) < 8) {
    bVar8 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_3 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar8 = false;
  }
  if ((!bVar8) && ((*(byte *)(param_2 + 0x88) & 0x20) == 0)) {
    FUN_016ee260(param_1,&local_80,8,0);
    puVar1 = (undefined1 *)*local_80;
    cVar2 = puVar1[0x12];
    if (cVar2 == '\0') {
      lVar7 = FUN_0041f930();
      *(undefined8 *)(lVar7 + 0x280) = 0x4014000000000000;
    }
    else {
      lVar7 = FUN_0041f930();
      uVar9 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),cVar2,puVar1[0x11],0);
      *(undefined8 *)(lVar7 + 0x280) = uVar9;
    }
    FUN_00dd0a10(*puVar1,local_70,&local_78,0);
    (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0x18) + 8) + 0x10))
              (*(longlong *)(puVar1 + 0x18),param_1,param_2,param_3);
    uVar9 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                         *(undefined1 *)(*(longlong *)(puVar1 + 0x18) + 2),puVar1[0x11],0);
    (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0x240) + 8) + 0x10))
              (*(longlong *)(puVar1 + 0x240),param_1,param_2,param_3);
    uVar10 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                          *(undefined1 *)(*(longlong *)(puVar1 + 0x240) + 2),puVar1[0x11],0);
    if ((puVar1[0x10] == '\0') || (puVar1[0x10] == '\x02')) {
      (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0x8b8) + 8) + 0x10))
                (*(longlong *)(puVar1 + 0x8b8),param_1,param_2,param_3);
      unaff_XMM9_Qa =
           FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                        *(undefined1 *)(*(longlong *)(puVar1 + 0x8b8) + 2),puVar1[0x11],0);
    }
    if ((puVar1[0x10] == '\0') || (puVar1[0x10] == '\x01')) {
      (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0x690) + 8) + 0x10))
                (*(longlong *)(puVar1 + 0x690),param_1,param_2,param_3);
      unaff_XMM8_Qa =
           FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                        *(undefined1 *)(*(longlong *)(puVar1 + 0x690) + 2),puVar1[0x11],0);
    }
    (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0x468) + 8) + 0x10))
              (*(longlong *)(puVar1 + 0x468),param_1,param_2,param_3);
    FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                 *(undefined1 *)(*(longlong *)(puVar1 + 0x468) + 2),puVar1[0x11],0);
    FUN_00dd55c0(puVar1 + 0xae0,param_1,param_2,param_3);
    sVar4 = FUN_016eb820(param_1,1,3);
    if (sVar4 == 1) {
      cVar2 = FUN_00dd54e0(*(undefined8 *)(puVar1 + 0xaf8),*(undefined8 *)(puVar1 + 0xb00),*puVar1);
      if (cVar2 == '\0') {
        puVar1[0xb09] = puVar1[0xb08];
        puVar1[0xb0b] = puVar1[0xb08];
      }
      else if (cVar2 == '\x01') {
        uVar5 = FUN_00dd56d0(uVar9,*puVar1);
        uVar6 = FUN_00dd56d0(uVar10,*puVar1);
        uVar3 = FUN_01d725b0(uVar5,uVar6,puVar1[0xb0a]);
        puVar1[0xb09] = uVar3;
        puVar1[0xb0b] = uVar3;
      }
      else if (cVar2 == '\x02') {
        puVar1[0xb09] = puVar1[0xb08];
        puVar1[0xb0b] = puVar1[0xb08];
      }
    }
    else if (sVar4 == 2) {
      cVar2 = FUN_00dd54e0(*(undefined8 *)(puVar1 + 0xaf8),*(undefined8 *)(puVar1 + 0xb00),*puVar1);
      if (cVar2 == '\0') {
        puVar1[0xb09] = puVar1[0xb08];
        puVar1[0xb0b] = puVar1[0xb08];
      }
      else if (cVar2 == '\x01') {
        puVar1[0xb09] = puVar1[0xb08];
        puVar1[0xb0b] = puVar1[0xb08];
      }
      else if (cVar2 == '\x02') {
        uVar5 = FUN_00dd56d0(uVar9,*puVar1);
        uVar6 = FUN_00dd56d0(uVar10,*puVar1);
        uVar3 = FUN_01d725b0(uVar5,uVar6,puVar1[0xb0a]);
        puVar1[0xb09] = uVar3;
        puVar1[0xb0b] = uVar3;
      }
    }
    else if (sVar4 == 3) {
      cVar2 = FUN_00dd54e0(*(undefined8 *)(puVar1 + 0xaf8),*(undefined8 *)(puVar1 + 0xb00),*puVar1);
      if (cVar2 == '\0') {
        puVar1[0xb09] = puVar1[0xb08];
        puVar1[0xb0b] = puVar1[0xb0a];
      }
      else if (cVar2 == '\x01') {
        uVar5 = FUN_00dd56d0(uVar9,*puVar1);
        uVar6 = FUN_00dd56d0(uVar10,*puVar1);
        uVar3 = FUN_01d725b0(uVar5,uVar6,puVar1[0xb0a]);
        puVar1[0xb09] = uVar3;
        puVar1[0xb0b] = puVar1[0xb0a];
      }
      else if (cVar2 == '\x02') {
        puVar1[0xb09] = puVar1[0xb08];
        puVar1[0xb0b] = puVar1[0xb08];
      }
    }
    else if (sVar4 == 4) {
      cVar2 = FUN_00dd54e0(*(undefined8 *)(puVar1 + 0xaf8),*(undefined8 *)(puVar1 + 0xb00),*puVar1);
      if (cVar2 == '\0') {
        puVar1[0xb09] = puVar1[0xb08];
        puVar1[0xb0b] = puVar1[0xb0a];
      }
      else if (cVar2 == '\x01') {
        puVar1[0xb09] = puVar1[0xb08];
        puVar1[0xb0b] = puVar1[0xb09];
      }
      else if (cVar2 == '\x02') {
        uVar5 = FUN_00dd56d0(uVar9,*puVar1);
        uVar6 = FUN_00dd56d0(uVar10,*puVar1);
        uVar3 = FUN_01d725b0(uVar5,uVar6,puVar1[0xb0a]);
        puVar1[0xb09] = uVar3;
        puVar1[0xb0b] = puVar1[0xb0a];
      }
    }
    if (((puVar1[0x10] == '\0') || (puVar1[0x10] == '\x01')) &&
       (cVar2 = FUN_00dd56d0(unaff_XMM8_Qa,*puVar1), cVar2 == '\0')) {
      puVar1[0xb09] = 1;
      puVar1[0xb0b] = 1;
    }
    if (((puVar1[0x10] == '\0') || (puVar1[0x10] == '\x02')) &&
       (cVar2 = FUN_00dd56d0(unaff_XMM9_Qa,*puVar1), cVar2 == '\0')) {
      puVar1[0xb09] = 0;
      puVar1[0xb0b] = 0;
    }
    dVar11 = local_78;
    if (puVar1[0xb0b] == '\x01') {
      dVar11 = local_70[0];
    }
    dVar11 = (double)(**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0xb18) + 8) + 0x18))
                               (*(longlong *)(puVar1 + 0xb18),param_1,param_2,dVar11,param_3);
    if (dVar11 == local_70[0]) {
      local_70[0] = local_78;
    }
    (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0xa7a0) + 8) + 0x10))
              (*(longlong *)(puVar1 + 0xa7a0),param_1,param_2,dVar11,0,param_3,2,2);
    (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0xaa98) + 8) + 0x10))
              (*(longlong *)(puVar1 + 0xaa98),param_1,param_2,local_70[0],0,param_3,2,2);
  }
  return;
}

