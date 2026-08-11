/* Ghidra address: 00705a40 */
/* Ghidra symbol: FUN_00705a40 */


undefined8 FUN_00705a40(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    lVar2 = thunk_FUN_041da4fa();
    if ((lVar2 == 0) ||
       (((lVar2 != *(longlong *)(param_1 + 0x4f8) && (lVar2 != *(longlong *)(param_1 + 0x500))) &&
        (lVar2 != *(longlong *)(param_1 + 0x548))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

