/* Ghidra address: 01528ac0 */
/* Ghidra symbol: FUN_01528ac0 */


void FUN_01528ac0(longlong param_1,double *param_2)

{
  if (*param_2 != 0.0) {
    FUN_015289e0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x4c0),*param_2);
    *(double *)(*(longlong *)(param_1 + 0x50) + 0x3a0) = *param_2;
    FUN_016f6430(*(undefined8 *)(param_1 + 0x50),8,*param_2 * 6.283185307179586);
    FUN_016f3620(*(undefined8 *)(param_1 + 0x50),*param_2 * 6.283185307179586,8);
    FUN_01b07850(*(undefined8 *)(param_1 + 0x50),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x118),param_2[1]);
    FUN_01b07850(*(undefined8 *)(param_1 + 0x50),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x120),param_2[2]);
    FUN_01528a50(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x4c0),*param_2);
  }
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  return;
}

