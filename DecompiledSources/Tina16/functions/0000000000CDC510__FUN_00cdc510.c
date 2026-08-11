/* Ghidra address: 00cdc510 */
/* Ghidra symbol: FUN_00cdc510 */


longlong * FUN_00cdc510(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar5 = 0;
  if (param_3 != 0) {
    iVar5 = (int)*(undefined8 *)(param_3 + -8);
  }
  FUN_00419260(param_2,&DAT_0086e978);
  iVar2 = 0;
  iVar3 = 0;
  iVar1 = iVar2;
  if (0 < iVar5) {
    do {
      if (iVar5 - iVar3 < 3) {
        if (iVar5 - iVar3 < 2) {
          bVar4 = *(byte *)(param_3 + iVar3);
          uVar6 = 0;
          uVar7 = 0;
          uVar8 = 1;
        }
        else {
          bVar4 = *(byte *)(param_3 + iVar3);
          uVar6 = (uint)*(byte *)(param_3 + (iVar3 + 1));
          uVar7 = 0;
          uVar8 = 2;
        }
      }
      else {
        bVar4 = *(byte *)(param_3 + iVar3);
        uVar6 = (uint)*(byte *)(param_3 + (iVar3 + 1));
        uVar7 = (uint)*(byte *)(param_3 + (iVar3 + 2));
        uVar8 = 3;
      }
      iVar3 = iVar3 + uVar8;
      *(undefined1 *)(*param_2 + (longlong)iVar1) =
           *(undefined1 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(bVar4 >> 2));
      *(undefined1 *)(*param_2 + (longlong)(iVar1 + 1)) =
           *(undefined1 *)
            (*(longlong *)(param_1 + 0x78) + (ulonglong)((uint)(bVar4 & 3) << 4 | uVar6 >> 4));
      *(undefined1 *)(*param_2 + (longlong)(iVar1 + 2)) =
           *(undefined1 *)
            (*(longlong *)(param_1 + 0x78) + (ulonglong)((uint)((byte)uVar6 & 0xf) * 4 | uVar7 >> 6)
            );
      *(undefined1 *)(*param_2 + (longlong)(iVar1 + 3)) =
           *(undefined1 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)((byte)uVar7 & 0x3f));
      iVar2 = iVar1 + 4;
      if ((uVar8 < 3) &&
         (*(undefined1 *)(*param_2 + (longlong)(iVar1 + 3)) = *(undefined1 *)(param_1 + 0x80),
         uVar8 == 1)) {
        *(undefined1 *)(*param_2 + (longlong)(iVar1 + 2)) = *(undefined1 *)(param_1 + 0x80);
      }
      iVar1 = iVar2;
    } while (iVar3 < iVar5);
  }
  FUN_00419260(param_2,&DAT_0086e978,1,(longlong)iVar2);
  return param_2;
}

