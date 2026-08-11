/* Ghidra address: 00ddfca0 */
/* Ghidra symbol: FUN_00ddfca0 */


void FUN_00ddfca0(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  if (((param_4 == *(int *)(param_1 + 0x98)) || (*(int *)(param_1 + 0x98) < 0)) &&
     ((param_5 == *(int *)(param_1 + 0x9c) || (*(int *)(param_1 + 0x9c) < 0)))) goto LAB_00ddfdee;
  uVar1 = thunk_FUN_03f3ed25(param_4,0x9ec,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98));
  uVar2 = thunk_FUN_03f3ed25(param_5,0x9ec,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98));
  local_40 = CONCAT44(uVar2,uVar1);
  if ((*(uint *)(param_1 + 0x4f0) & 0x400) == 0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x88))
                      (*(longlong **)(param_1 + 0x4b0),1,&local_40);
    if (iVar3 != 0) goto LAB_00ddfd6f;
  }
  else {
LAB_00ddfd6f:
    param_4 = *(int *)(param_1 + 0x98);
    param_5 = *(int *)(param_1 + 0x9c);
  }
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    FUN_00498350(local_38,*(int *)(param_1 + 0x90),*(int *)(param_1 + 0x94),
                 *(int *)(param_1 + 0x90) + param_4,*(int *)(param_1 + 0x94) + param_5);
    (**(code **)(**(longlong **)(param_1 + 0x4d8) + 0x38))
              (*(longlong **)(param_1 + 0x4d8),local_38,local_38);
  }
LAB_00ddfdee:
  FUN_0065aa90(param_1,param_2,param_3,param_4,param_5);
  return;
}

