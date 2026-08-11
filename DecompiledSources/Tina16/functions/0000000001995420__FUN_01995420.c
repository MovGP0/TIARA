/* Ghidra address: 01995420 */
/* Ghidra symbol: FUN_01995420 */


ulonglong FUN_01995420(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_01995410(param_1);
  uVar4 = (ulonglong)uVar2;
  if ((((*(longlong *)PTR_DAT_02004e40 != 0) &&
       (lVar3 = FUN_01c8a330(*(undefined8 *)PTR_DAT_02004e40,param_1), lVar3 != 0)) &&
      (*(longlong *)(lVar3 + 0x10) != 0)) && (*(longlong *)(lVar3 + 0x10) != param_1)) {
    if (((char)uVar2 != '\0') &&
       (cVar1 = FUN_01995420(*(undefined8 *)(lVar3 + 0x10)), cVar1 != '\0')) {
      return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
    }
    uVar4 = 0;
  }
  return uVar4;
}

