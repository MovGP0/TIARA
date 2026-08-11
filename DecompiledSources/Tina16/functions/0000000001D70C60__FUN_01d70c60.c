/* Ghidra address: 01d70c60 */
/* Ghidra symbol: FUN_01d70c60 */


void FUN_01d70c60(undefined8 param_1,longlong param_2,char param_3)

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
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50 [5];
  
  if ((byte)(param_3 - 8U) < 8) {
    bVar8 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_3 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar8 = false;
  }
  if ((!bVar8) && ((*(byte *)(param_2 + 0x88) & 0x20) == 0)) {
    FUN_016ee260(param_1,&local_60,8,0);
    puVar1 = (undefined1 *)*local_60;
    cVar2 = puVar1[0x11];
    if (cVar2 == '\0') {
      lVar7 = FUN_0041f930();
      *(undefined8 *)(lVar7 + 0x280) = 0x4014000000000000;
    }
    else {
      lVar7 = FUN_0041f930();
      uVar9 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),cVar2,puVar1[0x10],0);
      *(undefined8 *)(lVar7 + 0x280) = uVar9;
    }
    FUN_00dd0a10(*puVar1,local_50,&local_58,0);
    (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0x18) + 8) + 0x10))
              (*(longlong *)(puVar1 + 0x18),param_1,param_2,param_3);
    (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0x240) + 8) + 0x10))
              (*(longlong *)(puVar1 + 0x240),param_1,param_2,param_3);
    (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0x468) + 8) + 0x10))
              (*(longlong *)(puVar1 + 0x468),param_1,param_2,param_3);
    uVar9 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                         *(undefined1 *)(*(longlong *)(puVar1 + 0x18) + 2),puVar1[0x10],0);
    uVar10 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                          *(undefined1 *)(*(longlong *)(puVar1 + 0x240) + 2),puVar1[0x10],0);
    FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                 *(undefined1 *)(*(longlong *)(puVar1 + 0x468) + 2),puVar1[0x10],0);
    FUN_00dd55c0(puVar1 + 0x690,param_1,param_2,param_3);
    sVar4 = FUN_016eb820(param_1,1,3);
    if (sVar4 == 1) {
      cVar2 = FUN_00dd54e0(*(undefined8 *)(puVar1 + 0x6a8),*(undefined8 *)(puVar1 + 0x6b0),*puVar1);
      if (cVar2 == '\0') {
        puVar1[0x6b9] = puVar1[0x6b8];
        puVar1[0x6bb] = puVar1[0x6b8];
      }
      else if (cVar2 == '\x01') {
        uVar5 = FUN_00dd56d0(uVar9,*puVar1);
        uVar6 = FUN_00dd56d0(uVar10,*puVar1);
        uVar3 = FUN_01d70c40(uVar5,uVar6,puVar1[0x6ba]);
        puVar1[0x6b9] = uVar3;
        puVar1[0x6bb] = uVar3;
      }
      else if (cVar2 == '\x02') {
        puVar1[0x6b9] = puVar1[0x6b8];
        puVar1[0x6bb] = puVar1[0x6b8];
      }
    }
    else if (sVar4 == 2) {
      cVar2 = FUN_00dd54e0(*(undefined8 *)(puVar1 + 0x6a8),*(undefined8 *)(puVar1 + 0x6b0),*puVar1);
      if (cVar2 == '\0') {
        puVar1[0x6b9] = puVar1[0x6b8];
        puVar1[0x6bb] = puVar1[0x6b8];
      }
      else if (cVar2 == '\x01') {
        puVar1[0x6b9] = puVar1[0x6b8];
        puVar1[0x6bb] = puVar1[0x6b8];
      }
      else if (cVar2 == '\x02') {
        uVar5 = FUN_00dd56d0(uVar9,*puVar1);
        uVar6 = FUN_00dd56d0(uVar10,*puVar1);
        uVar3 = FUN_01d70c40(uVar5,uVar6,puVar1[0x6ba]);
        puVar1[0x6b9] = uVar3;
        puVar1[0x6bb] = uVar3;
      }
    }
    else if (sVar4 == 3) {
      cVar2 = FUN_00dd54e0(*(undefined8 *)(puVar1 + 0x6a8),*(undefined8 *)(puVar1 + 0x6b0),*puVar1);
      if (cVar2 == '\0') {
        puVar1[0x6b9] = puVar1[0x6b8];
        puVar1[0x6bb] = puVar1[0x6ba];
      }
      else if (cVar2 == '\x01') {
        uVar5 = FUN_00dd56d0(uVar9,*puVar1);
        uVar6 = FUN_00dd56d0(uVar10,*puVar1);
        uVar3 = FUN_01d70c40(uVar5,uVar6,puVar1[0x6ba]);
        puVar1[0x6b9] = uVar3;
        puVar1[0x6bb] = puVar1[0x6ba];
      }
      else if (cVar2 == '\x02') {
        puVar1[0x6b9] = puVar1[0x6b8];
        puVar1[0x6bb] = puVar1[0x6b8];
      }
    }
    else if (sVar4 == 4) {
      cVar2 = FUN_00dd54e0(*(undefined8 *)(puVar1 + 0x6a8),*(undefined8 *)(puVar1 + 0x6b0),*puVar1);
      if (cVar2 == '\0') {
        puVar1[0x6b9] = puVar1[0x6b8];
        puVar1[0x6bb] = puVar1[0x6ba];
      }
      else if (cVar2 == '\x01') {
        puVar1[0x6b9] = puVar1[0x6b8];
        puVar1[0x6bb] = puVar1[0x6b8];
      }
      else if (cVar2 == '\x02') {
        uVar5 = FUN_00dd56d0(uVar9,*puVar1);
        uVar6 = FUN_00dd56d0(uVar10,*puVar1);
        uVar3 = FUN_01d70c40(uVar5,uVar6,puVar1[0x6ba]);
        puVar1[0x6b9] = uVar3;
        puVar1[0x6bb] = puVar1[0x6ba];
      }
    }
    if (puVar1[0x6bb] == '\x01') {
      local_58 = local_50[0];
    }
    uVar9 = (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0x6c8) + 8) + 0x18))
                      (*(longlong *)(puVar1 + 0x6c8),param_1,param_2,local_58,param_3);
    (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0xa350) + 8) + 0x10))
              (*(longlong *)(puVar1 + 0xa350),param_1,param_2,uVar9,0,param_3,2,2);
  }
  return;
}

