/* Ghidra address: 01326ef0 */
/* Ghidra symbol: FUN_01326ef0 */


void FUN_01326ef0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  longlong in_RAX;
  ulonglong uVar4;
  undefined8 uVar5;
  bool bVar6;
  ulonglong uVar7;
  
  if ((*(char *)(param_2 + 0x2ef) != '\0') &&
     (in_RAX = FUN_0165dc50(*(undefined8 *)(*(longlong *)(param_2 + 0x2e0) + 0x110)),
     *(longlong *)(param_2 + 0x2e0) != 0)) {
    if (*(longlong *)(*(longlong *)(param_2 + 0x2e0) + 0x13a0) == 0) {
      **(undefined8 **)(*(longlong *)(param_2 + 0x2e0) + 5000) = *(undefined8 *)(param_2 + 0x2c8);
    }
    else {
      FUN_004b5450(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x2e0) + 0xa0) + 0x438),
                   *(undefined4 *)(param_2 + 0x2dc),*(undefined8 *)(param_2 + 0x2d0));
    }
    if (*(char *)(*(longlong *)(param_2 + 0x2e0) + 0xdb7) != '\0') {
      if (*(longlong *)(*(longlong *)(param_2 + 0x2e0) + 0x13a8) == 0) {
        FUN_01d3a010(*(undefined8 *)(*(longlong *)(param_2 + 0x2e0) + 0x1398),3,
                     *(undefined8 *)(param_2 + 0x2b0));
      }
      else {
        FUN_004b5450(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x2e0) + 0xa0) + 0x438),
                     *(undefined4 *)(param_2 + 0x2c4),*(undefined8 *)(param_2 + 0x2b8));
      }
    }
    *(longlong *)(param_2 + 0x2a8) = *(longlong *)(param_2 + 0x2e0) + 0x5d8;
    *(undefined1 *)(param_2 + 0x2a7) = *(undefined1 *)(*(longlong *)(param_2 + 0x2a8) + 3);
    if (*(byte *)(param_2 + 0x2a7) < 8 && (1 << (*(byte *)(param_2 + 0x2a7) & 0x1f) & 0xdeU) != 0) {
      cVar2 = *(char *)(param_2 + 0x2a7);
      if (cVar2 == '\x01') {
        *(undefined8 *)(*(longlong *)(param_2 + 0x2a8) + 200) = *(undefined8 *)(param_2 + 0x298);
      }
      else if (cVar2 == '\x02') {
        *(undefined8 *)(param_2 + 0x290) = *(undefined8 *)(*(longlong *)(param_2 + 0x2e0) + 0xa0);
        if (*(int *)(*(longlong *)(*(longlong *)(param_2 + 0x290) + 0x470) + 0x10) < 2) {
          if (*(longlong *)(*(longlong *)(param_2 + 0x2a8) + 0x431) == 0) {
            FUN_004b5450(*(undefined8 *)(*(longlong *)(param_2 + 0x290) + 0x438),
                         *(undefined4 *)(param_2 + 0x28c),*(undefined8 *)(param_2 + 0x280));
          }
          else {
            **(undefined8 **)(*(longlong *)(param_2 + 0x2e0) + 0x1390) =
                 *(undefined8 *)(param_2 + 0x298);
          }
        }
        else {
          FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x2e0) + 0x588));
        }
      }
      else if ((byte)(cVar2 - 3U) < 2) {
        FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x2e0) + 0x590));
      }
    }
    in_RAX = *(longlong *)(param_2 + 0x2e0);
    if (*(char *)(in_RAX + 0x13b9) != '\0') {
      FUN_01440040(*(undefined8 *)(*(longlong *)(param_2 + 0x2e0) + 0xa0),
                   *(undefined8 *)(*(longlong *)(param_2 + 0x2e0) + 0x1310),0);
      in_RAX = FUN_019af810(*(undefined8 *)(*(longlong *)(param_2 + 0x2e0) + 0xa0),1);
    }
  }
  if (*(byte *)(param_2 + 800) < 8) {
    uVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_2 + 800) & 0x1f);
    uVar4 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),(uVar3 & 0x2c) != 0);
  }
  else {
    uVar4 = 0;
  }
  if (((char)uVar4 != '\0') && (*(longlong *)(param_2 + 0x2e0) != 0)) {
    if (*(byte *)(param_2 + 800) < 8) {
      bVar6 = ((int)CONCAT71((int7)(uVar4 >> 8),1) << (*(byte *)(param_2 + 800) & 0x1f) & 0xcU) != 0
      ;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      *(undefined8 *)(param_2 + 0x150) = *(undefined8 *)(param_2 + 0x2e0);
      *(code **)(param_2 + 0x148) = FUN_0131ddf0;
      FUN_00f834f0(param_2 + 0x148);
    }
    if (*(longlong *)(param_2 + 0x348) == 0) {
      FUN_00414480(param_2 + 0x278);
    }
    else {
      FUN_00441640(param_2 + 0x278,*(undefined8 *)(*(longlong *)(param_2 + 0x348) + 8));
    }
    uVar7 = *(ulonglong *)(param_2 + 0x338);
    uVar4 = FUN_012cf740(&DAT_012cd510,1,*(undefined8 *)(param_2 + 0x2e0),
                         *(undefined8 *)(param_2 + 0x328),*(undefined8 *)(param_2 + 0x330),uVar7,
                         *(undefined8 *)(param_2 + 0x278),0,0);
    *(ulonglong *)(param_2 + 0x270) = uVar4;
    if (*(longlong *)(param_2 + 0x270) != 0) {
      uVar5 = FUN_012d23d0(*(undefined8 *)(param_2 + 0x270),1);
      *(undefined8 *)(param_2 + 0x268) = uVar5;
      uVar1 = FUN_01b07dd0(*(undefined8 *)(param_2 + 0x2e0));
      *(undefined1 *)(*(longlong *)(param_2 + 0x268) + 0x38) = uVar1;
      if (*(char *)(*(longlong *)(param_2 + 0x2e0) + 0x49c) == '\x01') {
        if (*(char *)(param_2 + 0x267) == '\0') {
          FUN_012d5130(*(undefined8 *)(param_2 + 0x270),1,1,*(undefined8 *)(param_2 + 0x340));
        }
        *(undefined1 *)(param_2 + 0x266) = *(undefined1 *)(*(longlong *)(param_2 + 0x2e0) + 0x13b8);
        if (*(char *)(param_2 + 0x266) == '\0') {
          *(undefined4 *)(param_2 + 0x260) = 4;
        }
        else {
          *(undefined4 *)(param_2 + 0x260) = 5;
        }
        FUN_012d2550(*(undefined8 *)(param_2 + 0x270),*(undefined1 *)(param_2 + 0x260),1,
                     *(undefined1 *)(*(longlong *)(param_2 + 0x2e0) + 0x12f1),0,
                     uVar7 & 0xffffffffffffff00);
      }
      else if (*(char *)(param_2 + 0x267) == '\0') {
        FUN_012d5130(*(undefined8 *)(param_2 + 0x270),1,0,*(undefined8 *)(param_2 + 0x340));
        FUN_012d5130(*(undefined8 *)(param_2 + 0x270),1,1,*(undefined8 *)(param_2 + 0x340));
        cVar2 = FUN_012d5820(*(undefined8 *)(param_2 + 0x270),1);
        if (cVar2 == '\0') {
          FUN_012d2550(*(undefined8 *)(param_2 + 0x270),0,1,
                       *(undefined1 *)(*(longlong *)(param_2 + 0x2e0) + 0x12f1),0,
                       uVar7 & 0xffffffffffffff00);
        }
        else {
          cVar2 = FUN_012d5850(*(undefined8 *)(param_2 + 0x270),1,
                               *(undefined1 *)(*(longlong *)(param_2 + 0x2e0) + 0x12f1),
                               *(undefined8 *)(param_2 + 0x340));
          if (cVar2 != '\0') {
            FUN_012d2550(*(undefined8 *)(param_2 + 0x270),1,1,
                         *(undefined1 *)(*(longlong *)(param_2 + 0x2e0) + 0x12f1),0,
                         uVar7 & 0xffffffffffffff00);
          }
        }
      }
      uVar4 = FUN_017cc920(*(undefined8 *)(param_2 + 0x2e0));
    }
  }
  if (*(byte *)(param_2 + 800) < 8) {
    uVar3 = (int)CONCAT71((int7)(uVar4 >> 8),1) << (*(byte *)(param_2 + 800) & 0x1f);
    bVar6 = (uVar3 & 0x40) != 0;
    uVar4 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar6);
  }
  else {
    uVar4 = 0;
    bVar6 = false;
  }
  if ((bVar6) && (*(longlong *)(param_2 + 0x2e0) != 0)) {
    if (*(byte *)(param_2 + 800) < 8) {
      bVar6 = ((int)CONCAT71((int7)(uVar4 >> 8),1) << (*(byte *)(param_2 + 800) & 0x1f) & 0x40U) !=
              0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      *(undefined8 *)(param_2 + 0x150) = *(undefined8 *)(param_2 + 0x2e0);
      *(code **)(param_2 + 0x148) = FUN_0131ddf0;
      FUN_00f834f0(param_2 + 0x148);
    }
    if (*(longlong *)(param_2 + 0x348) == 0) {
      FUN_00414480(param_2 + 0x278);
    }
    else {
      FUN_00441640(param_2 + 0x278,*(undefined8 *)(*(longlong *)(param_2 + 0x348) + 8));
    }
    uVar4 = *(ulonglong *)(param_2 + 0x338);
    uVar5 = FUN_01309b50(&DAT_01307998,1,*(undefined8 *)(param_2 + 0x2e0),
                         *(undefined8 *)(param_2 + 0x328),*(undefined8 *)(param_2 + 0x330),uVar4,
                         *(undefined8 *)(param_2 + 0x278),0,0);
    *(undefined8 *)(param_2 + 600) = uVar5;
    if (*(longlong *)(param_2 + 600) != 0) {
      uVar5 = FUN_0130e420(*(undefined8 *)(param_2 + 600),1);
      *(undefined8 *)(param_2 + 0x250) = uVar5;
      uVar1 = FUN_01b07dd0(*(undefined8 *)(param_2 + 0x2e0));
      *(undefined1 *)(*(longlong *)(param_2 + 0x250) + 0x38) = uVar1;
      FUN_0130dae0(*(undefined8 *)(param_2 + 600),1);
      if (*(char *)(*(longlong *)(param_2 + 0x2e0) + 0x49c) == '\x01') {
        if (*(char *)(param_2 + 0x267) == '\0') {
          FUN_013136a0(*(undefined8 *)(param_2 + 600),1,1,*(undefined8 *)(param_2 + 0x340));
        }
        *(undefined1 *)(param_2 + 0x24f) = *(undefined1 *)(*(longlong *)(param_2 + 0x2e0) + 0x13b8);
        if (*(char *)(param_2 + 0x24f) == '\0') {
          *(undefined4 *)(param_2 + 0x248) = 4;
        }
        else {
          *(undefined4 *)(param_2 + 0x248) = 5;
        }
        FUN_0130ea10(*(undefined8 *)(param_2 + 600),*(undefined1 *)(param_2 + 0x248),1,
                     *(undefined1 *)(*(longlong *)(param_2 + 0x2e0) + 0x12f1),0,
                     uVar4 & 0xffffffffffffff00);
      }
      else if (*(char *)(param_2 + 0x267) == '\0') {
        FUN_013136a0(*(undefined8 *)(param_2 + 600),1,0,*(undefined8 *)(param_2 + 0x340));
        FUN_013136a0(*(undefined8 *)(param_2 + 600),1,1,*(undefined8 *)(param_2 + 0x340));
        cVar2 = FUN_01313d60(*(undefined8 *)(param_2 + 600),1,
                             *(undefined1 *)(*(longlong *)(param_2 + 0x2e0) + 0x12f1),
                             *(undefined8 *)(param_2 + 0x340));
        if (cVar2 != '\0') {
          FUN_0130ea10(*(undefined8 *)(param_2 + 600),1,1,
                       *(undefined1 *)(*(longlong *)(param_2 + 0x2e0) + 0x12f1),0,
                       uVar4 & 0xffffffffffffff00);
        }
      }
      FUN_017cc920(*(undefined8 *)(param_2 + 0x2e0));
    }
  }
  if (*(char *)(param_2 + 0x267) != '\0') {
    if (*(longlong *)(param_2 + 0x2e0) != 0) {
      FUN_017cc920(*(undefined8 *)(param_2 + 0x2e0));
      FUN_00414ad0(*(longlong *)(param_2 + 0x2e0) + 0x12e0,L"Exception Happened");
    }
    *(undefined1 *)(param_2 + 0x247) = 1;
  }
  FUN_00f51380(*(undefined8 *)(param_2 + 0x2e0),1);
  return;
}

