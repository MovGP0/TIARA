/* Ghidra address: 01812960 */
/* Ghidra symbol: FUN_01812960 */


void FUN_01812960(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_30[0] = 0;
  puVar4 = (undefined8 *)
           FUN_00589390(*(undefined8 *)
                         **(undefined8 **)
                           (*(longlong *)(param_1 + 0xb0) + (longlong)*(int *)(param_1 + 0xac) * 8))
  ;
  uVar1 = *puVar4;
  plVar5 = (longlong *)
           FUN_0058ada0(*(undefined8 *)(param_1 + 0xf0),
                        *(undefined8 *)
                         (*(longlong *)(param_1 + 0xb0) + (longlong)*(int *)(param_1 + 0xac) * 8));
  cVar2 = FUN_00411580(uVar1,&PTR_FUN_00486f38);
  if ((cVar2 == '\0') || ((plVar5 != (longlong *)0x0 && ((*(byte *)(plVar5 + 0xb) & 4) != 0)))) {
    cVar2 = FUN_00411580(uVar1,&LAB_00474bd8);
    if (cVar2 != '\0') {
      if (*(longlong *)(param_1 + 0x100) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)
                 FUN_0058ada0(*(undefined8 *)(param_1 + 0x100),
                              *(undefined8 *)
                               (*(longlong *)(param_1 + 0xb0) +
                               (longlong)*(int *)(param_1 + 0xac) * 8));
      }
      cVar2 = FUN_004113d0(plVar5,&PTR_FUN_00476820);
      if (cVar2 == '\0') {
        cVar2 = FUN_004113d0(plVar5,&PTR_FUN_01805e80);
        if (cVar2 == '\0') {
          FUN_004169a0(&local_70,
                       *(longlong *)
                        (*(longlong *)(param_1 + 0xb0) + (longlong)*(int *)(param_1 + 0xac) * 8) +
                       0x2a);
          FUN_00416cd0(&local_68,3,*(undefined8 *)(param_1 + 0xf8),local_70,&LAB_01812e58);
          FUN_01813180(*(undefined8 *)(param_1 + 0xe0),&local_60,plVar5,local_68,plVar7);
          FUN_00414b50(param_1 + 0xb8,local_60);
        }
      }
      else {
        if ((*(longlong *)(param_1 + 0x100) != 0) &&
           (*(char *)(*(longlong *)(param_1 + 0xe0) + 0x79) == '\0')) {
          (**(code **)(*plVar5 + 0x38))(plVar5,&local_38);
          (**(code **)(*plVar7 + 0x38))(plVar7,&local_40);
          iVar3 = FUN_00416db0(local_38,local_40);
          if (iVar3 == 0) goto LAB_01812db7;
        }
        (**(code **)(*plVar5 + 0x38))(plVar5,&local_48);
        FUN_00414b50(param_1 + 0xb8,local_48);
        iVar3 = FUN_00414cb0(*(undefined8 *)(param_1 + 0xb8));
        if (1 < iVar3) {
          iVar3 = FUN_00414cb0(*(undefined8 *)(param_1 + 0xb8));
          if (*(short *)(*(longlong *)(param_1 + 0xb8) + -2 + (longlong)(iVar3 + -1) * 2) == 0xd) {
            iVar3 = FUN_00414cb0(*(undefined8 *)(param_1 + 0xb8));
            if (*(short *)(*(longlong *)(param_1 + 0xb8) + -2 + (longlong)iVar3 * 2) == 10) {
              iVar3 = FUN_00414cb0(*(undefined8 *)(param_1 + 0xb8));
              FUN_00416e20(param_1 + 0xb8,iVar3 + -1,2);
            }
          }
        }
        FUN_004169a0(&local_50,
                     *(longlong *)
                      (*(longlong *)(param_1 + 0xb0) + (longlong)*(int *)(param_1 + 0xac) * 8) +
                     0x2a);
        FUN_01802f80(&local_58,*(undefined8 *)(param_1 + 0xb8));
        FUN_00416cd0(param_1 + 0xb8,6,&DAT_01812e1c,*(undefined8 *)(param_1 + 0xf8),local_50,
                     L".Text=\"",local_58,&DAT_01812e48);
      }
      *(undefined1 *)(param_1 + 0xab) = 1;
    }
    goto LAB_01812db7;
  }
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_0058ada0(*(undefined8 *)(param_1 + 0x100),
                         *(undefined8 *)
                          (*(longlong *)(param_1 + 0xb0) + (longlong)*(int *)(param_1 + 0xac) * 8));
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    if ((plVar5 == (longlong *)0x0) && (lVar6 == 0)) goto LAB_01812db7;
    if ((plVar5 != (longlong *)0x0) && (lVar6 != 0)) {
      iVar3 = FUN_0043e420(plVar5[2],*(undefined8 *)(lVar6 + 0x10));
      if (iVar3 == 0) goto LAB_01812db7;
    }
    if ((plVar5 == (longlong *)0x0) && (lVar6 != 0)) {
      FUN_00414b50(param_1 + 0xb8,&DAT_01812e08);
      goto LAB_01812db7;
    }
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_0180d440(local_30,*(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x18),plVar5);
    FUN_00414b50(param_1 + 0xb8,local_30[0]);
  }
LAB_01812db7:
  FUN_00414560(&local_70,9);
  return;
}

