/* Ghidra address: 00727780 */
/* Ghidra symbol: FUN_00727780 */


undefined8 FUN_00727780(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(lVar1 + 0x138) == 0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = (code *)FUN_00411550(lVar1,0xffe2);
    uVar3 = (*pcVar2)(lVar1,param_3,param_4);
  }
  return uVar3;
}

