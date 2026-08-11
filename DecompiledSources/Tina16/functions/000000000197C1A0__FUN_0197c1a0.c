/* Ghidra address: 0197c1a0 */
/* Ghidra symbol: FUN_0197c1a0 */


void FUN_0197c1a0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1[1]) {
    if ((param_2 == 0) || ((char)param_1[10] == '\0')) {
      if (param_1[1] != 0) {
        (**(code **)(*param_1 + 0x38))(param_1);
        *(undefined8 *)(param_1[1] + 0x140) = 0;
      }
      param_1[1] = param_2;
      if (param_2 != 0) {
        uVar1 = FUN_0197c280(param_1[0xb],param_2);
        *(undefined8 *)(param_2 + 0x140) = uVar1;
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x140) = 0;
    }
  }
  return;
}

