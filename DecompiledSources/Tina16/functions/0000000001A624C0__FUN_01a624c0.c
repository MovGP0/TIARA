/* Ghidra address: 01a624c0 */
/* Ghidra symbol: FUN_01a624c0 */


void FUN_01a624c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_res10;
  longlong local_res18 [2];
  undefined1 local_11;
  longlong local_10;
  
  local_10 = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18[0]);
  cVar1 = FUN_005b8460(&PTR_DAT_01a62708,local_res18[0]);
  if (cVar1 != '\0') {
    iVar3 = FUN_004170c0(&DAT_01a6271c,local_res18[0],1);
    if (0 < iVar3) {
      iVar3 = FUN_004170c0(&DAT_01a6272c,local_res18[0],1);
      uVar4 = 0;
      if (local_res18[0] != 0) {
        uVar4 = *(undefined4 *)(local_res18[0] + -4);
      }
      FUN_00416dc0(local_res18,local_res18[0],iVar3 + 3,uVar4);
      FUN_01a623d0(param_1,&local_10,local_res18);
      if (local_10 != 0) {
        uVar5 = FUN_00b8f2f0(local_10,*(undefined8 *)(PTR_DAT_02004010 + 0x2b0));
        *(undefined8 *)(PTR_DAT_02004010 + 0x2b0) = uVar5;
      }
      FUN_01a623d0(param_1,&local_10,local_res18);
      if (local_10 != 0) {
        uVar5 = FUN_00b8f2f0(local_10,*(undefined8 *)(PTR_DAT_02004010 + 0x2b8));
        *(undefined8 *)(PTR_DAT_02004010 + 0x2b8) = uVar5;
      }
      FUN_01a623d0(param_1,&local_10,local_res18);
      if (local_10 != 0) {
        uVar2 = FUN_0043fc50(local_10,PTR_DAT_02004010[0x817]);
        PTR_DAT_02004010[0x817] = uVar2;
      }
      FUN_01a623d0(param_1,&local_10,local_res18);
      if (local_10 != 0) {
        uVar2 = FUN_0043fc50(local_10,PTR_DAT_02004010[0x818]);
        PTR_DAT_02004010[0x818] = uVar2;
      }
      FUN_01a623d0(param_1,&local_10,local_res18);
      if (local_10 != 0) {
        local_11 = FUN_0043fc50(local_10,0);
        FUN_00f5cdb0(*(undefined8 *)(param_1 + 0x210),&local_11,1);
        FUN_019af700(*(undefined8 *)(param_1 + 0x210));
      }
    }
  }
  FUN_00414480(&local_10);
  FUN_00414560(&local_res10,2);
  return;
}

