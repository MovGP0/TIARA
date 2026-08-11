/* Ghidra address: 0113a180 */
/* Ghidra symbol: FUN_0113a180 */


void FUN_0113a180(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 in_RAX;
  ulonglong uVar5;
  ushort uVar6;
  bool bVar7;
  
  lVar1 = *(longlong *)(param_1 + 0xa10);
  if (*(byte *)(lVar1 + 0x110) < 8) {
    bVar7 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(lVar1 + 0x110) & 0x1f) &
            0x1fU) != 0;
  }
  else {
    bVar7 = false;
  }
  FUN_0082a890(*(undefined8 *)(param_1 + 0x950),!bVar7);
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x950),*(char *)(lVar1 + 0x110) == '\0');
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x900),*(char *)(lVar1 + 0x110) == '\x01');
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x8f8),*(char *)(lVar1 + 0x110) == '\x02');
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x908),*(char *)(lVar1 + 0x110) == '\x03');
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x9f8),*(char *)(lVar1 + 0x110) == '\x04');
  if (*(char *)(lVar1 + 0x148) == '\0') {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0x7c0),1);
  }
  else {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0x7b8),1);
  }
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x90))
                    (*(longlong **)(param_1 + 0xa18),*(undefined1 *)(lVar1 + 0x110));
  uVar5 = (ulonglong)uVar3 & 0xffffffffffff0001;
  (**(code **)(**(longlong **)(param_1 + 0x978) + 0x128))
            (*(longlong **)(param_1 + 0x978),CONCAT71((int7)(uVar5 >> 8),(short)uVar5 == 1));
  uVar6 = (ushort)uVar3;
  (**(code **)(**(longlong **)(param_1 + 0x968) + 0x128))
            (*(longlong **)(param_1 + 0x968),
             CONCAT71((int7)(((ulonglong)uVar3 & 0xffffffffffff0002) >> 8),
                      (short)((ulonglong)uVar3 & 0xffffffffffff0002) == 2));
  uVar5 = (ulonglong)uVar3 & 0xffffffffffff0004;
  if (((short)uVar5 == 4) || (uVar5 = (ulonglong)uVar3 & 0xffffffffffff0040, (short)uVar5 == 0x40))
  {
    uVar4 = (undefined4)CONCAT71((int7)(uVar5 >> 8),1);
  }
  else {
    uVar4 = 0;
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x970) + 0x128))
                    (*(longlong **)(param_1 + 0x970),uVar4);
  if ((((uVar6 & 8) == 8) || (uVar5 = (ulonglong)uVar3 & 0xffffffffffff0010, (short)uVar5 == 0x10))
     || (uVar5 = (ulonglong)uVar3 & 0xffffffffffff0080, (short)uVar5 == 0x80)) {
    uVar4 = (undefined4)CONCAT71((int7)(uVar5 >> 8),1);
  }
  else {
    uVar4 = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0x980) + 0x128))(*(longlong **)(param_1 + 0x980),uVar4);
  if ((uVar6 & 4) == 4) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x970),L"Offset");
  }
  else if ((uVar6 & 0x40) == 0x40) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x970),L"BiasA");
  }
  else {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x970),0);
  }
  if ((uVar6 & 8) == 8) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x980),L"Phase");
    *(undefined1 *)(lVar1 + 0x14a) = 0xb;
  }
  else if ((uVar6 & 0x10) == 0x10) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x980),L"Duty");
    *(undefined1 *)(lVar1 + 0x14a) = 0x11;
  }
  else if ((uVar6 & 0x80) == 0x80) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x980),L"BiasB");
    *(undefined1 *)(lVar1 + 0x14a) = 1;
  }
  else {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x980),0);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x978) + 0x32a) == '\0') {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x978) + 0xf0))(*(longlong **)(param_1 + 0x978));
    if ((cVar2 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x978) + 0x328) != '\0')) {
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0x968),1);
    }
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x968) + 0xf0))(*(longlong **)(param_1 + 0x968));
    if ((cVar2 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x968) + 0x328) != '\0')) {
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0x970),1);
    }
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x970) + 0xf0))(*(longlong **)(param_1 + 0x970));
    if ((cVar2 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x970) + 0x328) != '\0')) {
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0x980),1);
    }
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x980) + 0xf0))(*(longlong **)(param_1 + 0x980));
    if ((cVar2 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x980) + 0x328) != '\0')) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x978) + 0xf0))
                        (*(longlong **)(param_1 + 0x978));
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x968) + 0xf0))
                          (*(longlong **)(param_1 + 0x968));
        if (cVar2 == '\0') {
          cVar2 = (**(code **)(**(longlong **)(param_1 + 0x970) + 0xf0))
                            (*(longlong **)(param_1 + 0x970));
          if (cVar2 == '\0') {
            FUN_0082a890(*(undefined8 *)(param_1 + 0x978),1);
            FUN_0082a6c0(*(undefined8 *)(param_1 + 0x980),0);
          }
          else {
            FUN_0082a6c0(*(undefined8 *)(param_1 + 0x970),1);
          }
        }
        else {
          FUN_0082a6c0(*(undefined8 *)(param_1 + 0x968),1);
        }
      }
      else {
        FUN_0082a6c0(*(undefined8 *)(param_1 + 0x978),1);
      }
    }
    if (*(char *)(*(longlong *)(param_1 + 0x978) + 0x328) != '\0') {
      *(undefined1 *)(param_1 + 0xa0c) = 0;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x968) + 0x328) != '\0') {
      *(undefined1 *)(param_1 + 0xa0c) = 1;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x970) + 0x328) != '\0') {
      *(undefined1 *)(param_1 + 0xa0c) = 2;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x980) + 0x328) != '\0') {
      *(undefined1 *)(param_1 + 0xa0c) = 3;
    }
  }
  if (*(char *)(*(longlong *)(param_1 + 0x950) + 0x328) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x998) + 0x128))(*(longlong **)(param_1 + 0x998),1);
  }
  else {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0x998),0);
    (**(code **)(**(longlong **)(param_1 + 0x998) + 0x128))(*(longlong **)(param_1 + 0x998),0);
    FUN_0113c550(param_1,param_1);
  }
  return;
}

