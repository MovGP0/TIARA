/* Ghidra address: 0060a2b0 */
/* Ghidra symbol: FUN_0060a2b0 */


void FUN_0060a2b0(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  if ((char)param_1[0xd] != param_2) {
    if (1 < *(int *)(param_1[0xc] + 8)) {
      lVar1 = param_1[0xc];
      FUN_0060a460(param_1);
      FUN_00608f90(param_1,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x20),lVar1 + 0x40)
      ;
    }
    if ((char)param_1[0xd] == '\0') {
      FUN_0060a120(param_1);
    }
    else if (param_2 == '\0') {
      FUN_0060a1e0(param_1);
    }
    *(char *)(param_1 + 0xd) = param_2;
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

