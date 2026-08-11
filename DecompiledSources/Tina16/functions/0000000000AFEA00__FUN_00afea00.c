/* Ghidra address: 00afea00 */
/* Ghidra symbol: FUN_00afea00 */


void FUN_00afea00(longlong param_1,short param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if ((param_2 != *(short *)(param_1 + 0x79a)) &&
     (*(short *)(param_1 + 0x79a) = param_2, *(longlong *)(param_1 + 0x8b0) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x8b0);
    *(bool *)(lVar1 + 0x268) = (*(ushort *)(param_1 + 0x79a) & 1) != 0;
    if (((*(ushort *)(param_1 + 0x79a) & 4) == 0) && ((*(ushort *)(param_1 + 0x79a) & 8) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(lVar1 + 0xb0) = uVar2;
    *(bool *)(lVar1 + 0xb1) = (*(ushort *)(param_1 + 0x79a) & 8) != 0;
    *(bool *)(lVar1 + 0xb2) = (*(ushort *)(param_1 + 0x79a) & 0x10) != 0;
    *(bool *)(lVar1 + 0x278) = (*(ushort *)(param_1 + 0x79a) & 0x20) != 0;
  }
  return;
}

