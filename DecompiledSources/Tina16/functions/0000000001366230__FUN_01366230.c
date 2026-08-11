/* Ghidra address: 01366230 */
/* Ghidra symbol: FUN_01366230 */


void FUN_01366230(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0xc0))(param_2);
    if (cVar1 != '\0') {
      if (*(char *)(*(longlong *)(param_1 + 0x60) + 0x20) == '\0') {
        uVar3 = FUN_0198d430(*(undefined8 *)(param_1 + 0x28));
        (**(code **)(*param_2 + 200))(param_2,uVar3,0xffffffff);
      }
      else {
        uVar3 = FUN_0198d430(*(undefined8 *)(param_1 + 0x28));
        uVar4 = FUN_0198d430(*(undefined8 *)(param_1 + 0x28));
        uVar2 = (**(code **)(*param_2 + 0x138))
                          (param_2,uVar4,*(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x18),
                           *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x1c));
        (**(code **)(*param_2 + 200))(param_2,uVar3,uVar2);
      }
    }
  }
  return;
}

