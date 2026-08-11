/* Ghidra address: 017d2e20 */
/* Ghidra symbol: FUN_017d2e20 */


void FUN_017d2e20(longlong param_1)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  double unaff_XMM6_Qa;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39 [17];
  
  iVar7 = *(int *)(param_1 + 0x2d8);
  iVar6 = 1;
  if (0 < iVar7) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar6 * 8);
      sVar2 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))(*(longlong **)(lVar1 + 0x128));
      if ((sVar2 == 0x3f) ||
         (sVar2 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                            (*(longlong **)(lVar1 + 0x128)), sVar2 == 0x6a)) {
        pbVar5 = (byte *)FUN_01b05ad0(lVar1,2,0,local_39,&local_3a,&local_3b);
        if (*pbVar5 < 2) {
          iVar4 = FUN_01b05600(lVar1,1);
          iVar3 = FUN_01b05600(lVar1,2);
          unaff_XMM6_Qa =
               *(double *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar4 * 8) -
               *(double *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar3 * 8);
        }
        else if ((byte)(*pbVar5 - 3) < 2) {
          iVar4 = FUN_01b05690(lVar1,1);
          unaff_XMM6_Qa = *(double *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar4 * 8);
        }
        FUN_01754af0(*(undefined8 *)(*(longlong *)(lVar1 + 0x128) + 0x198),
                     *(undefined8 *)(param_1 + 0x398),unaff_XMM6_Qa);
        FUN_01754b50(*(undefined8 *)(*(longlong *)(lVar1 + 0x128) + 0x198),
                     *(undefined8 *)(param_1 + 0x398),unaff_XMM6_Qa);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

