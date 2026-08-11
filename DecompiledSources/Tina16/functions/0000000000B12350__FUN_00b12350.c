/* Ghidra address: 00b12350 */
/* Ghidra symbol: FUN_00b12350 */


ulonglong FUN_00b12350(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_38 [40];
  
  uVar3 = FUN_00b12240(auStack_38);
  uVar4 = (ulonglong)uVar3;
  if ((char)uVar3 == '\0') {
    cVar2 = FUN_00b10a60(param_1);
    if (cVar2 != '\0') {
      lVar1 = *param_1;
      (**(code **)(lVar1 + 0x2b8))(param_1,*(undefined4 *)((longlong)param_1 + 0x4ac));
      uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
  }
  return uVar4 & 0xffffffff;
}

