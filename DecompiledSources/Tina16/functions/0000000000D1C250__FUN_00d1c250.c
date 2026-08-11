/* Ghidra address: 00d1c250 */
/* Ghidra symbol: FUN_00d1c250 */


void FUN_00d1c250(longlong param_1,byte *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_3;
  bVar4 = *(byte *)(param_1 + 0x30);
  for (; 0 < param_3; param_3 = param_3 + -1) {
    *(char *)(param_1 + 0x2d) =
         *(char *)(param_1 + 0x2d) +
         *(char *)(param_1 + 0x31 + (ulonglong)*(byte *)(param_1 + 0x2c));
    *(char *)(param_1 + 0x2c) = *(char *)(param_1 + 0x2c) + '\x01';
    lVar5 = (longlong)(int)(uint)bVar4;
    bVar4 = *(byte *)(param_1 + 0x31 + lVar5);
    *(undefined1 *)(param_1 + 0x31 + lVar5) =
         *(undefined1 *)(param_1 + 0x31 + (ulonglong)*(byte *)(param_1 + 0x2d));
    *(undefined1 *)(param_1 + 0x31 + (ulonglong)*(byte *)(param_1 + 0x2d)) =
         *(undefined1 *)(param_1 + 0x31 + (ulonglong)*(byte *)(param_1 + 0x2f));
    *(undefined1 *)(param_1 + 0x31 + (ulonglong)*(byte *)(param_1 + 0x2f)) =
         *(undefined1 *)(param_1 + 0x31 + (ulonglong)*(byte *)(param_1 + 0x2c));
    *(byte *)(param_1 + 0x31 + (ulonglong)*(byte *)(param_1 + 0x2c)) = bVar4;
    *(char *)(param_1 + 0x2e) =
         *(char *)(param_1 + 0x2e) + *(char *)(param_1 + 0x31 + (ulonglong)bVar4);
    cVar1 = *(char *)(param_1 + 0x31 + (ulonglong)*(byte *)(param_1 + 0x2f));
    cVar2 = *(char *)(param_1 + 0x31 + lVar5);
    cVar3 = *(char *)(param_1 + 0x31 + (ulonglong)*(byte *)(param_1 + 0x2e));
    bVar4 = *param_2;
    *(byte *)(param_1 + 0x2f) = bVar4;
    param_2 = param_2 + 1;
    bVar4 = bVar4 ^ *(byte *)(param_1 + 0x31 +
                             (ulonglong)
                             *(byte *)(param_1 + 0x31 + (ulonglong)(byte)(cVar1 + cVar2 + cVar3))) ^
            *(byte *)(param_1 + 0x31 +
                     (ulonglong)
                     ((uint)*(byte *)(param_1 + 0x31 + (ulonglong)*(byte *)(param_1 + 0x2d)) +
                      (uint)*(byte *)(param_1 + 0x31 + (ulonglong)*(byte *)(param_1 + 0x2c)) & 0xff)
                     );
  }
  *(byte *)(param_1 + 0x30) = bVar4;
  return;
}

