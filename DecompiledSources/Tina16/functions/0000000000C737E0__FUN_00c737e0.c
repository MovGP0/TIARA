/* Ghidra address: 00c737e0 */
/* Ghidra symbol: FUN_00c737e0 */


void FUN_00c737e0(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x528));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x520));
  if ((*(longlong *)(param_1 + 0x540) != 0) &&
     ((*(ushort *)(*(longlong *)(param_1 + 0x540) + 0x34) & 8) == 0)) {
    iVar2 = FUN_007e2ef0();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar3 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x540) + 0x80),iVar4);
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x550) + (longlong)iVar4 * 0x10);
        *(undefined8 *)(lVar3 + 0x110) = *puVar1;
        *(undefined8 *)(lVar3 + 0x118) = puVar1[1];
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00688bf0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

