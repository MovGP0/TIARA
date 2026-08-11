/* Ghidra address: 00c746c0 */
/* Ghidra symbol: FUN_00c746c0 */


void FUN_00c746c0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  thunk_FUN_039ed528();
  uVar3 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar3,0x202,0,0);
  (**(code **)(*param_1 + 0x180))(param_1);
  iVar2 = FUN_007e34a0(*(undefined8 *)(param_1[0xa8] + 0x80),param_2);
  if (*(longlong *)(param_1[0xaa] + (longlong)iVar2 * 0x10) != 0) {
    iVar2 = FUN_007e34a0(*(undefined8 *)(param_1[0xa8] + 0x80),param_2);
    puVar1 = (undefined8 *)(param_1[0xaa] + (longlong)iVar2 * 0x10);
    (*(code *)*puVar1)(puVar1[1],param_2);
  }
  return;
}

