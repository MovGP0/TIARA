/* Ghidra address: 01995e00 */
/* Ghidra symbol: FUN_01995e00 */


undefined8 FUN_01995e00(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  if (((param_2 != (longlong *)0x0) &&
      (cVar1 = (**(code **)(*param_2 + 0x118))(param_2), cVar1 != '\0')) &&
     (iVar2 = (**(code **)(*param_2 + 0x1f8))
                        (param_2,*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70)),
     iVar2 != -1)) {
    return 1;
  }
  return 0;
}

