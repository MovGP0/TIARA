/* Ghidra address: 004b92d0 */
/* Ghidra symbol: FUN_004b92d0 */


uint FUN_004b92d0(uint *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00419500(param_2);
  *param_1 = 0;
  lVar2 = 0;
  if (local_res10[0] != 0) {
    lVar2 = *(longlong *)(local_res10[0] + -8);
  }
  if (param_3 < lVar2) {
    *param_1 = *param_1 | (uint)*(byte *)(local_res10[0] + param_3);
  }
  lVar2 = 0;
  if (local_res10[0] != 0) {
    lVar2 = *(longlong *)(local_res10[0] + -8);
  }
  if (param_3 + 1 < lVar2) {
    *param_1 = *param_1 | (uint)*(byte *)(local_res10[0] + (param_3 + 1)) << 8;
  }
  lVar2 = 0;
  if (local_res10[0] != 0) {
    lVar2 = *(longlong *)(local_res10[0] + -8);
  }
  if (param_3 + 2 < lVar2) {
    *param_1 = *param_1 | (uint)*(byte *)(local_res10[0] + (param_3 + 2)) << 0x10;
  }
  lVar2 = 0;
  if (local_res10[0] != 0) {
    lVar2 = *(longlong *)(local_res10[0] + -8);
  }
  if (param_3 + 3 < lVar2) {
    *param_1 = *param_1 | (uint)*(byte *)(local_res10[0] + (param_3 + 3)) << 0x18;
  }
  uVar1 = *param_1;
  FUN_00419430(local_res10,&DAT_00406578);
  return uVar1;
}

