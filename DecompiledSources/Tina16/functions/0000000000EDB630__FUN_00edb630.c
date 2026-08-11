/* Ghidra address: 00edb630 */
/* Ghidra symbol: FUN_00edb630 */


byte * FUN_00edb630(longlong param_1,byte *param_2,undefined1 *param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  ulonglong in_stack_ffffffffffffffc8;
  ulonglong in_stack_ffffffffffffffd0;
  
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  cVar1 = FUN_016ba100(*(undefined8 *)(param_1 + 0xef8),0x5b);
  if (cVar1 == '\0') {
    in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffffffffffff00;
    FUN_016babb0(*(undefined8 *)(param_1 + 0xef8),0,&DAT_00edb72c,&DAT_00edb750,
                 in_stack_ffffffffffffffc8,param_2);
    iVar2 = FUN_00414f50(param_2,&LAB_00edb770,(ulonglong)*param_2 + 1);
    if (iVar2 == 0) {
      FUN_016babb0(*(undefined8 *)(param_1 + 0xef8),0,&DAT_00edb72c,&DAT_00edb750,
                   in_stack_ffffffffffffffc8 & 0xffffffffffffff00,param_2);
      *param_4 = 1;
    }
  }
  else {
    FUN_016ba960(*(undefined8 *)(param_1 + 0xef8),param_2,0,&DAT_00edb72c,&DAT_00edb730,
                 in_stack_ffffffffffffffd0 & 0xffffffffffffff00);
    FUN_016b9f90(*(undefined8 *)(param_1 + 0xef8),0x5d);
    *param_3 = 1;
  }
  return param_2;
}

