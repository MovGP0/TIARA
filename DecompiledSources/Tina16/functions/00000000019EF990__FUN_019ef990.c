/* Ghidra address: 019ef990 */
/* Ghidra symbol: FUN_019ef990 */


undefined8 FUN_019ef990(undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 local_50 [2];
  undefined8 local_3d;
  undefined8 uStack_35;
  undefined4 uStack_2d;
  undefined1 uStack_29;
  
  local_50[0] = 0;
  uVar3 = (**(code **)(*param_3 + 0xf8))(param_3);
  uVar3 = FUN_01d39f20(uVar3);
  lVar4 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,uVar3);
  iVar2 = *(int *)(lVar4 + 0xaf);
  FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,uVar3);
  puVar1 = (undefined8 *)
           (*(longlong *)PTR_DAT_02001338 + -0x15 + (longlong)(iVar2 + param_4) * 0x15);
  local_3d = *puVar1;
  uStack_35 = puVar1[1];
  uStack_2d = *(undefined4 *)(puVar1 + 2);
  uStack_29 = *(undefined1 *)((longlong)puVar1 + 0x14);
  FUN_004169a0(local_50,(longlong)&local_3d + 5);
  FUN_019eecc0(param_1,param_2,local_50[0]);
  FUN_00414480(local_50);
  return param_2;
}

