/* Ghidra address: 019a2110 */
/* Ghidra symbol: FUN_019a2110 */


void FUN_019a2110(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  ulonglong uVar3;
  
  if ((param_2 != (longlong *)0x0) && (cVar1 = FUN_0198a580(param_2), cVar1 == '\x02')) {
    *(undefined1 *)(param_1 + 0x3bf) = 1;
  }
  if ((param_2 != (longlong *)0x0) && (cVar1 = FUN_0198a580(param_2), cVar1 == '\x04')) {
    sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
    if ((sVar2 != 0x3a) && (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 != 0x96)) {
      return;
    }
    uVar3 = FUN_019a1fb0(param_1,param_2);
    FUN_019a2010(param_1,*(undefined8 *)(param_1 + 0x398 + (uVar3 & 0xff) * 8),param_2);
  }
  return;
}

