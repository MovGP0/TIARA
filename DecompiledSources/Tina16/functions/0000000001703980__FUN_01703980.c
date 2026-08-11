/* Ghidra address: 01703980 */
/* Ghidra symbol: FUN_01703980 */


void FUN_01703980(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_01717260(*(undefined8 *)(param_1 + 0x760),*(undefined8 *)(param_1 + 0x738),
               *(undefined8 *)(param_1 + 0x740),local_res10,*(undefined1 *)(param_1 + 0x758),
               local_res18);
  FUN_017035f0(param_1,*(undefined8 *)(param_1 + 0x738));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x28))(*(longlong **)(param_1 + 0x738));
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),0 < iVar1);
  FUN_017025f0(param_1,0);
  FUN_01702a20(param_1,0);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x28))(*(longlong **)(param_1 + 0x738));
  (**(code **)(**(longlong **)(param_1 + 0x708) + 0x128))
            (*(longlong **)(param_1 + 0x708),
             CONCAT71((int7)((ulonglong)uVar2 >> 8),0 < (int)uVar2) & 0xffffffff);
  FUN_01703240(param_1,0);
  FUN_00414560(&local_res10,2);
  return;
}

