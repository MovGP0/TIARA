/* Ghidra address: 0172bf70 */
/* Ghidra symbol: FUN_0172bf70 */


ulonglong FUN_0172bf70(longlong param_1,ushort *param_2,byte *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *unaff_RSI;
  ulonglong uVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  undefined8 *puVar8;
  byte local_75 [26];
  byte local_5b [17];
  short local_4a;
  undefined8 *local_40 [2];
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2d0))
                    (*(longlong **)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28),local_40);
  if (cVar1 == '\x04') {
    unaff_RSI = local_40[0];
    puVar8 = (undefined8 *)(param_1 + 0x29);
    for (lVar3 = 0x28; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar8 = *unaff_RSI;
      unaff_RSI = unaff_RSI + 1;
      puVar8 = puVar8 + 1;
    }
  }
  else if (cVar1 == '\a') {
    unaff_RSI = local_40[0];
    puVar8 = (undefined8 *)(param_1 + 0x29);
    for (lVar3 = 0x28; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar8 = *unaff_RSI;
      unaff_RSI = unaff_RSI + 1;
      puVar8 = puVar8 + 1;
    }
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    FUN_0172a910(*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x10) + 1);
    *param_3 = 0;
    sVar5 = 0;
    uVar4 = 0;
    while ((*param_3 < *(byte *)(param_1 + 0x18) && ((char)uVar4 == '\0'))) {
      FUN_0172a920(*(undefined8 *)(param_1 + 8),local_5b,0x1b);
      iVar2 = FUN_00414f50(local_5b,param_1 + 0x3e,(ulonglong)local_5b[0] + 1);
      *param_3 = *param_3 + 1;
      sVar5 = sVar5 + local_4a;
      uVar4 = (ulonglong)(iVar2 == 0);
    }
    if ((char)uVar4 != '\0') {
      *param_3 = *param_3 - 1;
      uVar6 = sVar5 - local_4a;
      uVar7 = (uVar6 + local_4a) - 1;
      uVar4 = 0;
      do {
        *param_2 = (short)((int)((uint)uVar7 - (uint)uVar6) / 2) + uVar6;
        FUN_0172a910(*(undefined8 *)(param_1 + 8),
                     *(int *)(param_1 + 0x14) + (uint)*param_2 * 0x1a + 2);
        FUN_0172a920(*(undefined8 *)(param_1 + 8),local_75,0x1a);
        iVar2 = FUN_00414e30(local_75,param_1 + 0x29);
        if (iVar2 < 1) {
          uVar6 = *param_2 + 1;
          iVar2 = FUN_00414f50(local_75,param_1 + 0x29,(ulonglong)local_75[0] + 1);
          uVar4 = (ulonglong)(iVar2 == 0);
        }
        else {
          if (*param_2 == 0) break;
          uVar7 = *param_2 - 1;
        }
      } while (uVar6 <= uVar7 && (char)uVar4 == '\0');
    }
  }
  else {
    *param_3 = 0;
    *param_2 = 0;
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  }
  return uVar4 & 0xffffffff;
}

