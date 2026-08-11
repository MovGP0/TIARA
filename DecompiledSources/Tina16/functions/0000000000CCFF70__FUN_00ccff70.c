/* Ghidra address: 00ccff70 */
/* Ghidra symbol: FUN_00ccff70 */


void FUN_00ccff70(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  FUN_00ccff40(param_1);
  if (*(char *)(param_1 + 10) == '\0') {
    if (param_2 == '\x01') {
      *(undefined1 *)(param_1 + 10) = 2;
    }
    else {
      *(undefined1 *)(param_1 + 10) = 1;
    }
  }
  uVar3 = FUN_00cd0500(param_1);
  lVar4 = (**(code **)PTR_DAT_02004b68)(uVar3);
  *(longlong *)(param_1 + 0x48) = lVar4;
  if (lVar4 == 0) {
    FUN_0041ddd0(local_20,PTR_PTR_02005098);
    FUN_00c99220(&PTR_FUN_00cca8e0,local_20[0]);
  }
  cVar1 = FUN_00c98560();
  if (cVar1 != '\0') {
    if ((*(byte *)(param_1 + 9) & 1) == 0) {
      FUN_00ca5490(*(undefined8 *)(param_1 + 0x48),0x1000000);
    }
    else if (*(char *)(param_1 + 8) == '\x01') {
      FUN_00ca54b0(*(undefined8 *)(param_1 + 0x48),0x1000000);
    }
  }
  cVar1 = FUN_00c98590();
  if (cVar1 != '\0') {
    if ((*(byte *)(param_1 + 9) & 4) == 0) {
      FUN_00ca5490(*(undefined8 *)(param_1 + 0x48),0x2000000);
    }
    else if (*(char *)(param_1 + 8) == '\x01') {
      FUN_00ca54b0(*(undefined8 *)(param_1 + 0x48),0x2000000);
    }
  }
  if ((*(byte *)(param_1 + 9) & 8) == 0) {
    FUN_00ca5490(*(undefined8 *)(param_1 + 0x48),0x4000000);
  }
  else if (*(char *)(param_1 + 8) == '\x01') {
    FUN_00ca54b0(*(undefined8 *)(param_1 + 0x48),0x4000000);
  }
  cVar1 = FUN_00c985c0();
  if (cVar1 != '\0') {
    if ((*(byte *)(param_1 + 9) & 0x10) == 0) {
      FUN_00ca5490(*(undefined8 *)(param_1 + 0x48),0x10000000);
    }
    else if (*(char *)(param_1 + 8) == '\x01') {
      FUN_00ca54b0(*(undefined8 *)(param_1 + 0x48),0x10000000);
    }
  }
  cVar1 = FUN_00c985f0();
  if (cVar1 != '\0') {
    if ((*(byte *)(param_1 + 9) & 0x20) == 0) {
      FUN_00ca5490(*(undefined8 *)(param_1 + 0x48),0x8000000);
    }
    else if (*(char *)(param_1 + 8) == '\x01') {
      FUN_00ca54b0(*(undefined8 *)(param_1 + 0x48),0x8000000);
    }
  }
  FUN_00ca54d0(*(undefined8 *)(param_1 + 0x48),4);
  (**(code **)PTR_DAT_02001a60)(*(undefined8 *)(param_1 + 0x48),FUN_00ccb520);
  (**(code **)PTR_DAT_02002e90)(*(undefined8 *)(param_1 + 0x48),param_1);
  (**(code **)PTR_DAT_02001160)(*(undefined8 *)(param_1 + 0x48));
  if ((*(longlong *)(param_1 + 0x10) != 0) || (*(longlong *)(param_1 + 0x38) != 0)) {
    cVar1 = FUN_00cd0b80(param_1);
    if (cVar1 == '\0') {
      FUN_0041ddd0(&local_28,PTR_PTR_020017c8);
      FUN_00c99220(&PTR_FUN_00ccaa38,local_28);
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    cVar1 = FUN_00cd0bb0(param_1);
    if (cVar1 == '\0') {
      FUN_0041ddd0(&local_30,PTR_PTR_020027c8);
      FUN_00c99220(&PTR_FUN_00ccab90,local_30);
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    cVar1 = FUN_00cd0ce0(param_1);
    if (cVar1 == '\0') {
      FUN_0041ddd0(&local_38,PTR_PTR_02004240);
      FUN_00c99220(&PTR_FUN_00ccacd8,local_38);
    }
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    cVar1 = FUN_00cd0e00(param_1);
    if (cVar1 == '\0') {
      FUN_0041ddd0(&local_40,PTR_PTR_02003f30);
      FUN_00c99220(&PTR_FUN_00ccae20,local_40);
    }
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    FUN_00ca5480(*(undefined8 *)(param_1 + 0x48),FUN_00ccb7e0);
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    iVar2 = (**(code **)PTR_DAT_02001bc8)
                      (*(undefined8 *)(param_1 + 0x48),"AES:ALL:!aNULL:!eNULL:+RC4:@STRENGTH");
  }
  else {
    FUN_00415dd0(&local_48,*(undefined8 *)(param_1 + 0x40),0);
    uVar3 = FUN_00415ab0(local_48);
    iVar2 = (**(code **)PTR_DAT_02001bc8)(*(undefined8 *)(param_1 + 0x48),uVar3);
  }
  if (iVar2 < 1) {
    FUN_0041ddd0(&local_50,PTR_PTR_02002940);
    uVar3 = FUN_0086dfd0(&PTR_FUN_00ccaf78,1,local_50);
    FUN_004134c0(uVar3);
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    FUN_00cd0470(param_1,*(undefined1 *)(param_1 + 0x34),*(undefined1 *)(param_1 + 0x51));
  }
  if (param_2 == '\x01') {
    (**(code **)PTR_DAT_02005058)(*(undefined8 *)(param_1 + 0x48),param_1 + 0x54,4);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar3 = FUN_00cccb50(*(undefined8 *)(param_1 + 0x10));
    (**(code **)PTR_DAT_020051a0)(*(undefined8 *)(param_1 + 0x48),uVar3);
  }
  FUN_00414480(&local_50);
  FUN_004144d0(&local_48);
  FUN_00414560(&local_40,5);
  return;
}

