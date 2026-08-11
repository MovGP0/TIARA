/* Ghidra address: 01395d50 */
/* Ghidra symbol: FUN_01395d50 */


void FUN_01395d50(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  undefined8 *in_RAX;
  ulonglong uVar4;
  undefined8 uVar5;
  bool bVar6;
  ulonglong uVar7;
  
  if ((*(char *)(param_2 + 0x22f) != '\0') && (*(longlong *)(param_2 + 0x220) != 0)) {
    *(longlong *)(param_2 + 0x218) = *(longlong *)(param_2 + 0x220) + 0x5d8;
    *(undefined1 *)(param_2 + 0x217) = *(undefined1 *)(*(longlong *)(param_2 + 0x218) + 3);
    if (*(byte *)(param_2 + 0x217) < 8) {
      uVar3 = 1 << (*(byte *)(param_2 + 0x217) & 0x1f);
      in_RAX = (undefined8 *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),(uVar3 & 0xde) != 0);
    }
    else {
      in_RAX = (undefined8 *)0x0;
    }
    if ((char)in_RAX != '\0') {
      cVar2 = *(char *)(param_2 + 0x217);
      if (cVar2 == '\x01') {
        in_RAX = *(undefined8 **)(param_2 + 0x218);
        in_RAX[0x19] = *(undefined8 *)(param_2 + 0x208);
      }
      else if (cVar2 == '\x02') {
        *(undefined8 *)(param_2 + 0x200) = *(undefined8 *)(*(longlong *)(param_2 + 0x220) + 0xa0);
        if (*(int *)(*(longlong *)(*(longlong *)(param_2 + 0x200) + 0x470) + 0x10) < 2) {
          if (*(longlong *)(*(longlong *)(param_2 + 0x218) + 0x431) == 0) {
            FUN_004b5450(*(undefined8 *)(*(longlong *)(param_2 + 0x200) + 0x438),
                         *(undefined4 *)(param_2 + 0x1fc),*(undefined8 *)(param_2 + 0x1f0));
            FUN_01440040(*(undefined8 *)(*(longlong *)(param_2 + 0x220) + 0xa0),
                         *(undefined8 *)(*(longlong *)(param_2 + 0x220) + 0x1310),0);
            in_RAX = (undefined8 *)
                     FUN_019af810(*(undefined8 *)(*(longlong *)(param_2 + 0x220) + 0xa0),8);
          }
          else {
            in_RAX = *(undefined8 **)(*(longlong *)(param_2 + 0x220) + 0x13d0);
            *in_RAX = *(undefined8 *)(param_2 + 0x208);
          }
        }
        else {
          in_RAX = (undefined8 *)
                   FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x220) + 0x588));
        }
      }
      else {
        in_RAX = (undefined8 *)0x0;
        if ((byte)(cVar2 - 3U) < 2) {
          in_RAX = (undefined8 *)
                   FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x220) + 0x590));
        }
      }
    }
  }
  if (*(longlong *)(param_2 + 0x220) != 0) {
    in_RAX = (undefined8 *)FUN_013900d0(*(undefined8 *)(param_2 + 0x220));
  }
  if (*(byte *)(param_2 + 0x260) < 8) {
    uVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_2 + 0x260) & 0x1f);
    uVar4 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),(uVar3 & 0x2c) != 0);
  }
  else {
    uVar4 = 0;
  }
  if (((char)uVar4 != '\0') && (*(longlong *)(param_2 + 0x220) != 0)) {
    if (*(byte *)(param_2 + 0x260) < 8) {
      bVar6 = ((int)CONCAT71((int7)(uVar4 >> 8),1) << (*(byte *)(param_2 + 0x260) & 0x1f) & 0xcU) !=
              0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_2 + 0x220);
      *(code **)(param_2 + 0x88) = FUN_0138e170;
      FUN_00f834f0(param_2 + 0x88);
    }
    if (*(longlong *)(param_2 + 0x288) == 0) {
      FUN_00414480(param_2 + 0x1e8);
    }
    else {
      FUN_00441640(param_2 + 0x1e8,*(undefined8 *)(*(longlong *)(param_2 + 0x288) + 8));
    }
    uVar7 = *(ulonglong *)(param_2 + 0x278);
    uVar4 = FUN_012cf740(&DAT_012cd510,1,*(undefined8 *)(param_2 + 0x220),
                         *(undefined8 *)(param_2 + 0x268),*(undefined8 *)(param_2 + 0x270),uVar7,
                         *(undefined8 *)(param_2 + 0x1e8),0,0);
    *(ulonglong *)(param_2 + 0x1e0) = uVar4;
    if (*(longlong *)(param_2 + 0x1e0) != 0) {
      uVar5 = FUN_012d23d0(*(undefined8 *)(param_2 + 0x1e0),8);
      *(undefined8 *)(param_2 + 0x1d8) = uVar5;
      uVar1 = FUN_01b07dd0(*(undefined8 *)(param_2 + 0x220));
      *(undefined1 *)(*(longlong *)(param_2 + 0x1d8) + 0x38) = uVar1;
      if (*(char *)(*(longlong *)(param_2 + 0x220) + 0x49c) == '\x01') {
        if (*(char *)(param_2 + 0x1d7) == '\0') {
          FUN_012d5130(*(undefined8 *)(param_2 + 0x1e0),8,1,*(undefined8 *)(param_2 + 0x280));
        }
        *(undefined1 *)(param_2 + 0x1d6) = *(undefined1 *)(*(longlong *)(param_2 + 0x220) + 0x13da);
        if (*(char *)(param_2 + 0x1d6) == '\0') {
          *(undefined4 *)(param_2 + 0x1d0) = 4;
        }
        else {
          *(undefined4 *)(param_2 + 0x1d0) = 5;
        }
        FUN_012d2550(*(undefined8 *)(param_2 + 0x1e0),*(undefined1 *)(param_2 + 0x1d0),8,
                     *(undefined1 *)(*(longlong *)(param_2 + 0x220) + 0x12f1),0,
                     uVar7 & 0xffffffffffffff00);
      }
      else if (*(char *)(param_2 + 0x1d7) == '\0') {
        FUN_012d5130(*(undefined8 *)(param_2 + 0x1e0),8,0,*(undefined8 *)(param_2 + 0x280));
        FUN_012d5130(*(undefined8 *)(param_2 + 0x1e0),8,1,*(undefined8 *)(param_2 + 0x280));
        cVar2 = FUN_012d5820(*(undefined8 *)(param_2 + 0x1e0),8);
        if (cVar2 == '\0') {
          FUN_012d2550(*(undefined8 *)(param_2 + 0x1e0),0,8,
                       *(undefined1 *)(*(longlong *)(param_2 + 0x220) + 0x12f1),0,
                       uVar7 & 0xffffffffffffff00);
        }
        else {
          cVar2 = FUN_012d5850(*(undefined8 *)(param_2 + 0x1e0),8,
                               *(undefined1 *)(*(longlong *)(param_2 + 0x220) + 0x12f1),
                               *(undefined8 *)(param_2 + 0x280));
          if (cVar2 != '\0') {
            FUN_012d2550(*(undefined8 *)(param_2 + 0x1e0),1,8,
                         *(undefined1 *)(*(longlong *)(param_2 + 0x220) + 0x12f1),0,
                         uVar7 & 0xffffffffffffff00);
          }
        }
      }
      uVar4 = FUN_017cc920(*(undefined8 *)(param_2 + 0x220));
    }
  }
  if (*(byte *)(param_2 + 0x260) < 8) {
    bVar6 = ((int)CONCAT71((int7)(uVar4 >> 8),1) << (*(byte *)(param_2 + 0x260) & 0x1f) & 0x40U) !=
            0;
  }
  else {
    bVar6 = false;
  }
  if ((bVar6) && (*(longlong *)(param_2 + 0x220) != 0)) {
    *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_2 + 0x220);
    *(code **)(param_2 + 0x88) = FUN_0138e170;
    FUN_00f834f0(param_2 + 0x88);
    if (*(longlong *)(param_2 + 0x288) == 0) {
      FUN_00414480(param_2 + 0x1e8);
    }
    else {
      FUN_00441640(param_2 + 0x1e8,*(undefined8 *)(*(longlong *)(param_2 + 0x288) + 8));
    }
    uVar4 = *(ulonglong *)(param_2 + 0x278);
    uVar5 = FUN_01309b50(&DAT_01307998,1,*(undefined8 *)(param_2 + 0x220),
                         *(undefined8 *)(param_2 + 0x268),*(undefined8 *)(param_2 + 0x270),uVar4,
                         *(undefined8 *)(param_2 + 0x1e8),0,0);
    *(undefined8 *)(param_2 + 0x1c8) = uVar5;
    if (*(longlong *)(param_2 + 0x1c8) != 0) {
      uVar5 = FUN_0130e420(*(undefined8 *)(param_2 + 0x1c8),8);
      *(undefined8 *)(param_2 + 0x1c0) = uVar5;
      uVar1 = FUN_01b07dd0(*(undefined8 *)(param_2 + 0x220));
      *(undefined1 *)(*(longlong *)(param_2 + 0x1c0) + 0x38) = uVar1;
      if (*(char *)(*(longlong *)(param_2 + 0x220) + 0x49c) == '\x01') {
        if (*(char *)(param_2 + 0x1d7) == '\0') {
          FUN_013136a0(*(undefined8 *)(param_2 + 0x1c8),8,1,*(undefined8 *)(param_2 + 0x280));
        }
        *(undefined1 *)(param_2 + 0x1bf) = *(undefined1 *)(*(longlong *)(param_2 + 0x220) + 0x13da);
        if (*(char *)(param_2 + 0x1bf) == '\0') {
          *(undefined4 *)(param_2 + 0x1b8) = 4;
        }
        else {
          *(undefined4 *)(param_2 + 0x1b8) = 5;
        }
        FUN_0130ea10(*(undefined8 *)(param_2 + 0x1c8),*(undefined1 *)(param_2 + 0x1b8),8,
                     *(undefined1 *)(*(longlong *)(param_2 + 0x220) + 0x12f1),0,
                     uVar4 & 0xffffffffffffff00);
      }
      else if (*(char *)(param_2 + 0x1d7) == '\0') {
        FUN_013136a0(*(undefined8 *)(param_2 + 0x1c8),8,0,*(undefined8 *)(param_2 + 0x280));
        FUN_013136a0(*(undefined8 *)(param_2 + 0x1c8),8,1,*(undefined8 *)(param_2 + 0x280));
        cVar2 = FUN_01313d60(*(undefined8 *)(param_2 + 0x1c8),8,
                             *(undefined1 *)(*(longlong *)(param_2 + 0x220) + 0x12f1),
                             *(undefined8 *)(param_2 + 0x280));
        if (cVar2 != '\0') {
          FUN_0130ea10(*(undefined8 *)(param_2 + 0x1c8),1,8,
                       *(undefined1 *)(*(longlong *)(param_2 + 0x220) + 0x12f1),0,
                       uVar4 & 0xffffffffffffff00);
        }
      }
      FUN_017cc920(*(undefined8 *)(param_2 + 0x220));
    }
  }
  if (*(char *)(param_2 + 0x1d7) != '\0') {
    if (*(longlong *)(param_2 + 0x220) != 0) {
      FUN_017cc920(*(undefined8 *)(param_2 + 0x220));
    }
    *(undefined1 *)(param_2 + 0x1b7) = 1;
  }
  FUN_00f513f0(*(undefined8 *)(param_2 + 0x220),1);
  if (*PTR_DAT_020052b8 != '\0') {
    FUN_0132bb80(*(undefined8 *)PTR_DAT_02002da0,L" t =  0",0);
    FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02002da0 + 0x6f0),0);
    FUN_0132b070(*(undefined8 *)PTR_DAT_02002da0,0);
  }
  if (((*PTR_DAT_02002b78 != '\0') && (PTR_DAT_02004010[0x813] != '\x02')) &&
     (PTR_DAT_02004010[0x813] != '\x03')) {
    FUN_01c87d20(*(undefined8 *)PTR_DAT_02004e40);
    PTR_DAT_02004010[0x813] = 1;
  }
  return;
}

