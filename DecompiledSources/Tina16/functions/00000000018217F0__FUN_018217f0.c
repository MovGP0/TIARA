/* Ghidra address: 018217f0 */
/* Ghidra symbol: FUN_018217f0 */


undefined8 FUN_018217f0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_0043e100(*(undefined2 *)
                        (*(longlong *)(param_1 + 0xa8) + -2 + (longlong)*(int *)(param_1 + 0x84) * 2
                        ),&DAT_0182185c);
  if (cVar1 == '\0') {
    FUN_00414480(param_2);
  }
  else {
    FUN_00416780(param_2,*(undefined2 *)
                          (*(longlong *)(param_1 + 0xa8) + -2 +
                          (longlong)*(int *)(param_1 + 0x84) * 2));
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  }
  return param_2;
}

