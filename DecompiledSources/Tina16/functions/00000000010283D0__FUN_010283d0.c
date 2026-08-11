/* Ghidra address: 010283d0 */
/* Ghidra symbol: FUN_010283d0 */


void FUN_010283d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_res18 [2];
  undefined8 local_20;
  
  local_20 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar1 = FUN_01027e00(param_1,local_res18[0]);
  iVar2 = FUN_01028340(param_1,uVar1);
  FUN_01028350(param_1,iVar2);
  *(undefined4 *)(param_1 + 0x44 + (longlong)iVar2 * 4) = param_4;
  FUN_01028080(param_1,&local_20,iVar2);
  FUN_01028d30(param_1,param_2,local_20,~(byte)param_4,L"Change direction");
  FUN_00414480(&local_20);
  FUN_00414480(local_res18);
  return;
}

