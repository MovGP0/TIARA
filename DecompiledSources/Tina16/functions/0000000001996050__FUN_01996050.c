/* Ghidra address: 01996050 */
/* Ghidra symbol: FUN_01996050 */


undefined8 FUN_01996050(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  if ((((param_2 != (longlong *)0x0) && (cVar1 = FUN_0198a580(param_2), cVar1 == '\x04')) &&
      (iVar2 = (**(code **)(*param_2 + 0x1c8))(param_2), iVar2 == 2)) &&
     ((iVar2 = (**(code **)(*param_2 + 0x1f8))
                         (param_2,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60)),
      iVar2 != -1 &&
      (iVar2 = (**(code **)(*param_2 + 0x1f8))
                         (param_2,*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70)),
      iVar2 != -1)))) {
    return 1;
  }
  return 0;
}

