/* Ghidra address: 00802770 */
/* Ghidra symbol: FUN_00802770 */


void FUN_00802770(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x4d5) != '\0') && (*(longlong *)(param_1 + 0x4c0) != 0)) {
    FUN_0064fca0(*(undefined8 *)(param_1 + 0x4c0),0xb004,0,param_2);
  }
  if (*(char *)(param_1 + 0x4d6) == '\x02') {
    lVar1 = FUN_007ff990(param_1);
    if (lVar1 != 0) {
      uVar2 = FUN_007ff990(param_1);
      FUN_00802770(uVar2,param_2);
    }
  }
  return;
}

