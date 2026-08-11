/* Ghidra address: 0165fd30 */
/* Ghidra symbol: FUN_0165fd30 */


longlong *
FUN_0165fd30(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char param_5,
            longlong param_6)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(param_6 - *(longlong *)(param_1 + 0x370)) >> 8;
  if (((longlong)uVar6 < *(longlong *)(param_1 + 0x368) + -0x7fffff) ||
     (*(longlong *)(param_1 + 0x368) + 0x7fffff <= (longlong)uVar6)) {
    FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),0x48);
    FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),0xb8);
    FUN_0165e150(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),param_6);
    FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),param_2);
    FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),0x48);
    FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),param_3);
    FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),param_4);
    plVar4 = (longlong *)
             FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),
                          CONCAT62((int6)((ulonglong)*(longlong *)(param_1 + 0x3c0) >> 0x10),
                                   param_5 * 8) & 0xffffffff);
  }
  else if (((longlong)uVar6 < *(longlong *)(param_1 + 0x368)) ||
          (*(longlong *)(param_1 + 0x368) + 0xd <= (longlong)uVar6)) {
    lVar5 = *(longlong *)(param_1 + 0x368) % 0xd;
    cVar2 = (&DAT_01f7d770)[lVar5];
    FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),param_2);
    FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),(&DAT_01f7d77d)[lVar5]);
    FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),param_3);
    FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),param_4);
    FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),
                 cVar2 + param_5 * '\b' + -0x80);
    plVar4 = (longlong *)
             FUN_0165e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),
                          ((param_6 + -0x80) - *(longlong *)(param_1 + 0x370)) +
                          *(longlong *)(param_1 + 0x368) * -0x100 & 0xffffffff);
  }
  else {
    uVar6 = uVar6 % 0xd;
    bVar3 = (&DAT_01f7d770)[uVar6];
    FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),param_2);
    FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),(&DAT_01f7d77d)[uVar6]);
    FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),param_3);
    FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),param_4);
    uVar1 = (param_6 - *(longlong *)(param_1 + 0x370) & 0xffU) - 0x80;
    if ((uVar1 == 0) && (bVar3 < 4)) {
      FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),bVar3 + param_5 * '\b');
    }
    else {
      FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),
                   bVar3 + param_5 * '\b' + '@');
      FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),uVar1 & 0xffffffff);
    }
    lVar5 = *(longlong *)(param_1 + 0x368) + 0xc;
    plVar4 = (longlong *)(lVar5 / 0xd);
    if ((uVar6 == lVar5 % 0xd) && (uVar1 == 0x78)) {
      lVar5 = *(longlong *)(param_1 + 0x368) % 0xd;
      FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),(&DAT_01f7d77d)[lVar5]);
      FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),0x81);
      FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),
                   (&DAT_01f7d770)[lVar5] + -0x40);
      FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),0);
      FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),0xd);
      FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),0);
      FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),0);
      plVar4 = (longlong *)(param_1 + 0x368);
      *plVar4 = *plVar4 + 1;
    }
  }
  return plVar4;
}

