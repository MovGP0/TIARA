/* Ghidra address: 017bb780 */
/* Ghidra symbol: FUN_017bb780 */


void FUN_017bb780(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = FUN_0198a580(param_2);
    if (cVar1 == '\x05') {
      lVar2 = (**(code **)(*param_2 + 0x40))(param_2);
      *(undefined1 *)(lVar2 + 10) = *(undefined1 *)((longlong)param_2 + 10);
      FUN_004ae7e0(**(undefined8 **)(param_1 + 0x58),lVar2);
    }
    else {
      cVar1 = FUN_0198a580(param_2);
      if (cVar1 == '\t') {
        uVar3 = (**(code **)(*param_2 + 0x40))(param_2);
        FUN_004ae7e0(**(undefined8 **)(param_1 + 0x60),uVar3);
      }
    }
  }
  return;
}

