/* Ghidra address: 013fee50 */
/* Ghidra symbol: FUN_013fee50 */


void FUN_013fee50(undefined8 param_1,longlong param_2,longlong param_3,undefined2 param_4,
                 undefined2 param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong local_res18 [2];
  byte local_120 [256];
  undefined4 *local_20;
  
  local_res18[0] = param_3;
  FUN_00414610();
  lVar1 = local_res18[0];
  puVar5 = (undefined4 *)FUN_004095c0();
  *puVar5 = 0x67;
  puVar5[1] = 0x105;
  iVar3 = 0;
  if (lVar1 != 0) {
    iVar3 = *(int *)(lVar1 + -4);
  }
  iVar6 = 0;
  if (PTR_u_Arial_01f46e88 != (undefined *)0x0) {
    iVar6 = *(int *)(PTR_u_Arial_01f46e88 + -4);
  }
  puVar5[2] = iVar3 + iVar6 + 0x16;
  local_20 = puVar5 + 3;
  FUN_00416910(local_120,local_res18[0],0xff);
  FUN_00409a70(local_120,local_20,local_120[0] + 1);
  FUN_00b909d0(&local_20,local_120[0] + 1);
  *(undefined1 *)local_20 = 0;
  FUN_00b909d0(&local_20,1);
  FUN_00416910(local_120,PTR_u_Arial_01f46e88,0xff);
  FUN_00409a70(local_120,local_20,local_120[0] + 1);
  FUN_00b909d0(&local_20,local_120[0] + 1);
  *(undefined1 *)local_20 = 0;
  FUN_00b909d0(&local_20,1);
  puVar2 = local_20;
  *(undefined2 *)local_20 = param_4;
  *(undefined2 *)((longlong)local_20 + 2) = param_5;
  *(undefined8 *)(local_20 + 1) = 0x3feccccccccccccd;
  *(undefined1 *)(local_20 + 3) = 0;
  *(undefined1 *)((longlong)local_20 + 0xd) = 0;
  uVar4 = FUN_013feb30(param_1,L"COL_Caption",0x800000);
  *(undefined4 *)((longlong)puVar2 + 0xe) = uVar4;
  FUN_004ae7e0(*(undefined8 *)(param_2 + 0x38),puVar5);
  FUN_00414480(local_res18);
  return;
}

