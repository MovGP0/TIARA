/* Ghidra address: 0134c990 */
/* Ghidra symbol: FUN_0134c990 */


void FUN_0134c990(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  bool bVar7;
  ulonglong uVar8;
  
  if (*(longlong *)(param_2 + 0x308) != 0) {
    if (*(char *)(param_2 + 0x338) != '\x03') {
      FUN_017cc960(*(undefined8 *)(*(longlong *)(param_2 + 0x308) + 0xb0),
                   *(undefined8 *)(*(longlong *)(param_2 + 0x308) + 0xb8));
    }
    if ((*PTR_DAT_02002b78 == '\0') && (*(char *)(*(longlong *)(param_2 + 0x308) + 0xf18) != '\0'))
    {
      if (*(byte *)(param_2 + 0x350) < 8) {
        bVar7 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x308) >> 8),1) <<
                 (*(byte *)(param_2 + 0x350) & 0x1f) & 3U) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)PTR_DAT_02004e40;
        *(code **)(param_2 + 0xb8) = FUN_01c88f60;
        FUN_00f83590(param_2 + 0xb8);
        FUN_01c88f60(*(undefined8 *)PTR_DAT_02004e40,*(undefined8 *)(param_2 + 0x308));
      }
    }
  }
  if (*PTR_DAT_020052a0 == '\0') {
    if ((*(char *)(param_2 + 0x307) != '\0') && (*(longlong *)(param_2 + 0x308) != 0)) {
      *(longlong *)(param_2 + 0x2f8) = *(longlong *)(param_2 + 0x308) + 0x5d8;
      *(undefined1 *)(param_2 + 0x2f7) = *(undefined1 *)(*(longlong *)(param_2 + 0x2f8) + 3);
      if (*(byte *)(param_2 + 0x2f7) < 8 && (1 << (*(byte *)(param_2 + 0x2f7) & 0x1f) & 0x9eU) != 0)
      {
        cVar2 = *(char *)(param_2 + 0x2f7);
        if (cVar2 == '\x01') {
          *(undefined8 *)(*(longlong *)(param_2 + 0x2f8) + 200) = *(undefined8 *)(param_2 + 0x2e8);
        }
        else if (cVar2 == '\x02') {
          *(undefined8 *)(param_2 + 0x2e0) = *(undefined8 *)(*(longlong *)(param_2 + 0x308) + 0xa0);
          if (*(int *)(*(longlong *)(*(longlong *)(param_2 + 0x2e0) + 0x470) + 0x10) < 2) {
            if (*(longlong *)(*(longlong *)(param_2 + 0x2f8) + 0x431) == 0) {
              FUN_004b5450(*(undefined8 *)(*(longlong *)(param_2 + 0x2e0) + 0x438),
                           *(undefined4 *)(param_2 + 0x2dc),*(undefined8 *)(param_2 + 0x2d0));
              FUN_01440040(*(undefined8 *)(*(longlong *)(param_2 + 0x308) + 0xa0),
                           *(undefined8 *)(*(longlong *)(param_2 + 0x308) + 0x1310),0);
              FUN_019af810(*(undefined8 *)(*(longlong *)(param_2 + 0x308) + 0xa0),6);
            }
            else {
              **(undefined8 **)(*(longlong *)(param_2 + 0x308) + 0x1390) =
                   *(undefined8 *)(param_2 + 0x2e8);
            }
          }
          else {
            FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x308) + 0x588));
          }
          *(undefined8 *)(param_2 + 0x2c8) = *(undefined8 *)(*(longlong *)(param_2 + 0x308) + 0xd0);
          if (*(longlong *)(param_2 + 0x2c8) != 0) {
            FUN_01cc0070(*(undefined8 *)(*(longlong *)(param_2 + 0x2c8) + 0x10),
                         *(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_2 + 0x308) + 0xb0) + 0x10));
          }
        }
        else if ((byte)(cVar2 - 3U) < 2) {
          FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x308) + 0x590));
          *(undefined8 *)(param_2 + 0x2c0) = *(undefined8 *)(*(longlong *)(param_2 + 0x308) + 0xd0);
          if (*(longlong *)(param_2 + 0x2c0) != 0) {
            FUN_01cc0070(*(undefined8 *)(*(longlong *)(param_2 + 0x2c0) + 0x10),
                         *(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_2 + 0x308) + 0xb0) + 0x10));
          }
        }
      }
    }
    if ((*(char *)(param_2 + 0x2bf) != '\0') && (*(char *)(param_2 + 0x350) == '\0')) {
      FUN_0129db70(*(undefined1 *)(param_2 + 0x330),*(undefined1 *)(param_2 + 0x338),
                   PTR_DAT_02004010,param_2 + 0x278);
    }
    if ((*(longlong *)(param_2 + 0x308) != 0) &&
       (*(char *)(*(longlong *)(param_2 + 0x308) + 0x1520) == '\x03')) {
      FUN_0129d760(*(longlong *)(param_2 + 0x308) + 0x14f5,*(longlong *)(param_2 + 0x308) + 0x1518);
    }
    if ((*(longlong *)(param_2 + 0x308) != 0) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x308) + 0xf10) + 8) != 0)) {
      FUN_01af23d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x308) + 0xf10) + 8),0);
    }
    FUN_016d7a10(*(undefined8 *)(param_2 + 0x308));
    uVar4 = FUN_017d3200(*(undefined8 *)(param_2 + 0x308));
    if (*(byte *)(param_2 + 0x350) < 8) {
      bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (*(byte *)(param_2 + 0x350) & 0x1f)
              & 0x38U) != 0;
    }
    else {
      bVar7 = false;
    }
    if (!bVar7) {
      FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,*(undefined2 *)(param_2 + 0x276));
    }
    if ((*(char *)(param_2 + 0x330) == '\x01') && (*(longlong *)(param_2 + 0x308) != 0)) {
      FUN_013490c0(*(undefined8 *)(*(longlong *)(param_2 + 0x308) + 0xb0));
    }
    if (((*(longlong *)(param_2 + 0x308) != 0) &&
        (*(longlong *)(*(longlong *)(param_2 + 0x308) + 0x1410) != 0)) &&
       (*(char *)(*(longlong *)(param_2 + 0x308) + 0x49c) != '\x01')) {
      *(undefined1 *)(param_2 + 0x275) =
           *(undefined1 *)(*(longlong *)(*(longlong *)(param_2 + 0x308) + 0x1410) + 0x24);
    }
    if (((*(longlong *)(param_2 + 0x308) != 0) && (*(char *)(param_2 + 0x338) == '\x03')) &&
       (*(char *)(*(longlong *)(param_2 + 0x308) + 0xed2) == '\0')) {
      FUN_017cc920(*(undefined8 *)(param_2 + 0x308));
    }
    puVar5 = PTR_DAT_02004010;
    if (PTR_DAT_02004010[0x813] == '\x03') {
      puVar5 = (undefined *)FUN_01c87d20(*(undefined8 *)PTR_DAT_02004e40);
    }
    if (*(byte *)(param_2 + 0x350) < 8) {
      uVar3 = (int)CONCAT71((int7)((ulonglong)puVar5 >> 8),1) << (*(byte *)(param_2 + 0x350) & 0x1f)
      ;
      uVar6 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),(uVar3 & 3) != 0);
    }
    else {
      uVar6 = 0;
    }
    if ((char)uVar6 != '\0') {
      if (*(longlong *)(param_2 + 0x308) != 0) {
        FUN_019af4b0(*(undefined8 *)(*(longlong *)(param_2 + 0x308) + 0xa0));
      }
      uVar4 = FUN_019a45d0();
      uVar6 = FUN_0199dd30(uVar4,0,1);
      if (*(char *)(param_2 + 0x330) != '\x03') {
        uVar4 = FUN_019a45d0();
        FUN_0199ddf0(uVar4);
        uVar4 = FUN_019a45d0();
        uVar6 = FUN_0199dd30(uVar4,1,1);
      }
    }
    if (*(byte *)(param_2 + 0x350) < 8) {
      uVar3 = (int)CONCAT71((int7)(uVar6 >> 8),1) << (*(byte *)(param_2 + 0x350) & 0x1f);
      uVar6 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),(uVar3 & 0x2c) != 0);
    }
    else {
      uVar6 = 0;
    }
    if (((char)uVar6 != '\0') && (*(longlong *)(param_2 + 0x308) != 0)) {
      if (*(byte *)(param_2 + 0x350) < 8) {
        bVar7 = ((int)CONCAT71((int7)(uVar6 >> 8),1) << (*(byte *)(param_2 + 0x350) & 0x1f) & 0xcU)
                != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_2 + 0x308);
        *(code **)(param_2 + 0xb8) = FUN_0133d8c0;
        FUN_00f834f0(param_2 + 0xb8);
      }
      if (*(longlong *)(param_2 + 0x378) == 0) {
        FUN_00414480(param_2 + 0x268);
      }
      else {
        FUN_00441640(param_2 + 0x268,*(undefined8 *)(*(longlong *)(param_2 + 0x378) + 8));
      }
      uVar8 = *(ulonglong *)(param_2 + 0x368);
      uVar6 = FUN_012cf740(&DAT_012cd510,1,*(undefined8 *)(param_2 + 0x308),
                           *(undefined8 *)(param_2 + 0x358),*(undefined8 *)(param_2 + 0x360),uVar8,
                           *(undefined8 *)(param_2 + 0x268),0,0);
      *(ulonglong *)(param_2 + 0x260) = uVar6;
      if (*(longlong *)(param_2 + 0x260) != 0) {
        uVar4 = FUN_012d23d0(*(undefined8 *)(param_2 + 0x260),6);
        *(undefined8 *)(param_2 + 600) = uVar4;
        uVar1 = FUN_01b07dd0(*(undefined8 *)(param_2 + 0x308));
        *(undefined1 *)(*(longlong *)(param_2 + 600) + 0x38) = uVar1;
        if (*(char *)(*(longlong *)(param_2 + 0x308) + 0x49c) == '\x01') {
          if (*(char *)(param_2 + 599) == '\0') {
            FUN_012d5130(*(undefined8 *)(param_2 + 0x260),6,1,*(undefined8 *)(param_2 + 0x370));
          }
          *(undefined1 *)(param_2 + 0x256) =
               *(undefined1 *)(*(longlong *)(param_2 + 0x308) + 0x13b6);
          if (*(char *)(param_2 + 0x256) == '\0') {
            *(undefined4 *)(param_2 + 0x250) = 4;
          }
          else {
            *(undefined4 *)(param_2 + 0x250) = 5;
          }
          FUN_012d2550(*(undefined8 *)(param_2 + 0x260),*(undefined1 *)(param_2 + 0x250),6,
                       *(undefined1 *)(*(longlong *)(param_2 + 0x308) + 0x12f1),0,
                       *(undefined1 *)(*(longlong *)(param_2 + 0x308) + 0x13b8));
        }
        else if (*(char *)(param_2 + 599) == '\0') {
          FUN_012d5130(*(undefined8 *)(param_2 + 0x260),6,0,*(undefined8 *)(param_2 + 0x370));
          FUN_012d5130(*(undefined8 *)(param_2 + 0x260),6,1,*(undefined8 *)(param_2 + 0x370));
          cVar2 = FUN_012d5820(*(undefined8 *)(param_2 + 0x260),6);
          if (cVar2 == '\0') {
            FUN_012d2550(*(undefined8 *)(param_2 + 0x260),0,6,
                         *(undefined1 *)(*(longlong *)(param_2 + 0x308) + 0x12f1),0,
                         uVar8 & 0xffffffffffffff00);
          }
          else {
            cVar2 = FUN_012d5850(*(undefined8 *)(param_2 + 0x260),6,
                                 *(undefined1 *)(*(longlong *)(param_2 + 0x308) + 0x12f1),
                                 *(undefined8 *)(param_2 + 0x370));
            if (cVar2 != '\0') {
              FUN_012d2550(*(undefined8 *)(param_2 + 0x260),1,6,
                           *(undefined1 *)(*(longlong *)(param_2 + 0x308) + 0x12f1),0,
                           uVar8 & 0xffffffffffffff00);
            }
          }
        }
        uVar6 = FUN_017cc920(*(undefined8 *)(param_2 + 0x308));
      }
    }
    if (*(byte *)(param_2 + 0x350) < 8) {
      uVar3 = (int)CONCAT71((int7)(uVar6 >> 8),1) << (*(byte *)(param_2 + 0x350) & 0x1f);
      bVar7 = (uVar3 & 0x40) != 0;
      uVar6 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar7);
    }
    else {
      uVar6 = 0;
      bVar7 = false;
    }
    if ((bVar7) && (*(longlong *)(param_2 + 0x308) != 0)) {
      if (*(byte *)(param_2 + 0x350) < 8) {
        bVar7 = ((int)CONCAT71((int7)(uVar6 >> 8),1) << (*(byte *)(param_2 + 0x350) & 0x1f) & 0x40U)
                != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_2 + 0x308);
        *(code **)(param_2 + 0xb8) = FUN_0133d8c0;
        FUN_00f834f0(param_2 + 0xb8);
      }
      if (*(longlong *)(param_2 + 0x378) == 0) {
        FUN_00414480(param_2 + 0x268);
      }
      else {
        FUN_00441640(param_2 + 0x268,*(undefined8 *)(*(longlong *)(param_2 + 0x378) + 8));
      }
      uVar6 = *(ulonglong *)(param_2 + 0x368);
      uVar4 = FUN_01309b50(&DAT_01307998,1,*(undefined8 *)(param_2 + 0x308),
                           *(undefined8 *)(param_2 + 0x358),*(undefined8 *)(param_2 + 0x360),uVar6,
                           *(undefined8 *)(param_2 + 0x268),0,0);
      *(undefined8 *)(param_2 + 0x248) = uVar4;
      if (*(longlong *)(param_2 + 0x248) != 0) {
        uVar4 = FUN_0130e420(*(undefined8 *)(param_2 + 0x248),6);
        *(undefined8 *)(param_2 + 0x240) = uVar4;
        uVar1 = FUN_01b07dd0(*(undefined8 *)(param_2 + 0x308));
        *(undefined1 *)(*(longlong *)(param_2 + 0x240) + 0x38) = uVar1;
        FUN_0130dae0(*(undefined8 *)(param_2 + 0x248),1);
        if (*(char *)(*(longlong *)(param_2 + 0x308) + 0x49c) == '\x01') {
          if (*(char *)(param_2 + 599) == '\0') {
            FUN_013136a0(*(undefined8 *)(param_2 + 0x248),6,1,*(undefined8 *)(param_2 + 0x370));
          }
          *(undefined1 *)(param_2 + 0x23f) =
               *(undefined1 *)(*(longlong *)(param_2 + 0x308) + 0x13b6);
          if (*(char *)(param_2 + 0x23f) == '\0') {
            *(undefined4 *)(param_2 + 0x238) = 4;
          }
          else {
            *(undefined4 *)(param_2 + 0x238) = 5;
          }
          FUN_0130ea10(*(undefined8 *)(param_2 + 0x248),*(undefined1 *)(param_2 + 0x238),6,
                       *(undefined1 *)(*(longlong *)(param_2 + 0x308) + 0x12f1),0,
                       *(undefined1 *)(*(longlong *)(param_2 + 0x308) + 0x13b8));
        }
        else if (*(char *)(param_2 + 599) == '\0') {
          FUN_013136a0(*(undefined8 *)(param_2 + 0x248),6,0,*(undefined8 *)(param_2 + 0x370));
          FUN_013136a0(*(undefined8 *)(param_2 + 0x248),6,1,*(undefined8 *)(param_2 + 0x370));
          cVar2 = FUN_01313d60(*(undefined8 *)(param_2 + 0x248),6,
                               *(undefined1 *)(*(longlong *)(param_2 + 0x308) + 0x12f1),
                               *(undefined8 *)(param_2 + 0x370));
          if (cVar2 != '\0') {
            FUN_0130ea10(*(undefined8 *)(param_2 + 0x248),1,6,
                         *(undefined1 *)(*(longlong *)(param_2 + 0x308) + 0x12f1),0,
                         uVar6 & 0xffffffffffffff00);
          }
        }
        FUN_017cc920(*(undefined8 *)(param_2 + 0x308));
      }
    }
    if (*(char *)(param_2 + 599) != '\0') {
      if (*(longlong *)(param_2 + 0x308) != 0) {
        FUN_017cc920(*(undefined8 *)(param_2 + 0x308));
      }
      *(undefined1 *)(param_2 + 0x275) = 1;
    }
    if (*(longlong *)(param_2 + 0x308) != 0) {
      if ((*(char *)(param_2 + 0x275) == '\0') &&
         (2 < *(int *)(*(longlong *)(param_2 + 0x308) + 0x1418))) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      *(undefined1 *)(param_2 + 0x275) = uVar1;
    }
    FUN_00410f20(*(undefined8 *)(param_2 + 0x308));
    puVar5 = PTR_DAT_020052b8;
    if (*PTR_DAT_020052b8 != '\0') {
      if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02002da0 + 0x6d8) + 0x328) == '\0') {
        if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02002da0 + 0x6e0) + 0x328) == '\0') {
          *(undefined1 *)(*(longlong *)PTR_DAT_02002da0 + 0x71c) = 4;
        }
        else {
          *(undefined1 *)(*(longlong *)PTR_DAT_02002da0 + 0x71c) = 1;
        }
      }
      else {
        *(undefined1 *)(*(longlong *)PTR_DAT_02002da0 + 0x71c) = 0;
      }
      FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02002da0 + 0x6f0),0);
      FUN_0132b070(*(undefined8 *)PTR_DAT_02002da0,0);
      puVar5 = (undefined *)FUN_0132b640(*(undefined8 *)PTR_DAT_02002da0);
    }
    if (*(byte *)(param_2 + 0x350) < 8) {
      bVar7 = ((int)CONCAT71((int7)((ulonglong)puVar5 >> 8),1) <<
               (*(byte *)(param_2 + 0x350) & 0x1f) & 3U) != 0;
    }
    else {
      bVar7 = false;
    }
    if ((bVar7) && (*(longlong *)PTR_DAT_02001e00 != 0)) {
      FUN_01a80d70(*(undefined8 *)PTR_DAT_02001e00,1);
    }
  }
  return;
}

