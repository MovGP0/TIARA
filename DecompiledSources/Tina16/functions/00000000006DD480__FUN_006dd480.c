/* Ghidra address: 006dd480 */
/* Ghidra symbol: FUN_006dd480 */


undefined8 FUN_006dd480(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  lVar2 = FUN_006dc7a0(param_1);
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    cVar1 = FUN_006ddf60(param_1);
    if (cVar1 != '\0') {
      uVar4 = *(undefined8 *)(param_1 + 8);
      uVar3 = FUN_006decf0(uVar4);
      uVar3 = FUN_00611ff0(uVar3,*(undefined8 *)(param_1 + 0x20));
      uVar4 = FUN_006df650(uVar4,uVar3);
    }
  }
  return uVar4;
}

