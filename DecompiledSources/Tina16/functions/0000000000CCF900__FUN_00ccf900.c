/* Ghidra address: 00ccf900 */
/* Ghidra symbol: FUN_00ccf900 */


void FUN_00ccf900(longlong param_1,int param_2)

{
  if ((((*(char *)(param_1 + 0x1b0) == '\0') && (param_2 != 0x274a)) && (param_2 != 0x2745)) &&
     (param_2 != 0x2746)) {
    FUN_00c99460(&PTR_FUN_00c97b70,*(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 0x18),param_2,0)
    ;
  }
  else {
    FUN_00cb9e50();
  }
  return;
}

