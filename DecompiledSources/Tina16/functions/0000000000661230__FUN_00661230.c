/* Ghidra address: 00661230 */
/* Ghidra symbol: FUN_00661230 */


undefined8 FUN_00661230(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  
  local_10 = 0;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x90) != 0)) {
    FUN_006611d0(auStack_38,*(undefined8 *)(param_1 + 0x90));
  }
  return local_10;
}

