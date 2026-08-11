/* Ghidra address: 00c0e4f0 */
/* Ghidra symbol: FUN_00c0e4f0 */


int FUN_00c0e4f0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  iVar2 = FUN_00c0e550(param_1);
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      return iVar2;
    }
    uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x650),iVar2);
    cVar1 = FUN_00bf18d0(uVar3,&local_38);
  } while (cVar1 == '\0');
  return iVar2;
}

