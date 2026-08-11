/* Ghidra address: 00b86c40 */
/* Ghidra symbol: FUN_00b86c40 */


void FUN_00b86c40(longlong *param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  char cVar6;
  byte abStack_128 [256];
  
  if ((char)param_1[0xf] != '\0') {
    (**(code **)(*param_1 + 0xb0))(param_1);
  }
  FUN_00b6c020(param_1,param_2,param_3,0);
  uVar5 = (ulonglong)param_3 / 8;
  uVar4 = 0;
  do {
    cVar6 = (char)uVar4;
    *(char *)((longlong)param_1 + (ulonglong)uVar4 + 0x80) = cVar6;
    abStack_128[uVar4] = *(byte *)(param_2 + (ulonglong)uVar4 % uVar5);
    uVar3 = uVar4 + 1;
    *(char *)((longlong)param_1 + (ulonglong)uVar3 + 0x80) = cVar6 + '\x01';
    abStack_128[uVar3] = *(byte *)(param_2 + (ulonglong)uVar3 % uVar5);
    uVar3 = uVar4 + 2;
    *(char *)((longlong)param_1 + (ulonglong)uVar3 + 0x80) = cVar6 + '\x02';
    abStack_128[uVar3] = *(byte *)(param_2 + (ulonglong)uVar3 % uVar5);
    uVar3 = uVar4 + 3;
    *(char *)((longlong)param_1 + (ulonglong)uVar3 + 0x80) = cVar6 + '\x03';
    abStack_128[uVar3] = *(byte *)(param_2 + (ulonglong)uVar3 % uVar5);
    uVar3 = uVar4 + 4;
    *(char *)((longlong)param_1 + (ulonglong)uVar3 + 0x80) = cVar6 + '\x04';
    abStack_128[uVar3] = *(byte *)(param_2 + (ulonglong)uVar3 % uVar5);
    *(char *)((longlong)param_1 + (ulonglong)(uVar4 + 5) + 0x80) = cVar6 + '\x05';
    abStack_128[uVar4 + 5] = *(byte *)(param_2 + (ulonglong)(uVar4 + 5) % uVar5);
    *(char *)((longlong)param_1 + (ulonglong)(uVar4 + 6) + 0x80) = cVar6 + '\x06';
    abStack_128[uVar4 + 6] = *(byte *)(param_2 + (ulonglong)(uVar4 + 6) % uVar5);
    *(char *)((longlong)param_1 + (ulonglong)(uVar4 + 7) + 0x80) = cVar6 + '\a';
    abStack_128[uVar4 + 7] = *(byte *)(param_2 + (ulonglong)(uVar4 + 7) % uVar5);
    uVar4 = uVar4 + 8;
  } while (uVar4 < 0xff);
  uVar4 = 0;
  uVar3 = 0;
  do {
    uVar5 = (ulonglong)uVar3;
    bVar1 = *(byte *)((longlong)param_1 + uVar5 + 0x80);
    uVar4 = uVar4 + bVar1 + (uint)abStack_128[uVar5] & 0xff;
    *(undefined1 *)((longlong)param_1 + uVar5 + 0x80) =
         *(undefined1 *)((longlong)param_1 + (ulonglong)uVar4 + 0x80);
    *(byte *)((longlong)param_1 + (ulonglong)uVar4 + 0x80) = bVar1;
    uVar5 = (ulonglong)(uVar3 + 1);
    bVar1 = *(byte *)((longlong)param_1 + uVar5 + 0x80);
    uVar4 = uVar4 + bVar1 + (uint)abStack_128[uVar5] & 0xff;
    *(undefined1 *)((longlong)param_1 + uVar5 + 0x80) =
         *(undefined1 *)((longlong)param_1 + (ulonglong)uVar4 + 0x80);
    *(byte *)((longlong)param_1 + (ulonglong)uVar4 + 0x80) = bVar1;
    uVar5 = (ulonglong)(uVar3 + 2);
    bVar1 = *(byte *)((longlong)param_1 + uVar5 + 0x80);
    uVar4 = uVar4 + bVar1 + (uint)abStack_128[uVar5] & 0xff;
    *(undefined1 *)((longlong)param_1 + uVar5 + 0x80) =
         *(undefined1 *)((longlong)param_1 + (ulonglong)uVar4 + 0x80);
    *(byte *)((longlong)param_1 + (ulonglong)uVar4 + 0x80) = bVar1;
    uVar5 = (ulonglong)(uVar3 + 3);
    bVar1 = *(byte *)((longlong)param_1 + uVar5 + 0x80);
    uVar4 = uVar4 + bVar1 + (uint)abStack_128[uVar5] & 0xff;
    *(undefined1 *)((longlong)param_1 + uVar5 + 0x80) =
         *(undefined1 *)((longlong)param_1 + (ulonglong)uVar4 + 0x80);
    *(byte *)((longlong)param_1 + (ulonglong)uVar4 + 0x80) = bVar1;
    uVar5 = (ulonglong)(uVar3 + 4);
    uVar4 = uVar4 + *(byte *)((longlong)param_1 + uVar5 + 0x80) + (uint)abStack_128[uVar5] & 0xff;
    uVar2 = *(undefined1 *)((longlong)param_1 + uVar5 + 0x80);
    *(undefined1 *)((longlong)param_1 + uVar5 + 0x80) =
         *(undefined1 *)((longlong)param_1 + (ulonglong)uVar4 + 0x80);
    *(undefined1 *)((longlong)param_1 + (ulonglong)uVar4 + 0x80) = uVar2;
    uVar5 = (ulonglong)(uVar3 + 5);
    uVar4 = uVar4 + *(byte *)((longlong)param_1 + uVar5 + 0x80) + (uint)abStack_128[uVar5] & 0xff;
    uVar2 = *(undefined1 *)((longlong)param_1 + uVar5 + 0x80);
    *(undefined1 *)((longlong)param_1 + uVar5 + 0x80) =
         *(undefined1 *)((longlong)param_1 + (ulonglong)uVar4 + 0x80);
    *(undefined1 *)((longlong)param_1 + (ulonglong)uVar4 + 0x80) = uVar2;
    uVar5 = (ulonglong)(uVar3 + 6);
    uVar4 = uVar4 + *(byte *)((longlong)param_1 + uVar5 + 0x80) + (uint)abStack_128[uVar5] & 0xff;
    uVar2 = *(undefined1 *)((longlong)param_1 + uVar5 + 0x80);
    *(undefined1 *)((longlong)param_1 + uVar5 + 0x80) =
         *(undefined1 *)((longlong)param_1 + (ulonglong)uVar4 + 0x80);
    *(undefined1 *)((longlong)param_1 + (ulonglong)uVar4 + 0x80) = uVar2;
    uVar5 = (ulonglong)(uVar3 + 7);
    uVar4 = uVar4 + *(byte *)((longlong)param_1 + uVar5 + 0x80) + (uint)abStack_128[uVar3 + 7] &
            0xff;
    uVar2 = *(undefined1 *)((longlong)param_1 + uVar5 + 0x80);
    *(undefined1 *)((longlong)param_1 + uVar5 + 0x80) =
         *(undefined1 *)((longlong)param_1 + (ulonglong)uVar4 + 0x80);
    *(undefined1 *)((longlong)param_1 + (ulonglong)uVar4 + 0x80) = uVar2;
    uVar3 = uVar3 + 8;
  } while (uVar3 < 0xff);
  FUN_00409a70(param_1 + 0x10,param_1 + 0x30,0x100);
  return;
}

