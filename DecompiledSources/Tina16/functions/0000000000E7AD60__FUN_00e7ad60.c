/* Ghidra address: 00e7ad60 */
/* Ghidra symbol: FUN_00e7ad60 */


void FUN_00e7ad60(char *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 in_RAX;
  byte bVar3;
  bool bVar4;
  undefined8 uVar5;
  
  bVar3 = (char)param_4 - 8;
  if (bVar3 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar3 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    if ((char)param_4 == '\b') {
      FUN_016ed460(param_2,param_1[4] + '\x02',0,
                   *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xf0),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x118),0);
    }
  }
  else if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    uVar5 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[8],param_1[9],0);
    *(undefined8 *)(lVar2 + 0x10) = uVar5;
    if (*param_1 == '\0') {
      FUN_016e3fc0(lVar2,param_4);
      FUN_016ed220(param_2,param_1[4] + '\x02',*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb8)
                   ,0);
      FUN_016ed220(param_2,param_1[4] + '\x03',*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xc0)
                   ,0);
      FUN_016ed220(param_2,param_1[4] + '\x04',*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 200),
                   0);
    }
    else {
      FUN_016e4030(lVar2,param_4);
      cVar1 = *param_1;
      if (cVar1 == '\x01') {
        FUN_016e4260(*(undefined8 *)(param_1 + 0x10),param_4);
        FUN_016ed220(param_2,param_1[4] + '\x02',
                     *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb8),0);
      }
      else if (cVar1 == '\x02') {
        FUN_016e4390(*(undefined8 *)(param_1 + 0x10),param_4);
        FUN_016ed220(param_2,param_1[4] + '\x02',
                     *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xc0),0);
      }
      else if (cVar1 == '\x03') {
        FUN_016e4c80(*(undefined8 *)(param_1 + 0x10),param_4);
        FUN_016ed220(param_2,param_1[4] + '\x02',
                     *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 200),0);
      }
    }
  }
  return;
}

