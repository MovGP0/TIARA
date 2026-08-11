/* Ghidra address: 01b0f2d0 */
/* Ghidra symbol: FUN_01b0f2d0 */


void FUN_01b0f2d0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_140;
  undefined1 local_138 [264];
  undefined8 local_30;
  
  local_140 = 0;
  local_30 = 0;
  iVar6 = *(int *)(param_2 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(param_2,iVar5);
      cVar1 = FUN_0198a580(plVar3);
      if (cVar1 == '\x04') {
        cVar1 = FUN_01d04d50(plVar3);
        if ((cVar1 != '\0') && (*(longlong *)(plVar3[0x35] + 8) != 0)) {
          FUN_01b0f2d0(param_1,*(undefined8 *)(plVar3[0x35] + 8));
        }
        uVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        cVar1 = FUN_01d42140(uVar2);
        if (cVar1 == '\0') {
          uVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
          cVar1 = FUN_01d421e0(uVar2);
          if (cVar1 == '\0') {
            uVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
            cVar1 = FUN_01d422d0(uVar2);
            if (cVar1 == '\0') goto LAB_01b0f445;
          }
        }
        lVar4 = FUN_01cfd6a0(plVar3);
        if (*(char *)(lVar4 + 0x2f) != '\0') {
          FUN_004169a0(&local_140,lVar4);
          FUN_00eec0f0(local_138,*(undefined8 *)(lVar4 + 0x30),local_140);
          FUN_004169a0(&local_30,local_138);
          FUN_00416910(local_138,local_30,0xff);
          FUN_00ee5d40(*(undefined8 *)(lVar4 + 0x30),
                       *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xa0) + 0x438),
                       local_138,0,plVar3,*(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x98));
        }
      }
LAB_01b0f445:
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414480(&local_140);
  FUN_00414480(&local_30);
  return;
}

