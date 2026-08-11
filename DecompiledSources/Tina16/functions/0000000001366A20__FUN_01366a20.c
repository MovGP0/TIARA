/* Ghidra address: 01366a20 */
/* Ghidra symbol: FUN_01366a20 */


void FUN_01366a20(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0xc0))(param_2);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_2 + 0x118))(param_2);
      if ((cVar1 != '\0') && (*(char *)(*(longlong *)(param_1 + 0xb0) + 0x30) == '\0')) {
        cVar1 = FUN_01991990(*(undefined8 *)(param_1 + 0x68),param_2);
        if ((cVar1 == '\0') && (*(char *)(param_1 + 0x57) == '\0')) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
        *(undefined1 *)(param_1 + 0x57) = uVar2;
      }
    }
  }
  return;
}

