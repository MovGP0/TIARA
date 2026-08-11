/* Ghidra address: 01538370 */
/* Ghidra symbol: FUN_01538370 */


void FUN_01538370(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  
  if ((*(char *)(param_2 + 0x13f) != '\0') && (*(longlong *)(param_2 + 0x130) != 0)) {
    *(longlong *)(param_2 + 0x128) = *(longlong *)(param_2 + 0x130) + 0x5d8;
    bVar1 = *(byte *)(*(longlong *)(param_2 + 0x128) + 3);
    if (bVar1 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar1 & 0x1f) & 0xdeU) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      if (bVar1 == 1) {
        *(undefined8 *)(*(longlong *)(param_2 + 0x128) + 200) = *(undefined8 *)(param_2 + 0x118);
      }
      else if (bVar1 == 2) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x130) + 0xa0);
        if (*(int *)(*(longlong *)(lVar2 + 0x470) + 0x10) < 2) {
          if (*(longlong *)(*(longlong *)(param_2 + 0x128) + 0x431) == 0) {
            FUN_004b5450(*(undefined8 *)(lVar2 + 0x438),*(undefined4 *)(param_2 + 0x10c),
                         *(undefined8 *)(param_2 + 0x100));
            FUN_01440040(*(undefined8 *)(*(longlong *)(param_2 + 0x130) + 0xa0),
                         *(undefined8 *)(*(longlong *)(param_2 + 0x130) + 0x1310),0);
            FUN_019af810(*(undefined8 *)(*(longlong *)(param_2 + 0x130) + 0xa0),8);
          }
          else {
            **(undefined8 **)(*(longlong *)(param_2 + 0x130) + 0x1390) =
                 *(undefined8 *)(param_2 + 0x118);
          }
        }
        else {
          FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x130) + 0x588));
        }
      }
      else if ((byte)(bVar1 - 3) < 2) {
        FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x130) + 0x590));
      }
    }
  }
  if (*(char *)(param_2 + 0xff) != '\0') {
    if (*(longlong *)(param_2 + 0x130) != 0) {
      FUN_017cc920(*(undefined8 *)(param_2 + 0x130));
    }
    *(undefined1 *)(param_2 + 0xfe) = 1;
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0x130));
  return;
}

