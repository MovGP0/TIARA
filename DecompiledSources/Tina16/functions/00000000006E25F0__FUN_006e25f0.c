/* Ghidra address: 006e25f0 */
/* Ghidra symbol: FUN_006e25f0 */


longlong FUN_006e25f0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 == '\0') {
    lVar3 = 0;
  }
  else {
    uVar2 = FUN_0065b870(param_1);
    uVar2 = FUN_00612050(uVar2);
    lVar3 = FUN_006df650(*(undefined8 *)(param_1 + 0x550),uVar2);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x4f8);
    }
  }
  return lVar3;
}

