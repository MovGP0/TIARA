/* Ghidra address: 01390c30 */
/* Ghidra symbol: FUN_01390c30 */


void FUN_01390c30(longlong param_1,double *param_2)

{
  if (*param_2 != 0.0) {
    FUN_01390b50(*(undefined8 *)(param_1 + 0x4c0),*param_2);
    *(double *)(param_1 + 0x3a0) = *param_2;
    FUN_016f6430(param_1,8,*param_2 * 6.283185307179586);
    FUN_016f3620(param_1,*param_2 * 6.283185307179586,8);
    FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x118),param_2[1]);
    FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x120),param_2[2]);
    FUN_01390bc0(*(undefined8 *)(param_1 + 0x4c0),*param_2);
  }
  if (*PTR_DAT_020052b8 == '\0') {
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  }
  return;
}

