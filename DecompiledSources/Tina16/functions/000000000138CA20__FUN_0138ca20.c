/* Ghidra address: 0138ca20 */
/* Ghidra symbol: FUN_0138ca20 */


void FUN_0138ca20(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xe38) + 0x260))(*(longlong **)(param_1 + 0xe38));
  if (iVar1 == -1) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x950),0);
    FUN_0064cbf0(*(undefined8 *)(param_1 + 0x950),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x950),0);
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xe38) + 0x260))(*(longlong **)(param_1 + 0xe38))
    ;
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x950),0 < iVar1);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xe38) + 0x260))(*(longlong **)(param_1 + 0xe38))
    ;
    FUN_004169a0(param_1 + 0xb58,PTR_DAT_02005b08 + (longlong)iVar1 * 0x11);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x950),0);
    FUN_0064cbf0(*(undefined8 *)(param_1 + 0x950),0);
    *(undefined8 *)(param_1 + 0xb60) = 0;
    FUN_010f6ef0(param_1);
  }
  return;
}

