/* Ghidra address: 017bd270 */
/* Ghidra symbol: FUN_017bd270 */


void FUN_017bd270(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  if (((param_2 != (longlong *)0x0) &&
      ((*(short *)(param_1 + 0x2d8) != -1 || (*(char *)((longlong)param_2 + 0x129) == '\0')))) &&
     ((*(short *)(param_1 + 0x2d8) < 0 || (*(char *)((longlong)param_2 + 0x12a) == '\0')))) {
    if (*(char *)(param_1 + 0xb) == '\0') {
      (**(code **)(*param_2 + 0xf0))(param_2,0);
      if (*(char *)(param_1 + 9) == '\0') {
        if (*(char *)(param_1 + 10) == '\0') {
          uVar1 = FUN_017bd220(param_1,param_2);
          (**(code **)(*param_2 + 0xb8))(param_2,uVar1);
        }
        else {
          FUN_01a9a440(param_2,0x15);
        }
      }
      else {
        FUN_01a9a440(param_2,0);
      }
    }
    else {
      (**(code **)(*param_2 + 0xf0))(param_2,1);
      FUN_01a9a440(param_2,0x14);
    }
    FUN_01d41fa0();
    (**(code **)(*param_2 + 0xe0))(param_2,2);
    (**(code **)(*param_2 + 0x58))
              (param_2,*(int *)(param_1 + 0xc) + -5,*(int *)(param_1 + 0x10) + -5,
               *(int *)(param_1 + 0xc) + 5,*(int *)(param_1 + 0x10) + 5);
    (**(code **)(*param_2 + 0x40))
              (param_2,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    (**(code **)(*param_2 + 0x48))
              (param_2,*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
    (**(code **)(*param_2 + 0xe0))(param_2,0);
    (**(code **)(*param_2 + 0xf0))(param_2,0);
    FUN_01d41f90();
  }
  return;
}

