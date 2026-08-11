/* Ghidra address: 008222b0 */
/* Ghidra symbol: FUN_008222b0 */


undefined1 FUN_008222b0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_00821f80(param_1,param_2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_00821e60(param_1,param_2);
    uVar2 = *(undefined1 *)(lVar3 + 0x12);
  }
  return uVar2;
}

