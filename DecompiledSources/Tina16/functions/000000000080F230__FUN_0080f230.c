/* Ghidra address: 0080f230 */
/* Ghidra symbol: FUN_0080f230 */


undefined4 FUN_0080f230(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  while( true ) {
    lVar3 = 0;
    if (*(longlong *)(param_1 + 0x188) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x188) + -8);
    }
    if (lVar3 <= iVar2) break;
    lVar3 = (longlong)iVar2;
    if (*(longlong *)(*(longlong *)(param_1 + 0x188) + 8 + lVar3 * 0x18) == param_2) {
      return *(undefined4 *)(*(longlong *)(param_1 + 0x188) + lVar3 * 0x18);
    }
    if (*(int *)(*(longlong *)(param_1 + 0x188) + lVar3 * 0x18) == -1) break;
    iVar2 = iVar2 + 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x184);
  *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) + 1;
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x188) + -8);
  }
  if (lVar3 <= iVar2) {
    iVar2 = 0;
    if (*(longlong *)(param_1 + 0x188) != 0) {
      iVar2 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x188) + -8);
    }
    FUN_00419260(param_1 + 0x188,&DAT_007f41e8,1,(longlong)(iVar2 + 1));
  }
  lVar3 = (longlong)iVar2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x188) + lVar3 * 0x18) = uVar1;
  *(longlong *)(*(longlong *)(param_1 + 0x188) + 8 + lVar3 * 0x18) = param_2;
  *(bool *)(*(longlong *)(param_1 + 0x188) + 0x10 + lVar3 * 0x18) =
       *(longlong *)(param_2 + 0x668) != 0;
  return uVar1;
}

