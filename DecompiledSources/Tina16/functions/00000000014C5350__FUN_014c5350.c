/* Ghidra address: 014c5350 */
/* Ghidra symbol: FUN_014c5350 */


void FUN_014c5350(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined8 in_RAX;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 local_40;
  double local_38;
  double local_30 [3];
  
  local_40 = 0;
  if ((byte)(param_4 - 8U) < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) goto LAB_014c58b7;
  if ((*(byte *)(param_3 + 0x88) & 0x20) != 0) {
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 2,0x4000000000000000,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 1,
                 (double)(int)*(char *)(param_1 + 0xf),0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,1,*(short *)(param_1 + 2) + 1,0x4000000000000000,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 3,
                 (double)*(byte *)(param_1 + 0xe),0);
    goto LAB_014c58b7;
  }
  if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
    if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 2,0x4000000000000000,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 3,
                   (double)*(byte *)(param_1 + 0xe),0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,1,*(short *)(param_1 + 2) + 1,0x4000000000000000,0);
    }
  }
  else {
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 2,0x4000000000000000,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 3,
                 (double)*(byte *)(param_1 + 0xe),0);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x11) = *(undefined1 *)(param_1 + 0xe);
  if (*(char *)(param_1 + 0x310) == '\0') {
    cVar1 = *(char *)(param_1 + 5);
    if (cVar1 == '\0') {
      lVar4 = FUN_0041f930();
      *(undefined8 *)(lVar4 + 0x280) = 0x4014000000000000;
    }
    else {
      lVar4 = FUN_0041f930();
      uVar6 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),cVar1,
                           *(undefined1 *)(param_1 + 6),0);
      *(undefined8 *)(lVar4 + 0x280) = uVar6;
    }
    FUN_00dd0a10(*(undefined1 *)(param_1 + 0xc),local_30,&local_38,0);
    dVar7 = (local_30[0] + local_38) * 0.49;
    FUN_016eebe0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 2) + 1,0);
    uVar3 = FUN_0040c770();
    *(undefined1 *)(param_1 + 0xf) = uVar3;
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(undefined1 *)(param_1 + 0xf) = 3;
    }
    bVar2 = *(byte *)(param_1 + 0xf);
    if (bVar2 < 6) {
      if (bVar2 == 5) {
        *(double *)(param_1 + 0x318) = dVar7;
      }
      else if (bVar2 < 3) {
        if (bVar2 == 2) {
          *(double *)(param_1 + 0x318) = dVar7;
        }
        else if (bVar2 == 0) {
LAB_014c57a2:
          *(double *)(param_1 + 0x318) = local_38;
        }
        else {
          if (bVar2 != 1) goto LAB_014c5837;
          *(double *)(param_1 + 0x318) = local_30[0];
        }
      }
      else if (bVar2 == 3) {
        *(double *)(param_1 + 0x318) = dVar7;
        *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x11) = 0;
      }
      else {
        if (bVar2 == 4) goto LAB_014c57a2;
LAB_014c5837:
        (**(code **)(**(longlong **)(param_2 + 0x128) + 0x288))
                  (*(longlong **)(param_2 + 0x128),&local_40);
        FUN_00416ad0(&local_40,L": invalid value on the internal DA");
        FUN_01b05000(local_40,0);
      }
    }
    else {
      if (bVar2 == 6) goto LAB_014c57a2;
      if (bVar2 == 7) {
        *(double *)(param_1 + 0x318) = dVar7;
        *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x11) = 0;
      }
      else if (bVar2 == 8) {
        *(double *)(param_1 + 0x318) = local_38;
      }
      else {
        if (bVar2 != 9) goto LAB_014c5837;
        *(double *)(param_1 + 0x318) = local_30[0];
      }
    }
  }
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x10))
            (*(longlong *)(param_1 + 0x18),param_2,param_3,*(undefined8 *)(param_1 + 0x318),0,
             param_4,2,2);
LAB_014c58b7:
  FUN_00414480(&local_40);
  return;
}

