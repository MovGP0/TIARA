/* Ghidra address: 0098b470 */
/* Ghidra symbol: FUN_0098b470 */


bool FUN_0098b470(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  
  if ((char)param_1[1] == '\0') {
    uVar1 = FUN_00414520(param_1 + 5);
    (**(code **)(*param_1 + 0x30))(param_1,(longlong)param_1 + 0x24,uVar1,param_1 + 4);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return *(char *)((longlong)param_1 + 0x24) == param_2;
}

