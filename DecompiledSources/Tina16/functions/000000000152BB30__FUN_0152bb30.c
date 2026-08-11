/* Ghidra address: 0152bb30 */
/* Ghidra symbol: FUN_0152bb30 */


void FUN_0152bb30(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 uVar3;
  bool bVar4;
  
  if ((*(char *)(param_2 + 0xcf) != '\0') && (*(longlong *)(param_2 + 0xc0) != 0)) {
    *(longlong *)(param_2 + 0xb8) = *(longlong *)(param_2 + 0xc0) + 0x5d8;
    bVar1 = *(byte *)(*(longlong *)(param_2 + 0xb8) + 3);
    if (bVar1 < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar1 & 0x1f) & 0xdeU) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      if (bVar1 == 1) {
        *(undefined8 *)(*(longlong *)(param_2 + 0xb8) + 200) = *(undefined8 *)(param_2 + 0xa8);
      }
      else if (bVar1 == 2) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0xc0) + 0xa0);
        if (*(int *)(*(longlong *)(lVar2 + 0x470) + 0x10) < 2) {
          if (*(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x431) == 0) {
            FUN_004b5450(*(undefined8 *)(lVar2 + 0x438),*(undefined4 *)(param_2 + 0x9c),
                         *(undefined8 *)(param_2 + 0x90));
            FUN_01440040(*(undefined8 *)(*(longlong *)(param_2 + 0xc0) + 0xa0),
                         *(undefined8 *)(*(longlong *)(param_2 + 0xc0) + 0x1310),0);
            FUN_019af810(*(undefined8 *)(*(longlong *)(param_2 + 0xc0) + 0xa0),8);
          }
          else {
            **(undefined8 **)(*(longlong *)(param_2 + 0xc0) + 0x1390) =
                 *(undefined8 *)(param_2 + 0xa8);
          }
        }
        else {
          FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0xc0) + 0x588));
        }
      }
      else if ((byte)(bVar1 - 3) < 2) {
        FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0xc0) + 0x590));
      }
    }
  }
  if ((*(longlong *)(param_2 + 0xc0) != 0) &&
     (*(char *)(*(longlong *)(param_2 + 0xc0) + 0x49c) == '\x01')) {
    FUN_017cc920(*(undefined8 *)(param_2 + 0xc0));
  }
  if (*(char *)(param_2 + 0x8f) != '\0') {
    if (*(longlong *)(param_2 + 0xc0) != 0) {
      FUN_017cc920(*(undefined8 *)(param_2 + 0xc0));
    }
    *(undefined1 *)(param_2 + 0x8e) = 1;
  }
  if ((*(char *)(param_2 + 0x8e) == '\0') &&
     (*(char *)(*(longlong *)(param_2 + 0xc0) + 0x49c) != '\x01')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_2 + 0x8e) = uVar3;
  FUN_00410f20(*(undefined8 *)(param_2 + 0xc0));
  return;
}

