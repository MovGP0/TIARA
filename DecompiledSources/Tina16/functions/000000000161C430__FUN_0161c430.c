/* Ghidra address: 0161c430 */
/* Ghidra symbol: FUN_0161c430 */


undefined4 * FUN_0161c430(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  puVar2 = (undefined4 *)FUN_004095c0(0xd0);
  FUN_0040d200(puVar2,0xd0,0);
  *puVar2 = 0x104;
  *(undefined8 *)(puVar2 + 2) = 0;
  *(undefined8 *)(puVar2 + 4) = 0;
  puVar2[0x12] = *(undefined4 *)(param_1 + 0xc);
  *(undefined1 *)(puVar2 + 0x2c) = 1;
  FUN_016477f0(uVar3,&local_20,*(undefined4 *)(param_1 + 0xc));
  iVar1 = 0;
  if (local_20 != 0) {
    iVar1 = *(int *)(local_20 + -4);
  }
  uVar3 = FUN_00409570((longlong)(iVar1 + 1));
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  FUN_00415dd0(local_30,local_20,0);
  FUN_004425e0(uVar3,local_30[0]);
  FUN_004144d0(local_30);
  FUN_00414480(&local_20);
  return puVar2;
}

