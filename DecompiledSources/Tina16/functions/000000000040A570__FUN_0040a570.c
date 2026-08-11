/* Ghidra address: 0040a570 */
/* Ghidra symbol: FUN_0040a570 */


int FUN_0040a570(longlong *param_1)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = FUN_0040a3f0(param_1,4);
  uVar1 = uVar1 & 0x7fff;
  if ((uVar1 == 0) || (0x7ffe < uVar1)) {
    if ((uVar1 == 0) && (*param_1 != 0)) {
      iVar2 = -0x3ffe;
    }
    else if ((uVar1 == 0) && (*param_1 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = uVar1 - 0x3fff;
  }
  return iVar2;
}

