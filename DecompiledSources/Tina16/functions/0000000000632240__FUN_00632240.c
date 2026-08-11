/* Ghidra address: 00632240 */
/* Ghidra symbol: FUN_00632240 */


void FUN_00632240(longlong param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x1714);
  uVar4 = (uint)*(ushort *)(param_1 + 0x1710) | (param_4 & 0xffff) << ((byte)iVar2 & 0x1f);
  *(short *)(param_1 + 0x1710) = (short)uVar4;
  if (iVar2 < 0xe) {
    iVar2 = iVar2 + 3;
    *(int *)(param_1 + 0x1714) = iVar2;
    if (iVar2 < 9) goto LAB_006322c2;
LAB_006322de:
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar1) = (char)uVar4;
    uVar3 = *(undefined1 *)(param_1 + 0x1711);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar1) = (char)uVar4;
    uVar4 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar4 + 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4) =
         *(undefined1 *)(param_1 + 0x1711);
    uVar4 = (param_4 & 0xffff) >> (0x10U - (char)*(int *)(param_1 + 0x1714) & 0x1f);
    *(short *)(param_1 + 0x1710) = (short)uVar4;
    iVar2 = *(int *)(param_1 + 0x1714) + -0xd;
    uVar4 = uVar4 & 0xffff;
    *(int *)(param_1 + 0x1714) = iVar2;
    if (8 < iVar2) goto LAB_006322de;
LAB_006322c2:
    uVar3 = (undefined1)uVar4;
    if (iVar2 < 1) goto LAB_0063230c;
  }
  uVar4 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar4 + 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4) = uVar3;
LAB_0063230c:
  *(undefined2 *)(param_1 + 0x1710) = 0;
  *(undefined4 *)(param_1 + 0x1714) = 0;
  uVar4 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar4 + 1;
  *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4) = (char)param_3;
  uVar4 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar4 + 1;
  *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4) = (char)(param_3 >> 8);
  uVar4 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar4 + 1;
  *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4) = (char)~param_3;
  uVar4 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar4 + 1;
  *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4) = (char)(~param_3 >> 8);
  FUN_00626670((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10),param_2,param_3)
  ;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_3;
  return;
}

