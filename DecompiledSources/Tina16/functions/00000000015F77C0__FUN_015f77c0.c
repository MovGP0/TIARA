/* Ghidra address: 015f77c0 */
/* Ghidra symbol: FUN_015f77c0 */


undefined8 * FUN_015f77c0(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  
  FUN_0040d200(&local_48,0x10,0);
  iVar2 = 0;
  if (-1 < param_3 + -1) {
    puVar3 = &local_48;
    iVar4 = param_3;
    do {
      uVar1 = FUN_015f7660(param_2,iVar2,param_3,param_4);
      *(undefined4 *)puVar3 = uVar1;
      iVar2 = iVar2 + 1;
      puVar3 = (undefined8 *)((longlong)puVar3 + 4);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *param_1 = local_48;
  param_1[1] = uStack_40;
  return param_1;
}

