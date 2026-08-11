/* Ghidra address: 014da210 */
/* Ghidra symbol: FUN_014da210 */


void FUN_014da210(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 in_RAX;
  longlong lVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70 [9];
  
  cVar3 = (char)param_3;
  if ((byte)(cVar3 - 8U) < 8) {
    bVar11 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (cVar3 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar11 = false;
  }
  if (!bVar11) {
    FUN_016ee260(param_1,&local_80,8,0);
    puVar2 = (undefined1 *)*local_80;
    if ((*(byte *)(param_2 + 0x88) & 0x20) == 0) {
      cVar1 = puVar2[0x11];
      if (cVar1 == '\0') {
        lVar10 = FUN_0041f930();
        *(undefined8 *)(lVar10 + 0x280) = 0x4014000000000000;
      }
      else {
        lVar10 = FUN_0041f930();
        uVar12 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),cVar1,puVar2[0x10],0);
        *(undefined8 *)(lVar10 + 0x280) = uVar12;
      }
      FUN_00dd0a10(*puVar2,local_70,&local_78,0);
      (**(code **)(*(longlong *)(*(longlong *)(puVar2 + 0x18) + 8) + 0x10))
                (*(longlong *)(puVar2 + 0x18),param_1,param_2,param_3);
      (**(code **)(*(longlong *)(*(longlong *)(puVar2 + 0x240) + 8) + 0x10))
                (*(longlong *)(puVar2 + 0x240),param_1,param_2,param_3);
      (**(code **)(*(longlong *)(*(longlong *)(puVar2 + 0x468) + 8) + 0x10))
                (*(longlong *)(puVar2 + 0x468),param_1,param_2,param_3);
      (**(code **)(*(longlong *)(*(longlong *)(puVar2 + 0x690) + 8) + 0x10))
                (*(longlong *)(puVar2 + 0x690),param_1,param_2,param_3);
      (**(code **)(*(longlong *)(*(longlong *)(puVar2 + 0x8b8) + 8) + 0x10))
                (*(longlong *)(puVar2 + 0x8b8),param_1,param_2,param_3);
      uVar12 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                            *(undefined1 *)(*(longlong *)(puVar2 + 0x690) + 2),puVar2[0x10],0);
      uVar13 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                            *(undefined1 *)(*(longlong *)(puVar2 + 0x8b8) + 2),puVar2[0x10],0);
      uVar14 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                            *(undefined1 *)(*(longlong *)(puVar2 + 0x18) + 2),puVar2[0x10],0);
      uVar15 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                            *(undefined1 *)(*(longlong *)(puVar2 + 0x240) + 2),puVar2[0x10],0);
      FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                   *(undefined1 *)(*(longlong *)(puVar2 + 0x468) + 2),puVar2[0x10],0);
      FUN_00dd55c0(puVar2 + 0x143f0,param_1,param_2,param_3);
      uVar4 = FUN_00dd54e0(*(undefined8 *)(puVar2 + 0x14408),*(undefined8 *)(puVar2 + 0x14410),
                           *puVar2);
      FUN_016eebe0(param_1,param_2 + 0x1b8,1,*(short *)(puVar2 + 0x14a2e) + 1,0);
      uVar7 = FUN_0040c770();
      *(undefined4 *)(puVar2 + 0x14a28) = uVar7;
      FUN_016eebe0(param_1,param_2 + 0x1b8,1,*(short *)(puVar2 + 0x14a2e) + 2,0);
      uVar5 = FUN_0040c770();
      puVar2[0x14a2c] = uVar5;
      FUN_016eebe0(param_1,param_2 + 0x1b8,1,*(short *)(puVar2 + 0x14a2e) + 3,0);
      uVar5 = FUN_0040c770();
      puVar2[0x14a2d] = uVar5;
      uVar7 = FUN_00dd56d0(uVar12,*puVar2);
      uVar8 = FUN_00dd56d0(uVar13,*puVar2);
      uVar5 = FUN_00dd56d0(uVar14,*puVar2);
      uVar6 = FUN_00dd56d0(uVar15,*puVar2);
      iVar9 = FUN_014d9fa0(uVar4,puVar2[0x14a18],uVar7,uVar8,uVar5,uVar6,
                           *(undefined4 *)(puVar2 + 0x14a1c),*(undefined4 *)(puVar2 + 0x14a20),
                           *(undefined4 *)(puVar2 + 0x14a24),puVar2 + 0x14a28,puVar2 + 0x14a2c,
                           puVar2 + 0x14a2d);
      *(int *)(puVar2 + 0x14a28) = iVar9;
      FUN_016eeca0(param_1,param_2 + 0x1b8,0,*(short *)(puVar2 + 0x14a2e) + 1,(double)iVar9,0);
      FUN_016eeca0(param_1,param_2 + 0x1b8,0,*(short *)(puVar2 + 0x14a2e) + 2,
                   (double)(int)(char)puVar2[0x14a2c],0);
      FUN_016eeca0(param_1,param_2 + 0x1b8,0,*(short *)(puVar2 + 0x14a2e) + 3,
                   (double)(int)(char)puVar2[0x14a2d],0);
      puVar2[0x14419] = puVar2[0x14a2c];
      puVar2[0x1441b] = puVar2[0x14a2c];
      uVar12 = local_78;
      if (puVar2[0x14a2d] == '\x01') {
        uVar12 = local_70[0];
      }
      if (puVar2[0x14a2c] == '\x01') {
        local_78 = local_70[0];
      }
      uVar13 = (**(code **)(*(longlong *)(*(longlong *)(puVar2 + 0xae0) + 8) + 0x18))
                         (*(longlong *)(puVar2 + 0xae0),param_1,param_2,local_78,cVar3);
      uVar12 = (**(code **)(*(longlong *)(*(longlong *)(puVar2 + 0xa768) + 8) + 0x18))
                         (*(longlong *)(puVar2 + 0xa768),param_1,param_2,uVar12,cVar3);
      (**(code **)(*(longlong *)(*(longlong *)(puVar2 + 0x14428) + 8) + 0x10))
                (*(longlong *)(puVar2 + 0x14428),param_1,param_2,uVar13,0,cVar3,2,2);
      (**(code **)(*(longlong *)(*(longlong *)(puVar2 + 0x14720) + 8) + 0x10))
                (*(longlong *)(puVar2 + 0x14720),param_1,param_2,uVar12,0,cVar3,2,2);
    }
    else {
      FUN_016eeca0(param_1,param_2 + 0x1b8,0,*(short *)(puVar2 + 0x14a2e) + 1,
                   (double)*(int *)(puVar2 + 0x14a28),0);
      FUN_016eeca0(param_1,param_2 + 0x1b8,0,*(short *)(puVar2 + 0x14a2e) + 2,
                   (double)(int)(char)puVar2[0x14a2c],0);
      FUN_016eeca0(param_1,param_2 + 0x1b8,0,*(short *)(puVar2 + 0x14a2e) + 3,
                   (double)(int)(char)puVar2[0x14a2d],0);
    }
  }
  return;
}

