/* Ghidra address: 00c232f0 */
/* Ghidra symbol: FUN_00c232f0 */


int FUN_00c232f0(longlong *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined2 local_38;
  undefined1 uStack_36;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  if (0xff < (int)param_1[2]) {
    FUN_0041ddd0(local_30,PTR_PTR_02001a70);
    FUN_00c1a320(local_30[0]);
  }
  iVar2 = (int)param_1[2];
  lVar3 = 0;
  if (param_1[1] != 0) {
    lVar3 = *(longlong *)(param_1[1] + -8);
  }
  if (lVar3 <= iVar2) {
    FUN_00c22fb0(param_1,iVar2 + 1);
  }
  FUN_00c22dd0(*param_1,&local_38,param_2);
  puVar1 = (undefined2 *)(param_1[1] + (longlong)(int)param_1[2] * 3);
  *puVar1 = local_38;
  *(undefined1 *)(puVar1 + 1) = uStack_36;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  (**(code **)(*param_1 + 0x38))(param_1);
  FUN_00414480(local_30);
  return iVar2;
}

