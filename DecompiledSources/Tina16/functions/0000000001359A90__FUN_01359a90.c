/* Ghidra address: 01359a90 */
/* Ghidra symbol: FUN_01359a90 */


void FUN_01359a90(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 local_28 [16];
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_0198d430(*(undefined8 *)(param_1 + 0x68));
    (**(code **)(*param_2 + 0x68))(param_2,uVar1,local_28);
    cVar2 = FUN_00b958f0(*(undefined8 *)(param_1 + 0x60));
    if (cVar2 != '\0') {
      FUN_00b95710(*(undefined8 *)(param_1 + 0x60),local_28);
    }
    FUN_00b957c0(*(undefined8 *)(param_1 + 0x60),local_28);
  }
  return;
}

