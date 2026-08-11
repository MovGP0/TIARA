/* Ghidra address: 01446970 */
/* Ghidra symbol: FUN_01446970 */


void FUN_01446970(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_10;
  
  local_10 = 0;
  if (DAT_0210e4e8 == '\0') {
    iVar1 = FUN_019b5ce0(*(undefined8 *)(param_1 + 0x218),param_2);
    FUN_019b5f00(param_1 + 0x218,iVar1 + -1,1,param_2);
  }
  iVar1 = FUN_019b5ce0(*(undefined8 *)(param_1 + 0x1f0),param_2);
  FUN_019b5f00(param_1 + 0x1f0,iVar1 + -1,1,param_2);
  iVar1 = FUN_019b5ce0(*(undefined8 *)(param_1 + 0x1e8),param_2);
  FUN_019b5f00(param_1 + 0x1e8,iVar1 + -1,1,param_2);
  iVar2 = FUN_019b5ce0(*(undefined8 *)(param_1 + 0x1e0),param_2);
  iVar1 = 0;
  if (*(longlong *)(param_2 + 0x68) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_2 + 0x68) + -4);
  }
  if (iVar1 < iVar2) {
    FUN_019b9050(*(undefined8 *)(param_1 + 0x1e0),param_2);
  }
  iVar2 = FUN_019b5ce0(*(undefined8 *)(param_1 + 0x1f0),param_2);
  iVar1 = 0;
  if (*(longlong *)(param_2 + 0x68) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_2 + 0x68) + -4);
  }
  if (iVar1 < iVar2) {
    FUN_019b9050(*(undefined8 *)(param_1 + 0x1f0),param_2);
  }
  iVar2 = FUN_019b5ce0(*(undefined8 *)(param_1 + 0x1e8),param_2);
  iVar1 = 0;
  if (*(longlong *)(param_2 + 0x68) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_2 + 0x68) + -4);
  }
  if (iVar1 < iVar2) {
    FUN_019b9050(*(undefined8 *)(param_1 + 0x1e8),param_2);
  }
  iVar2 = FUN_019b5ce0(*(undefined8 *)(param_1 + 0x218),param_2);
  iVar1 = 0;
  if (*(longlong *)(param_2 + 0x68) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_2 + 0x68) + -4);
  }
  if (iVar1 < iVar2) {
    FUN_019b6360(param_1 + 0x218,&DAT_01446bc4,&LAB_01446bd4,param_2);
    FUN_019b9050(*(undefined8 *)(param_1 + 0x218),param_2);
  }
  iVar2 = FUN_019b5ce0(*(undefined8 *)(param_1 + 0xd8),param_2);
  iVar1 = 0;
  if (PTR_u_Additional_DC_level__01f4b650 != (undefined *)0x0) {
    iVar1 = *(int *)(PTR_u_Additional_DC_level__01f4b650 + -4);
  }
  if (iVar1 < iVar2) {
    FUN_019b9050(*(undefined8 *)(param_1 + 0xd8),param_2);
  }
  FUN_00414480(&local_10);
  return;
}

