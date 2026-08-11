/* Ghidra address: 00a06200 */
/* Ghidra symbol: FUN_00a06200 */


undefined8 FUN_00a06200(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_00a061c0(param_1);
  if (*(longlong *)(lVar1 + 0x40) == 0) {
    FUN_00a06520(param_1);
  }
  return *(undefined8 *)(lVar1 + 0x40);
}

