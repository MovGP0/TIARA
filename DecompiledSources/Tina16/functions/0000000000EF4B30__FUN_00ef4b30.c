/* Ghidra address: 00ef4b30 */
/* Ghidra symbol: FUN_00ef4b30 */


void FUN_00ef4b30(longlong param_1,byte param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  
  if (param_2 < 0x3f) {
    bVar3 = 0;
    do {
      uVar5 = (ulonglong)bVar3;
      if (*(longlong *)(**(longlong **)(param_1 + 0xd0) + 0x1f8 + uVar5 * 0x200) != 0) {
        FUN_004095f0(*(undefined8 *)(**(longlong **)(param_1 + 0xd0) + 0x1f8 + uVar5 * 0x200));
        FUN_00ef4260(4,param_3);
      }
      lVar1 = *(longlong *)(**(longlong **)(param_1 + 0xd0) + 0x7e00 + uVar5 * 8);
      if (lVar1 != 0) {
        FUN_004095f0(lVar1);
        FUN_00ef4260(4,param_3);
      }
      bVar3 = bVar3 + 1;
    } while (bVar3 != 0x40);
    bVar3 = 0;
    do {
      bVar4 = 0x3f;
      if ((byte)(param_2 + 2) < 0x40) {
        cVar2 = param_2 - 0x3e;
        do {
          *(undefined8 *)
           (**(longlong **)(param_1 + 0xd0) + (ulonglong)bVar4 * 0x200 + (ulonglong)bVar3 * 8) =
               *(undefined8 *)
                (**(longlong **)(param_1 + 0xd0) + (longlong)(int)(bVar4 - 1) * 0x200 +
                (ulonglong)bVar3 * 8);
          bVar4 = bVar4 - 1;
          cVar2 = cVar2 + '\x01';
        } while (cVar2 != '\0');
      }
      bVar3 = bVar3 + 1;
    } while (bVar3 != 0x40);
    bVar3 = 0;
    do {
      *(undefined8 *)
       (**(longlong **)(param_1 + 0xd0) + (ulonglong)(param_2 + 1) * 0x200 + (ulonglong)bVar3 * 8) =
           0;
      bVar3 = bVar3 + 1;
    } while (bVar3 != 0x40);
    bVar3 = 0;
    do {
      bVar4 = 0x3f;
      if ((byte)(param_2 + 2) < 0x40) {
        cVar2 = param_2 - 0x3e;
        do {
          *(undefined8 *)
           (**(longlong **)(param_1 + 0xd0) + (ulonglong)bVar3 * 0x200 + (ulonglong)bVar4 * 8) =
               *(undefined8 *)
                (**(longlong **)(param_1 + 0xd0) + (ulonglong)bVar3 * 0x200 +
                (longlong)(int)(bVar4 - 1) * 8);
          bVar4 = bVar4 - 1;
          cVar2 = cVar2 + '\x01';
        } while (cVar2 != '\0');
      }
      bVar3 = bVar3 + 1;
    } while (bVar3 != 0x40);
    bVar3 = 0;
    do {
      *(undefined8 *)
       (**(longlong **)(param_1 + 0xd0) + (ulonglong)bVar3 * 0x200 + (ulonglong)(param_2 + 1) * 8) =
           0;
      bVar3 = bVar3 + 1;
    } while (bVar3 != 0x40);
  }
  else {
    FUN_00ef4260(6,param_3);
  }
  return;
}

