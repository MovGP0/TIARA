/* Ghidra address: 00cae1d0 */
/* Ghidra symbol: FUN_00cae1d0 */


longlong * FUN_00cae1d0(longlong param_1,longlong *param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res20 = param_4;
  FUN_0041b910(param_4);
  FUN_00875240(local_20,local_res20,*(undefined8 *)(param_1 + 0x150),3);
  FUN_0041b840(&local_res20,local_20[0]);
  FUN_00414480(param_2);
  iVar3 = 0;
  if (0 < param_3) {
    do {
      FUN_00cad9f0(param_1,&local_28,local_res20);
      FUN_0043ea00(param_2,local_28);
      iVar1 = 0;
      if (*param_2 != 0) {
        iVar1 = *(int *)(*param_2 + -4);
      }
      if (0 < iVar1) goto LAB_00cae2fc;
      if (*(char *)(param_1 + 0x12d) != '\0') {
        FUN_0041ddd0(&local_30,PTR_PTR_02001988);
        uVar2 = FUN_0086dfd0(&PTR_FUN_00ca5d38,1,local_30);
        FUN_004134c0(uVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  FUN_0041ddd0(&local_38,PTR_PTR_02001ee0);
  uVar2 = FUN_0086dfd0(&PTR_FUN_00ca5fd8,1,local_38);
  FUN_004134c0(uVar2);
LAB_00cae2fc:
  FUN_00414560(&local_38,3);
  FUN_0041b800(local_20);
  FUN_0041b800(&local_res20);
  return param_2;
}

