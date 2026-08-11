/* Ghidra address: 01cfb400 */
/* Ghidra symbol: FUN_01cfb400 */


void FUN_01cfb400(longlong param_1,longlong *param_2)

{
  if (*(char *)(param_1 + 0xb) == '\0') {
    if (*(char *)(param_1 + 9) == '\0') {
      if (*(char *)(param_1 + 0x52) == '\0') {
        if (*(char *)(param_1 + 10) == '\0') {
          (**(code **)(*param_2 + 0xd0))(param_2,1);
        }
        else if (*(char *)(param_1 + 0xaa) == '\0') {
          (**(code **)(*param_2 + 0xd0))(param_2,3);
        }
        else {
          (**(code **)(*param_2 + 0xd0))(param_2,0x16);
        }
      }
      else {
        (**(code **)(*param_2 + 0xd0))(param_2,4);
      }
    }
    else {
      (**(code **)(*param_2 + 0xd0))(param_2,0);
    }
  }
  else {
    (**(code **)(*param_2 + 0xd0))(param_2,2);
  }
  return;
}

