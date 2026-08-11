/* Ghidra address: 00cd0470 */
/* Ghidra symbol: FUN_00cd0470 */


void FUN_00cd0470(longlong param_1,byte param_2,char param_3)

{
  code *pcVar1;
  byte bVar2;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    if (param_3 == '\0') {
      pcVar1 = (code *)0x0;
    }
    else {
      pcVar1 = FUN_00ccba20;
    }
    bVar2 = (param_2 & 1) != 0;
    if ((param_2 & 2) != 0) {
      bVar2 = bVar2 | 2;
    }
    if ((param_2 & 4) != 0) {
      bVar2 = bVar2 | 4;
    }
    (**(code **)PTR_DAT_02002630)(*(longlong *)(param_1 + 0x48),bVar2,pcVar1);
    (**(code **)PTR_DAT_02004ed0)(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x30));
  }
  return;
}

