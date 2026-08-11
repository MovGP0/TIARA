/* Ghidra address: 017b0df0 */
/* Ghidra symbol: FUN_017b0df0 */


undefined8 FUN_017b0df0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_017afd80(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    uVar3 = FUN_00498310(param_2,param_3);
    iVar2 = thunk_FUN_03f16006(param_1 + 0x16c,uVar3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}

