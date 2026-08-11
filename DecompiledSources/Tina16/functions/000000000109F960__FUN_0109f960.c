/* Ghidra address: 0109f960 */
/* Ghidra symbol: FUN_0109f960 */


void FUN_0109f960(longlong *param_1,undefined8 param_2,int param_3,undefined1 *param_4,
                 undefined8 param_5,undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined8 local_30 [2];
  char local_19 [9];
  
  local_30[0] = 0;
  local_38 = 0;
  iVar2 = (**(code **)(*param_1 + 0x2f0))(param_1);
  if ((*(longlong *)(param_1[0x2cc] + 0x3548) != 0) && (iVar2 != -1)) {
    if ((iVar2 != -1) && (param_3 == iVar2)) {
      uVar4 = FUN_0109e760(param_1);
      FUN_004167d0(local_30,uVar4);
      FUN_0109e730(param_1,&local_38);
      iVar2 = FUN_00416db0(local_30[0],local_38);
      if (iVar2 == 0) {
        *param_4 = 1;
        *param_6 = 0xff8080;
        goto code_r0x0109fa6c;
      }
    }
    uVar4 = FUN_00f7bdb0(*(undefined8 *)(param_1[0x2cc] + 0x3548));
    uVar5 = FUN_0109e760(param_1);
    cVar1 = _Dbg_IsBreakPoint(uVar4,param_3,uVar5,local_19);
    if (cVar1 != '\0') {
      if (local_19[0] == '\0') {
        uVar3 = 0x9f9f;
      }
      else {
        uVar3 = 0xff;
      }
      *param_4 = 1;
      *param_6 = uVar3;
    }
  }
code_r0x0109fa6c:
  FUN_00414560(&local_38,2);
  return;
}

