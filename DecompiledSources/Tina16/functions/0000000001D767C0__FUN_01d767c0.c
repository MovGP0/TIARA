/* Ghidra address: 01d767c0 */
/* Ghidra symbol: FUN_01d767c0 */


void FUN_01d767c0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 in_RAX;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte bVar8;
  bool bVar9;
  undefined4 local_40;
  char local_3c;
  longlong *local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  bVar8 = (char)param_3 - 8;
  if (bVar8 < 8) {
    bVar9 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar8 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar9 = false;
  }
  if (!bVar9) {
    FUN_016ee260(param_1,&local_38,8,0);
    lVar6 = *local_38;
    lVar2 = FUN_0041f930();
    *(undefined8 *)(lVar2 + 0x280) = 0x4014000000000000;
    lVar2 = *(longlong *)(lVar6 + 0x10);
    (**(code **)(*(longlong *)(lVar2 + 8) + 0x10))(lVar2,param_1,param_2,param_3);
    FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                 *(undefined1 *)(*(longlong *)(lVar6 + 0x10) + 2),0,0);
    cVar1 = FUN_00dd56d0();
    uVar3 = FUN_016ebdc0(param_1);
    pcVar4 = (char *)FUN_01cfde70(uVar3,1,1,&local_29,&local_2a,&local_2b);
    if ((cVar1 == '\0') || (cVar1 == '\x01')) {
      *pcVar4 = cVar1;
    }
    else {
      *pcVar4 = '\0';
    }
    local_40 = 1;
    local_3c = *pcVar4;
    uVar3 = FUN_016ebdc0(param_1);
    FUN_01d04b50(uVar3,&local_40);
    plVar5 = (longlong *)FUN_016ebdc0(param_1);
    cVar1 = (**(code **)(*plVar5 + 0x2d8))(plVar5);
    if (cVar1 != '\0') {
      lVar6 = FUN_016ebdc0(param_1);
      uVar3 = FUN_019a45d0();
      uVar3 = FUN_0198d430(uVar3);
      (**(code **)(**(longlong **)(lVar6 + 0x198) + 0x68))(*(longlong **)(lVar6 + 0x198),uVar3);
    }
    uVar3 = FUN_016ebdc0(param_1);
    uVar7 = FUN_019a45d0();
    uVar7 = FUN_0198d430(uVar7);
    FUN_01d04aa0(uVar3,uVar7);
    FUN_016ed320(param_1,*(undefined1 *)(*local_38 + 1),0,*(undefined8 *)(param_2 + 0x430),0);
  }
  return;
}

