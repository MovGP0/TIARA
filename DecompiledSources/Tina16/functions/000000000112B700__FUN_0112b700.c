/* Ghidra address: 0112b700 */
/* Ghidra symbol: FUN_0112b700 */


void FUN_0112b700(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40 [2];
  
  cVar1 = FUN_0044b3d0(param_1,local_40,param_3);
  cVar2 = '\0';
  if (cVar1 != '\0') {
    FUN_0112b8b0(&local_58,local_40[0]);
    *param_2 = local_58;
    param_2[1] = uStack_50;
    if (*(int *)((longlong)param_2 + 0xc) == 0) {
      uVar3 = FUN_0112b190(param_1,param_3);
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

