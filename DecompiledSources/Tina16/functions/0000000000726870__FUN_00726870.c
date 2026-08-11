/* Ghidra address: 00726870 */
/* Ghidra symbol: FUN_00726870 */


char FUN_00726870(longlong param_1,int *param_2,undefined8 param_3,ulonglong param_4)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined6 uVar6;
  uint uVar7;
  undefined8 local_28 [2];
  
  cVar1 = FUN_00722540(param_1,param_2);
  if (((cVar1 == '\0') && (*param_2 == DAT_020124d8)) &&
     (*(longlong *)(param_2 + 4) == param_1 + 0x110)) {
    *(undefined2 *)(param_1 + 0xd0) = 0;
    bVar2 = 0;
    puVar5 = &DAT_01e05a20;
    do {
      if (((*puVar5 & *(uint *)(param_1 + 0x128)) != 0) && (bVar2 < 0x10)) {
        uVar7 = (int)CONCAT62((int6)(param_4 >> 0x10),1) << (bVar2 & 0x1f);
        param_4 = (ulonglong)uVar7;
        *(ushort *)(param_1 + 0xd0) = *(ushort *)(param_1 + 0xd0) | (ushort)uVar7;
      }
      bVar2 = bVar2 + 1;
      puVar5 = puVar5 + 1;
    } while (bVar2 != 0xd);
    uVar7 = *(uint *)(param_1 + 0x128);
    uVar6 = (undefined6)((ulonglong)puVar5 >> 0x10);
    if ((uVar7 & 8) == 0) {
      if ((uVar7 & 0x30) == 0) {
        if ((uVar7 & 0x40) != 0) {
          thunk_FUN_03e49910(*(undefined8 *)(param_1 + 0x108),local_28);
          *(undefined8 *)(param_1 + 0xd4) = local_28[0];
          *(undefined8 *)(param_1 + 0x108) = 0;
          uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x88));
          thunk_FUN_0413e052(uVar4,0xb021,0,0);
          *(undefined8 *)(param_1 + 0x88) = 0;
        }
      }
      else {
        pcVar3 = (code *)FUN_00411550(param_1,CONCAT62(uVar6,0xffec));
        (*pcVar3)(param_1);
      }
    }
    else {
      pcVar3 = (code *)FUN_00411550(param_1,CONCAT62(uVar6,0xffed));
      (*pcVar3)(param_1);
    }
    cVar1 = '\x01';
  }
  return cVar1;
}

