/* Ghidra address: 00727700 */
/* Ghidra symbol: FUN_00727700 */


undefined8 FUN_00727700(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(lVar1 + 0x118) == 0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = (code *)FUN_00411550(lVar1,0xffe4);
    uVar3 = (*pcVar2)(lVar1);
  }
  return uVar3;
}

