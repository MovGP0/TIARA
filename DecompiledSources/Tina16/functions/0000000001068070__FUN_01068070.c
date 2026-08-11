/* Ghidra address: 01068070 */
/* Ghidra symbol: FUN_01068070 */


void FUN_01068070(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x150);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    FUN_00410ab0();
  }
  *(undefined1 *)(param_1 + 0x162) = 9;
  *(undefined1 *)(param_1 + 0x163) = 7;
  if (*(char *)(param_1 + 0x161) == '\x05') {
    *(undefined1 *)(param_1 + 0x161) = 0;
  }
  return;
}

