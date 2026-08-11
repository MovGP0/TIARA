/* Ghidra address: 00848ac0 */
/* Ghidra symbol: FUN_00848ac0 */


void FUN_00848ac0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(longlong *)(param_1 + 0x530) == 0) {
    FUN_0083da60(param_1 + 0x530,*(undefined4 *)(param_1 + 0x4e0),*(undefined4 *)(param_1 + 0x4b4));
  }
  if (*(int *)(param_1 + 0x4e0) <= param_2) {
    FUN_0041ddd0(local_20,PTR_PTR_02004318);
    FUN_0083d530(local_20[0]);
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x530) + (longlong)(param_2 + 1) * 4);
  if (param_3 != iVar1) {
    FUN_00844dd0(param_1,param_2,iVar1,param_3);
    *(int *)(*(longlong *)(param_1 + 0x530) + (longlong)(param_2 + 1) * 4) = param_3;
    pcVar2 = (code *)FUN_00411550(param_1,0xff9c);
    (*pcVar2)(param_1);
  }
  FUN_00414480(local_20);
  return;
}

