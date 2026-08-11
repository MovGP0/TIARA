/* Ghidra address: 019abd70 */
/* Ghidra symbol: FUN_019abd70 */


void FUN_019abd70(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = FUN_0198a580(param_2);
    if (cVar1 == '\x04') {
      iVar2 = FUN_01d07010(param_2);
      if (*(int *)(param_1 + 0x2c) == iVar2) {
        cVar1 = (**(code **)(*param_2 + 0x2d8))(param_2);
        if (cVar1 != '\0') {
          uVar3 = FUN_0198d430(*(undefined8 *)(param_1 + 0x50));
          FUN_01d04a20(param_2,uVar3);
        }
      }
      cVar1 = FUN_01d04d40(param_2);
      if (cVar1 != '\0') {
        FUN_0176a4e0(param_2[0x35],*(undefined8 *)(param_1 + 0x58));
      }
    }
  }
  return;
}

