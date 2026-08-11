/* Ghidra address: 0197a020 */
/* Ghidra symbol: FUN_0197a020 */


void FUN_0197a020(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_0197d3c0(*(undefined8 *)(param_1 + 0xe0),param_2,1);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
    FUN_00410f20(*(undefined8 *)(lVar1 + 0x30));
    FUN_0197d670(lVar1,0);
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar1 = FUN_0197d3c0(*(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0xe0),param_2,1);
      if (lVar1 != 0) {
        FUN_0197d670(lVar1,0);
      }
    }
  }
  return;
}

