/* Ghidra address: 0135b500 */
/* Ghidra symbol: FUN_0135b500 */


void FUN_0135b500(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x118))(param_2);
    if (cVar1 != '\0') {
      FUN_01991f70(*(undefined8 *)(param_1 + 0x80),param_2,0);
    }
    uVar2 = FUN_0198d430(*(undefined8 *)(param_1 + 0x80));
    (**(code **)(*param_2 + 0xa8))(param_2,uVar2);
    FUN_0198b6d0(*(undefined8 *)(param_1 + 0x80),param_2);
  }
  return;
}

