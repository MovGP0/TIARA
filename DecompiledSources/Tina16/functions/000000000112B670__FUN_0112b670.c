/* Ghidra address: 0112b670 */
/* Ghidra symbol: FUN_0112b670 */


void FUN_0112b670(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  
  cVar1 = FUN_0044b3d0(param_1,&local_30,PTR_DAT_02004830);
  cVar2 = '\0';
  if (cVar1 != '\0') {
    FUN_0112b8b0(&local_48,local_30);
    *param_2 = local_48;
    param_2[1] = uStack_40;
    if (*(int *)((longlong)param_2 + 0xc) == 0) {
      uVar3 = FUN_0112b190(param_1,PTR_DAT_02004830);
      *(uint *)((longlong)param_2 + 0xc) = (uint)uVar3;
    }
    cVar2 = FUN_0112b140(param_2);
  }
  if (cVar2 == '\0') {
    *param_2 = DAT_01f240ac;
    param_2[1] = DAT_01f240b4;
  }
  return;
}

