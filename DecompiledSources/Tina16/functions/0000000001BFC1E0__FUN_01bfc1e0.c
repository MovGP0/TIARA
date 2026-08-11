/* Ghidra address: 01bfc1e0 */
/* Ghidra symbol: FUN_01bfc1e0 */


undefined8 FUN_01bfc1e0(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_005b4c20(param_1);
  if (((cVar1 != '\0') && (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x80) != 0)) &&
     (iVar2 = FUN_00416db0(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x80) + 0xf0),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xf8)), iVar2 == 0)) {
    return 1;
  }
  return 0;
}

