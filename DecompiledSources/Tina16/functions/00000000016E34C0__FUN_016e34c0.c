/* Ghidra address: 016e34c0 */
/* Ghidra symbol: FUN_016e34c0 */


void FUN_016e34c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x44) == '\x01') {
    uVar2 = *(undefined8 *)(lVar1 + 0x720);
  }
  else if (*(char *)(param_1 + 0x44) == '\x02') {
    uVar2 = *(undefined8 *)(lVar1 + 0x728);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x748);
  }
  FUN_016ee0e0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58),
               *(int *)(param_1 + 0x3c) + 1,uVar2);
  return;
}

