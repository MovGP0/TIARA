/* Ghidra address: 0186fda0 */
/* Ghidra symbol: FUN_0186fda0 */


void FUN_0186fda0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  FUN_0197c100(param_1,param_2);
  if (*(char *)(param_2 + 8) == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x38))(param_1);
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_0186fdd0;
    }
  }
  uVar2 = 1;
LAB_0186fdd0:
  *(undefined1 *)(param_2 + 8) = uVar2;
  return;
}

