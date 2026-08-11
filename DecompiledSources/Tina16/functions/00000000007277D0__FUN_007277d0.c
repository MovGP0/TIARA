/* Ghidra address: 007277d0 */
/* Ghidra symbol: FUN_007277d0 */


undefined8 FUN_007277d0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    FUN_00728f60(*(undefined8 *)(param_1 + 0x18));
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(lVar1 + 0x148) == 0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = (code *)FUN_00411550(lVar1,0xffe1);
    uVar3 = (*pcVar2)(lVar1);
  }
  return uVar3;
}

