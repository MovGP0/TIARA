/* Ghidra address: 0180f080 */
/* Ghidra symbol: FUN_0180f080 */


void FUN_0180f080(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_40;
  undefined8 local_30;
  int local_24;
  longlong local_20;
  
  local_40 = auStack_78;
  local_30 = 0;
  cVar1 = FUN_01950840(param_3);
  if (cVar1 == '\0') {
    FUN_004c48b0(param_2,param_1);
  }
  else {
    FUN_004c4890(param_2);
    local_20 = FUN_01810fa0(&DAT_018103d8,1,0);
    uVar3 = (**(code **)(*param_3 + 0x118))(param_3);
    *(undefined8 *)(local_20 + 0x18) = uVar3;
    iVar2 = FUN_004b2060();
    local_24 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_004c4890(param_2);
        uVar3 = FUN_004b2070(param_1,local_24);
        local_58 = 0;
        FUN_01813180(local_20,&local_30,uVar3,0);
        FUN_004c81b0(param_2,local_30);
        FUN_004c48a0(param_2);
        local_24 = local_24 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_004c48a0(param_2);
    FUN_00410f20(local_20);
  }
  FUN_00414480(&local_30);
  return;
}

