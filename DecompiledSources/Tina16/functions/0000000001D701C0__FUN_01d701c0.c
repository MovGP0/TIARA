/* Ghidra address: 01d701c0 */
/* Ghidra symbol: FUN_01d701c0 */


void FUN_01d701c0(undefined8 param_1,longlong param_2,char param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  short sVar4;
  undefined8 in_RAX;
  longlong lVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50 [5];
  
  if ((byte)(param_3 - 8U) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_3 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar6 = false;
  }
  if ((!bVar6) && ((*(byte *)(param_2 + 0x88) & 0x20) == 0)) {
    FUN_016ee260(param_1,&local_60,8,0);
    puVar1 = (undefined1 *)*local_60;
    cVar3 = puVar1[0x12];
    if (cVar3 == '\0') {
      lVar5 = FUN_0041f930();
      *(undefined8 *)(lVar5 + 0x280) = 0x4014000000000000;
    }
    else {
      lVar5 = FUN_0041f930();
      uVar7 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),cVar3,puVar1[0x10],0);
      *(undefined8 *)(lVar5 + 0x280) = uVar7;
    }
    FUN_00dd0a10(*puVar1,local_50,&local_58,0);
    (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0x468) + 8) + 0x10))
              (*(longlong *)(puVar1 + 0x468),param_1,param_2,param_3);
    (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0x690) + 8) + 0x10))
              (*(longlong *)(puVar1 + 0x690),param_1,param_2,param_3);
    uVar7 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                         *(undefined1 *)(*(longlong *)(puVar1 + 0x468) + 2),puVar1[0x10],0);
    uVar8 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                         *(undefined1 *)(*(longlong *)(puVar1 + 0x690) + 2),puVar1[0x10],0);
    FUN_00dd55c0(puVar1 + 0x8b8,param_1,param_2,param_3);
    uVar7 = FUN_01d70120(uVar7,uVar8,puVar1[0x8e2],puVar1);
    uVar2 = FUN_00dd56d0(uVar7,*puVar1);
    puVar1[0x8e1] = uVar2;
    puVar1[0x8e3] = uVar2;
    sVar4 = FUN_016ebd90(param_1);
    if (sVar4 == 0x44f) {
      uVar7 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                           *(undefined1 *)(*(longlong *)(puVar1 + 0x18) + 2),puVar1[0x10],0);
      uVar8 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                           *(undefined1 *)(*(longlong *)(puVar1 + 0x240) + 2),puVar1[0x10],0);
      cVar3 = FUN_00dd56d0(uVar7,*puVar1);
      if (cVar3 == '\0') {
        puVar1[0x8e1] = 1;
        puVar1[0x8e3] = 1;
      }
      cVar3 = FUN_00dd56d0(uVar8,*puVar1);
      if (cVar3 == '\0') {
        puVar1[0x8e1] = 0;
        puVar1[0x8e3] = 0;
      }
    }
    if (puVar1[0x8e3] == '\x01') {
      local_58 = local_50[0];
    }
    uVar7 = (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0x8f0) + 8) + 0x18))
                      (*(longlong *)(puVar1 + 0x8f0),param_1,param_2,local_58,param_3);
    (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 0xa578) + 8) + 0x10))
              (*(longlong *)(puVar1 + 0xa578),param_1,param_2,uVar7,0,param_3,2,2);
  }
  return;
}

