/* Ghidra address: 00a41470 */
/* Ghidra symbol: FUN_00a41470 */


void FUN_00a41470(undefined8 param_1,longlong *param_2,uint param_3,uint param_4,byte param_5,
                 undefined4 param_6,int param_7,undefined8 param_8,undefined8 param_9)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  
  if (*param_2 == 0) {
    lVar2 = FUN_00a41020(&DAT_00a40af0,1,param_7,param_6,param_8,param_9);
    *param_2 = lVar2;
  }
  if (*(char *)(*param_2 + 8) == '\0') {
    bVar3 = 7 - (char)param_7;
    bVar1 = (&DAT_01e72a9c)[param_7];
    FUN_00a41470(param_1,*param_2 + 0x28 +
                         (longlong)
                         (int)((uint)(byte)(((byte)param_3 & bVar1) >> (bVar3 & 0x1f)) * 4 |
                               (uint)(byte)(((byte)param_4 & bVar1) >> (bVar3 & 0x1f)) * 2 |
                              (uint)(byte)((param_5 & bVar1) >> (bVar3 & 0x1f))) * 8,param_3,param_4
                 ,param_5,param_6,param_7 + 1,param_8,param_9);
  }
  else {
    *(int *)(*param_2 + 0xc) = *(int *)(*param_2 + 0xc) + 1;
    *(int *)(*param_2 + 0x10) = *(int *)(*param_2 + 0x10) + (param_3 & 0xff);
    *(int *)(*param_2 + 0x14) = *(int *)(*param_2 + 0x14) + (param_4 & 0xff);
    *(int *)(*param_2 + 0x18) = *(int *)(*param_2 + 0x18) + (uint)param_5;
  }
  return;
}

