/* Ghidra address: 0040d420 */
/* Ghidra symbol: FUN_0040d420 */


ulonglong FUN_0040d420(longlong param_1,undefined1 *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),0x1a);
  *param_2 = 1;
  if (*(short *)(param_1 + 8) != -0x284f) {
    cVar2 = FUN_0040d3d0(param_1);
    if (cVar2 == '\0') goto LAB_0040d4b1;
  }
  if (*(uint *)(param_1 + 0x14) <= *(uint *)(param_1 + 0x10)) {
    iVar3 = (**(code **)(param_1 + 0x28))(param_1);
    if (iVar3 != 0) {
      FUN_00409930(iVar3);
      goto LAB_0040d4b1;
    }
    if (*(uint *)(param_1 + 0x14) <= *(uint *)(param_1 + 0x10)) {
      if ((*(ushort *)(param_1 + 10) & 1) != 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x10)) = 0x1a
        ;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
      goto LAB_0040d4b1;
    }
  }
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x10));
  uVar4 = (ulonglong)bVar1;
  if (((*(ushort *)(param_1 + 10) & 1) == 0) || (bVar1 != 0x1a)) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *param_2 = 0;
  }
LAB_0040d4b1:
  return uVar4 & 0xffffffff;
}

