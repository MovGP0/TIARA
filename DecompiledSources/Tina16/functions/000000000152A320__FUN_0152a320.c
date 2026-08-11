/* Ghidra address: 0152a320 */
/* Ghidra symbol: FUN_0152a320 */


void FUN_0152a320(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  
  if ((*(char *)(param_2 + 0xdf) != '\0') && (*(longlong *)(param_2 + 0xd0) != 0)) {
    *(longlong *)(param_2 + 200) = *(longlong *)(param_2 + 0xd0) + 0x5d8;
    bVar1 = *(byte *)(*(longlong *)(param_2 + 200) + 3);
    if (bVar1 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar1 & 0x1f) & 0x9eU) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      if (bVar1 == 1) {
        *(undefined8 *)(*(longlong *)(param_2 + 200) + 200) = *(undefined8 *)(param_2 + 0xb8);
      }
      else if (bVar1 == 2) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0xd0) + 0xa0);
        if (*(int *)(*(longlong *)(lVar2 + 0x470) + 0x10) < 2) {
          if (*(longlong *)(*(longlong *)(param_2 + 200) + 0x431) == 0) {
            FUN_004b5450(*(undefined8 *)(lVar2 + 0x438),*(undefined4 *)(param_2 + 0xac),
                         *(undefined8 *)(param_2 + 0xa0));
            FUN_01440040(*(undefined8 *)(*(longlong *)(param_2 + 0xd0) + 0xa0),
                         *(undefined8 *)(*(longlong *)(param_2 + 0xd0) + 0x1310),0);
            FUN_019af810(*(undefined8 *)(*(longlong *)(param_2 + 0xd0) + 0xa0),8);
          }
          else {
            **(undefined8 **)(*(longlong *)(param_2 + 0xd0) + 0x1390) =
                 *(undefined8 *)(param_2 + 0xb8);
          }
        }
        else {
          FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0xd0) + 0x588));
        }
      }
      else if ((byte)(bVar1 - 3) < 2) {
        FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0xd0) + 0x590));
      }
    }
  }
  FUN_016d7a10(*(undefined8 *)(param_2 + 0xd0));
  if (*(char *)(param_2 + 0x9f) != '\0') {
    if (*(longlong *)(param_2 + 0xd0) != 0) {
      FUN_017cc920(*(undefined8 *)(param_2 + 0xd0));
    }
    *(undefined1 *)(param_2 + 0x9e) = 1;
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0xd0));
  return;
}

