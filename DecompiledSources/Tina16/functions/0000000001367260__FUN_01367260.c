/* Ghidra address: 01367260 */
/* Ghidra symbol: FUN_01367260 */


void FUN_01367260(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0xc0))(param_2);
    if (cVar1 != '\0') {
      uVar2 = FUN_0198d430(*(undefined8 *)(param_1 + 0x48));
      (**(code **)(*param_2 + 0xd0))
                (param_2,uVar2,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x40));
    }
  }
  return;
}

