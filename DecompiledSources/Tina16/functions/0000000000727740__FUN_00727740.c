/* Ghidra address: 00727740 */
/* Ghidra symbol: FUN_00727740 */


undefined8 FUN_00727740(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(lVar1 + 0x128) == 0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = (code *)FUN_00411550(lVar1,0xffe3);
    uVar3 = (*pcVar2)(lVar1,param_3);
  }
  return uVar3;
}

