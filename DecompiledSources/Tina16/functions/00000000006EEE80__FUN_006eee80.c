/* Ghidra address: 006eee80 */
/* Ghidra symbol: FUN_006eee80 */


void FUN_006eee80(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  cVar2 = FUN_006eee10(param_1);
  if ((char)param_2 != cVar2) {
    *(char *)(param_1 + 0x3a) = (char)param_2;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
    if (*(char *)(lVar1 + 0x510) == '\0') {
      cVar2 = FUN_0065be20(lVar1);
      if (cVar2 != '\0') {
        uVar4 = FUN_0065b870(lVar1);
        uVar3 = FUN_006ef6e0(param_1);
        FUN_00611e40(uVar4,uVar3,param_2);
      }
    }
  }
  return;
}

