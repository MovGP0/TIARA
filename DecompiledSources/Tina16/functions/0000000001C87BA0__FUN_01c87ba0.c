/* Ghidra address: 01c87ba0 */
/* Ghidra symbol: FUN_01c87ba0 */


void FUN_01c87ba0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 == '\x04') {
    cVar1 = (**(code **)(*param_2 + 0x2d8))(param_2);
    if (cVar1 != '\0') {
      uVar2 = FUN_0198d430(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x27a8));
      (**(code **)(*(longlong *)param_2[0x33] + 0x50))((longlong *)param_2[0x33],uVar2);
    }
  }
  return;
}

