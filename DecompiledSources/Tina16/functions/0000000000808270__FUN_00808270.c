/* Ghidra address: 00808270 */
/* Ghidra symbol: FUN_00808270 */


void FUN_00808270(longlong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  uVar1 = thunk_FUN_03978312(0,0x7f00);
  *(undefined8 *)(param_1 + 0x158) = uVar1;
  iVar3 = -0x16;
  puVar4 = &DAT_01e14f28;
  do {
    if ((iVar3 < -0x11) || (puVar2 = PTR_IMAGE_DOS_HEADER_0200c280, -0xc < iVar3)) {
      puVar2 = (undefined *)0x0;
    }
    uVar1 = thunk_FUN_03978312(puVar2,*puVar4);
    FUN_00808470(param_1,iVar3,uVar1);
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar3 != -1);
  return;
}

