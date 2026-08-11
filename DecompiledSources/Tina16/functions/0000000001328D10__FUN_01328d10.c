/* Ghidra address: 01328d10 */
/* Ghidra symbol: FUN_01328d10 */


void FUN_01328d10(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  
  if ((*(char *)(param_2 + 0x12f) != '\0') && (*(longlong *)(param_2 + 0x120) != 0)) {
    **(undefined8 **)(*(longlong *)(param_2 + 0x120) + 5000) = *(undefined8 *)(param_2 + 0x118);
    *(longlong *)(param_2 + 0x110) = *(longlong *)(param_2 + 0x120) + 0x5d8;
    bVar1 = *(byte *)(*(longlong *)(param_2 + 0x110) + 3);
    if (bVar1 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar1 & 0x1f) & 0xdeU) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      if (bVar1 == 1) {
        *(undefined8 *)(*(longlong *)(param_2 + 0x110) + 200) = *(undefined8 *)(param_2 + 0x100);
      }
      else if (bVar1 == 2) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x120) + 0xa0);
        if (*(int *)(*(longlong *)(lVar2 + 0x470) + 0x10) < 2) {
          if (*(longlong *)(*(longlong *)(param_2 + 0x110) + 0x431) == 0) {
            FUN_004b5450(*(undefined8 *)(lVar2 + 0x438),*(undefined4 *)(param_2 + 0xf4),
                         *(undefined8 *)(param_2 + 0xe8));
            FUN_01440040(*(undefined8 *)(*(longlong *)(param_2 + 0x120) + 0xa0),
                         *(undefined8 *)(*(longlong *)(param_2 + 0x120) + 0x1310),0);
            FUN_019af810(*(undefined8 *)(*(longlong *)(param_2 + 0x120) + 0xa0),1);
          }
          else {
            **(undefined8 **)(*(longlong *)(param_2 + 0x120) + 0x1390) =
                 *(undefined8 *)(param_2 + 0x100);
          }
        }
        else {
          FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x120) + 0x588));
        }
      }
      else if ((byte)(bVar1 - 3) < 2) {
        FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x120) + 0x590));
      }
    }
  }
  if (*(char *)(param_2 + 0xe7) != '\0') {
    if (*(longlong *)(param_2 + 0x120) != 0) {
      FUN_017cc920(*(undefined8 *)(param_2 + 0x120));
    }
    *(undefined1 *)(param_2 + 0xe6) = 1;
  }
  FUN_00f51380(*(undefined8 *)(param_2 + 0x120),1);
  return;
}

