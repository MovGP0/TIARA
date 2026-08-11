/* Ghidra address: 015988c0 */
/* Ghidra symbol: FUN_015988c0 */


undefined8
FUN_015988c0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(undefined4 *)(lVar1 + 0xa5) = param_2;
    *(undefined4 *)(lVar1 + 0x99) = param_3;
    *(undefined4 *)(lVar1 + 0xa9) = param_4;
    *(undefined4 *)(lVar1 + 0x95) = param_5;
    uVar2 = 0;
  }
  return uVar2;
}

