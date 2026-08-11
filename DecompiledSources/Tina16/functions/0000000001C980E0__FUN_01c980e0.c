/* Ghidra address: 01c980e0 */
/* Ghidra symbol: FUN_01c980e0 */


void FUN_01c980e0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x118))(param_2);
    if (cVar1 != '\0') {
      lVar2 = FUN_01c7da00(*(undefined8 *)(param_1 + 0xa0));
      if (lVar2 != 0) {
        uVar3 = FUN_01c7da00(*(undefined8 *)(param_1 + 0xa0));
        lVar2 = FUN_012be9c0(uVar3,param_2);
        if (lVar2 != 0) {
          FUN_01993f30(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x27a8),param_2,1,1);
        }
      }
    }
  }
  return;
}

