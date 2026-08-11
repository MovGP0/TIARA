/* Ghidra address: 00f84bb0 */
/* Ghidra symbol: FUN_00f84bb0 */


void FUN_00f84bb0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_00f85430(param_1);
  if ((cVar1 != '\0') || (*(char *)(param_1 + 0x6b1) != '\0')) {
    FUN_00f85050(param_1);
  }
  FUN_00f85230(param_1);
  if (*(longlong *)(param_1 + 0xd60) != 0) {
    cVar1 = FUN_01565440(*(longlong *)(param_1 + 0xd60));
    if (cVar1 != '\0') {
      cVar1 = FUN_015fa600(*(undefined8 *)(param_1 + 0xd68),*(undefined8 *)(param_1 + 0xd60));
      if (cVar1 != '\0') {
        FUN_015fa9c0(*(undefined8 *)(param_1 + 0xd68),*(undefined8 *)(param_1 + 0x6b8),
                     *(undefined8 *)(param_1 + 0xd60));
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x6b1) = 0;
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  return;
}

