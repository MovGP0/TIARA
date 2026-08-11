/* Ghidra address: 01359730 */
/* Ghidra symbol: FUN_01359730 */


void FUN_01359730(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  longlong lVar3;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = FUN_0198a580(param_2);
    if (cVar1 == '\x04') {
      sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
      if (sVar2 == 0x68) {
        lVar3 = FUN_004095c0(0x10);
        (**(code **)(*param_2 + 0x1f0))(param_2,0,lVar3,lVar3 + 4);
        *(longlong **)(lVar3 + 8) = param_2;
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x38),lVar3);
      }
    }
  }
  return;
}

